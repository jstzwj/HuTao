
#include <hutao/common/HuString.h>
namespace hutao
{
    HuString HuStringChars::as_str() const
    {
        std::string new_str;
        const std::uint8_t* endp = str->storage.data() + str->storage.size();
        for (const std::uint8_t* p = pos; p < endp; ++p)
        {
            new_str.push_back(*p);
        }
        return HuString(new_str);
    }

    std::optional<HuChar> HuStringChars::next()
    {
        const std::uint8_t* b = str->storage.data();
        std::size_t size = str->storage.size();
        if (pos < str->storage.data() + str->storage.size())
        {
            std::uint32_t cp;
            next_code_point(pos, b + size, cp);
            return cp;
        }
        else
        {
            return {};
        }
    }

    std::size_t HuStringChars::advance_by(std::size_t n)
    {
        for (std::size_t i = 0; i < n; ++i) {
            std::optional<HuChar> c = next();
            if (!c.has_value()) return i;
        }
        return n;
    }

    std::optional<HuChar> HuStringChars::nth(std::size_t n)
    {
        std::optional<HuChar> c = advance_by(n);
        return next();
    }

    bool HuStringChars::next_code_point(const std::uint8_t*& i, const std::uint8_t* end, std::uint32_t& codepoint)
    {
        std::uint8_t x = get_byte_or_0(i, end);
        if (x < 128)
        {
            codepoint = x;
            return true;
        }

        std::uint8_t init = utf8_first_byte(x, 2);
        i++;
        std::uint8_t y = get_byte_or_0(i, end);

        std::uint32_t ch = utf8_acc_cont_byte(init, y);
        if (x >= 0xE0)
        {
            // [[x y z] w] case
            // 5th bit in 0xE0 .. 0xEF is always clear, so `init` is still valid
            i++;
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
}