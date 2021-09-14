#ifndef HUTAO_COMPILER_LEXER_H_
#define HUTAO_COMPILER_LEXER_H_

#include <vector>
#include <optional>

#include <hutao/common/hustring.h>
#include <hutao/compiler/token.h>

namespace hutao
{
    class Cursor
    {
    private:
        hutao::HuString _source;
        std::size_t _initial_len;
        hutao::HuStringChars _chars;
        hutao::HuChar _prev;

    public:
        Cursor(hutao::HuString source)
            : _source(source), _initial_len(_source.length()), _chars(_source.chars()), _prev(EOF)
        {
        }

        // Charactor tools
        hutao::HuStringChars chars() const { return _chars; }

        HuChar nth_char(std::size_t n) const
        {
            return chars().nth(n).value_or(EOF);
        }

        HuChar first() const
        {
            return nth_char(0);
        }

        HuChar second() const
        {
            return nth_char(1);
        }

        HuChar prev() const
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
        std::optional<hutao::HuChar> bump()
        {
            std::optional<hutao::HuChar> c = _chars.next();
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

        bool is_identifier_char(HuChar c);

        bool is_identifier_start(HuChar c);

        bool is_identifier_continue(HuChar c);

        bool is_whitespace(HuChar c);
    };
}
#endif