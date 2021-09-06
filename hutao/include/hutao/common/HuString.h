#ifndef HUTAO_COMMON_HUSTRING_H_
#define HUTAO_COMMON_HUSTRING_H_

#include <string>
#include <vector>
#include <exception>
#include <stdexcept>
#include <stdint.h>
#include <ostream>

#include <fmt/core.h>

#define MAX_ONE_B 0x80
#define MAX_TWO_B 0x800
#define MAX_THREE_B 0x10000

#define TAG_CONT 0b1000'0000
#define TAG_TWO_B 0b1100'0000
#define TAG_THREE_B 0b1110'0000
#define TAG_FOUR_B 0b1111'0000

namespace hutao
{
    class huchar
    {
    public:
        using CodePointType = std::uint32_t;
        using CharType = std::uint8_t;

        huchar()
            : code()
        {
        }

        huchar(char charIn)
            : code(charIn)
        {
        }

        std::size_t len_utf8() const { return len_utf8(code); }

        std::size_t len_utf16() const { return len_utf16(code); }

        std::size_t encode_utf8(std::uint8_t *dst, std::size_t len) const
        {
            return encode_utf8_raw(this->code, dst, len);
        }

        static huchar from_u32(std::uint32_t i)
        {
            huchar ret;
            ret.code = i;
            return ret;
        }

        friend std::ostream &operator<<(std::ostream &out, const huchar &c)
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
    class hustring
    {
    public:
        using CodePointType = huchar::CodePointType;
        using CharType = huchar::CharType;

        hustring()
            : storage()
        {
        }

        hustring(std::string s)
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

        void push(huchar c)
        {
            std::uint8_t buffer[5] = {0};
            std::size_t len = c.encode_utf8(buffer, 5);
            for (std::size_t i = 0; i < len; ++i)
            {
                this->storage.push_back(buffer[i]);
            }
        }

        friend std::ostream &operator<<(std::ostream &out, const hustring &s)
        {
            // out << s.id << ":" << s.name.c_str() << endl;
            return out;
        }

        static hustring from_utf8(std::string str)
        {
        }

        static hustring with_capacity(std::size_t capacity)
        {
            hustring ret;
            ret.storage.reserve(capacity);
            return ret;
        }

    private:
        std::vector<std::uint8_t> storage;
    };
}

#endif