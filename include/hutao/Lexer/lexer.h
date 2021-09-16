#ifndef HUTAO_COMPILER_LEXER_H_
#define HUTAO_COMPILER_LEXER_H_

#include <vector>
#include <optional>

#include <hutao/Basic/UniString.h>
#include <hutao/Lexer/Token.h>

namespace hutao
{
    class Cursor
    {
    private:
        hutao::UniString _source;
        std::size_t _initial_len;
        hutao::UniStringChars _chars;
        hutao::UniChar _prev;

    public:
        Cursor(hutao::UniString source)
            : _source(source), _initial_len(_source.length()), _chars(_source.chars()), _prev(EOF)
        {
        }

        // Charactor tools
        hutao::UniStringChars chars() const { return _chars; }

        UniChar nth_char(std::size_t n) const
        {
            return chars().nth(n).value_or(EOF);
        }

        UniChar first() const
        {
            return nth_char(0);
        }

        UniChar second() const
        {
            return nth_char(1);
        }

        UniChar prev() const
        {
            return _prev;
        }

        bool is_eof()
        {
            return _chars.as_str().empty();
        }

        std::size_t len_consumed()
        {
            return _initial_len - _chars.as_str().length();
        }

        /// Moves to the next character.
        std::optional<hutao::UniChar> bump()
        {
            std::optional<hutao::UniChar> c = _chars.next();
            if (!c.has_value())
                return {};
            _prev = c.value();

            return c;
        }

        // Lex methods
        Token advance_token();

        TokenKind whitespace();

        TokenKind identifier_or_unknown();

        TokenKind line_comment();

        TokenKind block_comment();

        TokenKind number();

        // Other tools
        template <class FN>
        void eat_while(FN predicate)
        {
            while (predicate(first()) && !is_eof())
            {
                bump();
            }
        }

        bool eat_decimal_digits();

        bool is_identifier_char(UniChar c);

        bool is_identifier_start(UniChar c);

        bool is_identifier_continue(UniChar c);

        bool is_whitespace(UniChar c);
    };
}
#endif