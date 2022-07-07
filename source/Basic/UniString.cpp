
#include <hutao/Basic/UniString.h>
namespace hutao
{
    UniString UniStringChars::as_str() const
    {
        std::string new_str;
        const std::uint8_t* endp = str->storage.data() + str->storage.size();
        for (const std::uint8_t* p = pos; p < endp; ++p)
        {
            new_str.push_back(*p);
        }
        return UniString(new_str);
    }

    std::optional<UniChar> UniStringChars::next()
    {
        const std::uint8_t* b = str->storage.data();
        std::size_t size = str->storage.size();
        if (pos < str->storage.data() + str->storage.size())
        {
            std::uint32_t cp;
            next_code_point(pos, b + size, cp);
            return UniChar(cp);
        }
        else
        {
            return {};
        }
    }

    std::size_t UniStringChars::advance_by(std::size_t n)
    {
        for (std::size_t i = 0; i < n; ++i) {
            std::optional<UniChar> c = next();
            if (!c.has_value()) return i;
        }
        return n;
    }

    std::optional<UniChar> UniStringChars::nth(std::size_t n)
    {
        std::optional<UniChar> c = advance_by(n);
        return next();
    }


    /// Returns the value of `ch` updated with continuation byte `byte`.


    /// Returns the initial codepoint accumulator for the first byte.
    /// The first byte is special, only want bottom 5 bits for width 2, 4 bits
    /// for width 3, and 3 bits for width 4.

    inline std::uint32_t UniStringChars::utf8_first_byte(std::uint8_t b, std::uint32_t width)
    {
        return b & (0x7F >> width);
    }

    inline std::uint32_t UniStringChars::utf8_acc_cont_byte(std::uint32_t ch, std::uint8_t b)
    {
        return (ch << 6) | (b & CONT_MASK);
    }

    inline std::uint8_t UniStringChars::get_byte_or_0(const std::uint8_t*& i, const std::uint8_t* end)
    {
        if (i < end) return *(i++);
        else return 0;
    }

    bool UniStringChars::next_code_point(const std::uint8_t*& i, const std::uint8_t* end, std::uint32_t& codepoint)
    {
        std::uint8_t x = get_byte_or_0(i, end);
        if (x < 128)
        {
            codepoint = x;
            return true;
        }

        std::uint8_t init = utf8_first_byte(x, 2);
        std::uint8_t y = get_byte_or_0(i, end);

        std::uint32_t ch = utf8_acc_cont_byte(init, y);
        if (x >= 0xE0)
        {
            // [[x y z] w] case
            // 5th bit in 0xE0 .. 0xEF is always clear, so `init` is still valid
            std::uint8_t z = get_byte_or_0(i, end);
            std::uint32_t y_z = utf8_acc_cont_byte(y & CONT_MASK, z);
            ch = init << 12 | y_z;
            if (x >= 0xF0)
            {
                // [x y z w] case
                // use only the lower 3 bits of `init`
                i++;
                std::uint8_t w = get_byte_or_0(i, end);
                ch = (init & 7) << 18 | utf8_acc_cont_byte(y_z, w);
            }
        }
        codepoint = ch;
        return true;
    }
    std::size_t UniChar::len_utf8(std::uint32_t code)
    {
        if (code < MAX_ONE_B)
            return 1;
        else if (code < MAX_TWO_B)
            return 2;
        else if (code < MAX_THREE_B)
            return 3;
        else
            return 4;
    }
    std::size_t UniChar::len_utf16(std::uint16_t code)
    {
        std::uint32_t ch = code;
        if ((ch & 0xFFFF) == ch)
            return 1;
        else
            return 2;
    }
    std::size_t UniChar::encode_utf8_raw(CodePointType code, CharType* dst, std::size_t dst_len)
    {
        std::size_t len = len_utf8(code);
        if (dst_len < len)
        {
            throw std::runtime_error(
                fmt::format("encode_utf8: need {} bytes to encode U+{:X}, but the buffer has {}",
                    len,
                    code,
                    dst_len));
        }
        if (len == 1)
        {
            dst[0] = static_cast<CharType>(code);
        }
        else if (len == 2)
        {
            dst[0] = static_cast<CharType>((code >> 6 & 0x1F) | TAG_TWO_B);
            dst[1] = static_cast<CharType>((code & 0x3F) | TAG_CONT);
        }
        else if (len == 3)
        {
            dst[0] = static_cast<CharType>((code >> 12 & 0x0F) | TAG_THREE_B);
            dst[1] = static_cast<CharType>((code >> 6 & 0x3F) | TAG_CONT);
            dst[2] = static_cast<CharType>((code & 0x3F) | TAG_CONT);
        }
        else if (len == 4)
        {
            dst[0] = static_cast<CharType>((code >> 18 & 0x07) | TAG_THREE_B);
            dst[1] = static_cast<CharType>((code >> 12 & 0x3F) | TAG_CONT);
            dst[2] = static_cast<CharType>((code >> 6 & 0x3F) | TAG_CONT);
            dst[3] = static_cast<CharType>((code & 0x3F) | TAG_CONT);
        }

        return len;
    }
    std::size_t UniChar::encode_utf16_raw(CodePointType code, CharType* dst, std::size_t dst_len)
    {
        if ((code & 0xFFFF) == code && dst_len >= 2)
        {
            dst[0] = (code >> 8) & 0xFF;
            dst[1] = code & 0xFF;
        }
        else if (dst_len >= 4)
        {
            // Supplementary planes break into surrogates.
            code -= 0x1'0000;
            dst[0] = (0xD800 | (code >> 10)) >> 8 & 0xFF;
            dst[1] = (0xD800 | (code >> 10)) & 0xFF;
            dst[2] = (0xDC00 | (code & 0x3FF)) >> 8 & 0xFF;
            dst[3] = (0xDC00 | (code & 0x3FF)) & 0xFF;
            ;
        }
        else
        {
            throw std::runtime_error(
                fmt::format(
                    "encode_utf16: need {} units to encode U+{:X}, but the buffer has {}",
                    len_utf16(code),
                    code,
                    dst_len));
        }
    }
}