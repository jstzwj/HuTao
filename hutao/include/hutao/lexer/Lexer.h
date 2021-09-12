#ifndef HUTAO_LEXER_LEXER_H_
#define HUTAO_LEXER_LEXER_H_

#include <vector>
#include <optional>

#include <hutao/common/HuString.h>
#include <hutao/lexer/Token.h>

namespace hutao
{
    namespace lexer
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
                :_source(source), _initial_len(_source.length()), _chars(_source.chars()), _prev(EOF)
            {

            }

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
                if (!c.has_value()) return {};
                _prev = c.value();

                return c;
            }

            Token advance_token() {
                hutao::HuChar first_char = bump().value();
                TokenKind token_kind = TokenKind::Unknown;

                if (first_char == '/')
                {
                    HuChar fst = first();
                    if (fst == '/')
                    {
                        token_kind = line_comment();
                    }
                    else if (fst == '*')
                    {
                        token_kind = block_comment();
                    }
                }

                return Token(token_kind, len_consumed());

            }

            TokenKind line_comment()
            {
                bump();
                eat_while([](HuChar c) { return c != '\n'; });
                return TokenKind::LineComment;
            }

            TokenKind block_comment() {
                return TokenKind::BlockComment;
            }

            template<class FN>
            void eat_while(FN predicate) {
                while(predicate(first()) && !is_eof())
                {
                    bump();
                }
            }
        };
    }
}
#endif