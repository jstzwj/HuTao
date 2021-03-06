#pragma once

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

    class UniString;

    class UniChar
    {
    public:
        using CodePointType = std::uint32_t;
        using CharType = std::uint8_t;

        UniChar()
            : code()
        {
        }

        UniChar(std::uint32_t charIn)
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

        static UniChar from_u32(std::uint32_t i)
        {
            UniChar ret;
            ret.code = i;
            return ret;
        }

        friend std::ostream &operator<<(std::ostream &out, const UniChar &c)
        {
            unsigned char buffer[5] = {0};
            c.encode_utf8(buffer, 5);
            out << buffer;
            return out;
        }

    protected:
        static std::size_t len_utf8(std::uint32_t code);

        static std::size_t len_utf16(std::uint16_t code);
        static std::size_t encode_utf8_raw(CodePointType code, CharType* dst, std::size_t dst_len);

        static std::size_t encode_utf16_raw(CodePointType code, CharType* dst, std::size_t dst_len);

    private:
        CodePointType code;
    };


    
    class UniStringChars
    {
    public:
        UniStringChars(const UniString* str, const std::uint8_t* pos)
            :str(str), pos(pos)
        {
        }
        UniStringChars& operator = (const UniStringChars& iter)
        {
            str = iter.str;
            pos = iter.pos;
        }
        bool operator != (const UniStringChars& iter)
        {
            return str != iter.str || pos != iter.pos;
        }
        bool operator == (const UniStringChars& iter)
        {
            return str == iter.str && pos == iter.pos;
        }
        UniStringChars& operator ++ ()
        {
            pos++;
            return *this;
        }
        UniStringChars operator ++ (int)
        {
            UniStringChars tmp = *this;
            pos++;
            return tmp;
        }

        UniString as_str() const;

        std::optional<UniChar> next();

        std::size_t advance_by(std::size_t n);

        std::optional<UniChar> nth(std::size_t n);

        /// Returns the initial codepoint accumulator for the first byte.
        /// The first byte is special, only want bottom 5 bits for width 2, 4 bits
        /// for width 3, and 3 bits for width 4.
        static std::uint32_t utf8_first_byte(std::uint8_t b, std::uint32_t width);

        /// Returns the value of `ch` updated with continuation byte `byte`.
        static std::uint32_t utf8_acc_cont_byte(std::uint32_t ch, std::uint8_t b);

        static std::uint8_t get_byte_or_0(const std::uint8_t*& i, const std::uint8_t* end);


        static bool next_code_point(const std::uint8_t*& i, const std::uint8_t* end, std::uint32_t& codepoint);
    private:
        const UniString* str;
        const std::uint8_t* pos;
    };

    class HuSpan
    {
    public:
        HuSpan(std::size_t start, std::size_t len)
            :_start(start), _len(len)
        {

        }
    private:
        std::size_t _start;
        std::size_t _len;
    };

    class UniString
    {
    public:
        using CodePointType = UniChar::CodePointType;
        using CharType = UniChar::CharType;

        UniString()
            : storage()
        {
        }

        UniString(std::string s)
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

        void push(UniChar c)
        {
            std::uint8_t buffer[5] = {0};
            std::size_t len = c.encode_utf8(buffer, 5);
            for (std::size_t i = 0; i < len; ++i)
            {
                this->storage.push_back(buffer[i]);
            }
        }

        UniStringChars chars() const
        {
            return UniStringChars(this, this->storage.data());
        }

        friend std::ostream &operator<<(std::ostream &out, const UniString &s)
        {
            UniStringChars chars = s.chars();

            while (true)
            {
                auto value = chars.next();
                if (value.has_value())
                    out << value.value();
                else
                    break;
            }
            return out;
        }

        static UniString from_utf8(std::string str)
        {
            return UniString(str);
        }

        static UniString with_capacity(std::size_t capacity)
        {
            UniString ret;
            ret.storage.reserve(capacity);
            return ret;
        }

    private:
        std::vector<std::uint8_t> storage;
        friend class UniStringChars;
    };
}
