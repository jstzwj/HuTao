#ifndef HUTAO_COMMON_HUSTRING_H_
#define HUTAO_COMMON_HUSTRING_H_

#include <string>
#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm>
#include <stdint.h>
#include <ostream>
#include <optional>

#include <fmt/core.h>

#define MAX_ONE_B 0x80
#define MAX_TWO_B 0x800
#define MAX_THREE_B 0x10000

#define TAG_CONT 0b1000'0000
#define TAG_TWO_B 0b1100'0000
#define TAG_THREE_B 0b1110'0000
#define TAG_FOUR_B 0b1111'0000

/// Mask of the value bits of a continuation byte.
#define CONT_MASK 0b0011'1111
/// Value of the tag bits (tag mask is !CONT_MASK) of a continuation byte.
#define TAG_CONT_U8 0b1000'0000

namespace hutao
{

    class HuString;

    class HuChar
    {
    public:
        using CodePointType = std::uint32_t;
        using CharType = std::uint8_t;

        HuChar()
            : code()
        {
        }

        HuChar(std::uint32_t charIn)
            : code(charIn)
        {
        }

        bool operator ==(std::uint32_t c)
        {
            return c == code;
        }

        bool operator !=(std::uint32_t c)
        {
            return c != code;
        }

        bool operator < (std::uint32_t c)
        {
            return code < c;
        }

        bool operator > (std::uint32_t c)
        {
            return code > c;
        }

        bool operator <= (std::uint32_t c)
        {
            return code <= c;
        }

        bool operator >= (std::uint32_t c)
        {
            return code >= c;
        }

        std::size_t len_utf8() const { return len_utf8(code); }

        std::size_t len_utf16() const { return len_utf16(code); }

        std::size_t encode_utf8(std::uint8_t *dst, std::size_t len) const
        {
            return encode_utf8_raw(this->code, dst, len);
        }

        static HuChar from_u32(std::uint32_t i)
        {
            HuChar ret;
            ret.code = i;
            return ret;
        }

        friend std::ostream &operator<<(std::ostream &out, const HuChar &c)
        {
            unsigned char buffer[5] = {0};
            c.encode_utf8(buffer, 5);
            out << buffer;
            return out;
        }

    protected:
        static std::size_t len_utf8(std::uint32_t code)
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

        static std::size_t len_utf16(std::uint16_t code)
        {
            std::uint32_t ch = code;
            if ((ch & 0xFFFF) == ch)
                return 1;
            else
                return 2;
        }
        static std::size_t encode_utf8_raw(CodePointType code, CharType *dst, std::size_t dst_len)
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

        static std::size_t encode_utf16_raw(CodePointType code, CharType *dst, std::size_t dst_len)
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

    private:
        CodePointType code;
    };


    
    class HuStringChars
    {
    public:
        HuStringChars(const HuString* str, const std::uint8_t* pos)
            :str(str), pos(pos)
        {
        }
        HuStringChars& operator = (const HuStringChars& iter)
        {
            str = iter.str;
            pos = iter.pos;
        }
        bool operator != (const HuStringChars& iter)
        {
            return str != iter.str || pos != iter.pos;
        }
        bool operator == (const HuStringChars& iter)
        {
            return str == iter.str && pos == iter.pos;
        }
        HuStringChars& operator ++ ()
        {
            pos++;
            return *this;
        }
        HuStringChars operator ++ (int)
        {
            HuStringChars tmp = *this;
            pos++;
            return tmp;
        }

        HuString as_str() const;

        std::optional<HuChar> next();

        std::size_t advance_by(std::size_t n);

        std::optional<HuChar> nth(std::size_t n);

        /// Returns the initial codepoint accumulator for the first byte.
        /// The first byte is special, only want bottom 5 bits for width 2, 4 bits
        /// for width 3, and 3 bits for width 4.
        static std::uint32_t utf8_first_byte(std::uint8_t b, std::uint32_t width)
        {
            return b & (0x7F >> width);
        }

        /// Returns the value of `ch` updated with continuation byte `byte`.
        static std::uint32_t utf8_acc_cont_byte(std::uint32_t ch, std::uint8_t b)
        {
            return (ch << 6) | (b & CONT_MASK);
        }

        static std::uint8_t get_byte_or_0(const std::uint8_t*& i, const std::uint8_t* end)
        {
            if (i < end) return *(i++);
            else return 0;
        }


        static bool next_code_point(const std::uint8_t*& i, const std::uint8_t* end, std::uint32_t& codepoint);
    private:
        const HuString* str;
        const std::uint8_t* pos;
    };

    class HuString
    {
    public:
        using CodePointType = HuChar::CodePointType;
        using CharType = HuChar::CharType;

        HuString()
            : storage()
        {
        }

        HuString(std::string s)
            : storage()
        {
            for (const char &c : s)
            {
                this->storage.push_back(c);
            }
        }

        std::size_t capacity() const { return this->storage.capacity(); }

        std::size_t length() const { return this->storage.size(); }

        bool empty() const { return this->storage.empty(); }

        void clear() { this->storage.clear(); }

        void push(HuChar c)
        {
            std::uint8_t buffer[5] = {0};
            std::size_t len = c.encode_utf8(buffer, 5);
            for (std::size_t i = 0; i < len; ++i)
            {
                this->storage.push_back(buffer[i]);
            }
        }

        HuStringChars chars()
        {
            return HuStringChars(this, this->storage.data());
        }

        friend std::ostream &operator<<(std::ostream &out, const HuString &s)
        {
            // out << s.id << ":" << s.name.c_str() << endl;
            return out;
        }

        static HuString from_utf8(std::string str)
        {
            return HuString(str);
        }

        static HuString with_capacity(std::size_t capacity)
        {
            HuString ret;
            ret.storage.reserve(capacity);
            return ret;
        }

    private:
        std::vector<std::uint8_t> storage;
        friend class HuStringChars;
    };
}

#endif