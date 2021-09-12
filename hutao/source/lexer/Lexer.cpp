#include <hutao/lexer/Lexer.h>

namespace hutao
{
    namespace lexer
    {
        // Lex methods
        Token Cursor::advance_token() {
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
            else if (is_whitespace(first_char))
            {
                token_kind = whitespace();
            }
            else if (is_identifier_start(first_char))
            {
                token_kind = identifier_or_unknown();
            }
            // Numeric literal.
            else if (first_char >= '0' && first_char <= '9')
            {
                token_kind = number();
            }
            // One-symbol tokens.
            else if (first_char == ';')
            {
                token_kind = TokenKind::Semi;
            }
            else if (first_char == ',')
            {
                token_kind = TokenKind::Comma;
            }
            else if (first_char == '.')
            {
                
            }
            else if (first_char == '(')
            {
                token_kind = TokenKind::OpenParen;
            }
            else if (first_char == ')')
            {
                token_kind = TokenKind::CloseParen;
            }
            else if (first_char == '{')
            {

            }
            else if (first_char == '}')
            {

            }
            else if (first_char == '[')
            {

            }
            else if (first_char == ']')
            {

            }
            else if (first_char == '@')
            {

            }
            else if (first_char == '#')
            {

            }
            else if (first_char == '~')
            {

            }
            else if (first_char == '?')
            {

            }
            else if (first_char == ':')
            {

            }
            else if (first_char == '$')
            {

            }
            else if (first_char == '=')
            {
                token_kind = TokenKind::Eq;
            }
            else if (first_char == '!')
            {

            }
            else if (first_char == '<')
            {

            }
            else if (first_char == '>')
            {

            }
            else if (first_char == '-')
            {

            }
            else if (first_char == '&')
            {

            }
            else if (first_char == '|')
            {

            }
            else if (first_char == '+')
            {

            }
            else if (first_char == '*')
            {

            }
            else if (first_char == '^')
            {

            }
            else if (first_char == '%')
            {

            }

            return Token(token_kind, len_consumed());

        }
        TokenKind Cursor::whitespace()
        {
            eat_while([this](HuChar c) {return this->is_whitespace(c); });
            return TokenKind::Whitespace;
        }
        TokenKind Cursor::identifier_or_unknown()
        {
            eat_while([this](HuChar c) {return this->is_identifier_continue(c); });
            
            HuChar c = first();
            if (c == '#' || c == '"' || c == '\'')
                return TokenKind::UnknownPrefix;
            else
                return TokenKind::Identifier;
        }
        TokenKind Cursor::line_comment()
        {
            bump();
            eat_while([](HuChar c) { return c != '\n'; });
            return TokenKind::LineComment;
        }
        TokenKind Cursor::block_comment()
        {
            bump();
            while (true) {
                std::optional<HuChar> c = bump();
                if (c.has_value()) {
                    if (c.value() == '*' && first() == '/') {
                        bump();
                        break;
                    }
                }
                else {
                    break;
                }
            }
            return TokenKind::BlockComment;
        }
        TokenKind Cursor::number()
        {
            eat_decimal_digits();
            return TokenKind::Literal;
        }
        bool Cursor::is_identifier_char(HuChar c)
        {
            if (c >= 'a' && c <= 'z') return true;
            if (c >= 'A' && c <= 'Z') return true;
            // CJK
            if (c >= 0x4E00 && c <= 0x9FFF) return true;
            if (c >= 0x3400 && c <= 0x4DBF) return true;
            // EMOJI
            if (c >= 0xD83C && c <= 0xDBFF) return true;
            if (c >= 0xDC00 && c <= 0xDFFF) return true;

            return false;
        }
        bool Cursor::is_identifier_start(HuChar c)
        {
            return c == '_' || is_identifier_char(c);
        }
        bool Cursor::is_identifier_continue(HuChar c)
        {
            return is_identifier_char(c);
        }
        bool Cursor::is_whitespace(HuChar c)
        {
            // This is Pattern_White_Space.
            //
            // Note that this set is stable (ie, it doesn't change with different
            // Unicode versions), so it's ok to just hard-code the values.
            return
                // Usual ASCII suspects
                c == 0x0009      // \t
                || c == 0x000A   // \n
                || c == 0x000B   // vertical tab
                || c == 0x000C   // form feed
                || c == 0x000D   // \r
                || c == 0x0020   // space

                                 // NEXT LINE from latin1
                || c == 0x0085
                // Bidi markers
                || c == 0x200E   // LEFT-TO-RIGHT MARK
                || c == 0x200F   // RIGHT-TO-LEFT MARK

                                 // Dedicated whitespace characters from Unicode
                || c == 0x2028   // LINE SEPARATOR
                || c == 0x2029   // PARAGRAPH SEPARATOR
                ;
        }
    }
}