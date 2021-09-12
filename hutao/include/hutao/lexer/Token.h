#ifndef HUTAO_LEXER_TOKEN_H_
#define HUTAO_LEXER_TOKEN_H_

#include <string>
#include <hutao/common/Source.h>

namespace hutao
{
    namespace lexer
    {
        enum class TokenKind
        {
            LineComment,
            BlockComment,
            Whitespace,
            Identifier,
            UnknownPrefix,
            Literal,

            // One - char tokens :
            // ";"
            Semi,
            // ","
            Comma,
            // "."
            Dot,
            // "("
            OpenParen,
            // ")"
            CloseParen,
            // "{"
            OpenBrace,
            // "}"
            CloseBrace,
            // "["
            OpenBracket,
            // "]"
            CloseBracket,
            // "@"
            At,
            // "#"
            Pound,
            // "~"
            Tilde,
            // "?"
            Question,
            // ":"
            Colon,
            // "$"
            Dollar,
            // "="
            Eq,
            // "!"
            Bang,
            // "<"
            Lt,
            // ">"
            Gt,
            // "-"
            Minus,
            // "&"
            And,
            // "|"
            Or,
            // "+"
            Plus,
            // "*"
            Star,
            // "/"
            Slash,
            // "^"
            Caret,
            // "%"
            Percent,

            // Unknown
            Unknown,
        };

        static std::string to_string(TokenKind kind)
        {
            switch (kind)
            {
            case hutao::lexer::TokenKind::LineComment:
                return "TokenKind::LineComment";
            case hutao::lexer::TokenKind::BlockComment:
                return "TokenKind::BlockComment";
            case hutao::lexer::TokenKind::Whitespace:
                return "TokenKind::Whitespace";
            case hutao::lexer::TokenKind::Identifier:
                return "TokenKind::Identifier";
            case hutao::lexer::TokenKind::Literal:
                return "TokenKind::Literal";
            case hutao::lexer::TokenKind::UnknownPrefix:
                return "TokenKind::UnknownPrefix";
            case hutao::lexer::TokenKind::Semi:
                return "TokenKind::Semi";
            case hutao::lexer::TokenKind::Comma:
                return "TokenKind::Comma";
            case hutao::lexer::TokenKind::Dot:
                return "TokenKind::Dot";
            case hutao::lexer::TokenKind::OpenParen:
                return "TokenKind::OpenParen";
            case hutao::lexer::TokenKind::CloseParen:
                return "TokenKind::CloseParen";
            case hutao::lexer::TokenKind::OpenBrace:
                return "TokenKind::OpenBrace";
            case hutao::lexer::TokenKind::CloseBrace:
                return "TokenKind::CloseBrace";
            case hutao::lexer::TokenKind::OpenBracket:
                return "TokenKind::OpenBracket";
            case hutao::lexer::TokenKind::CloseBracket:
                return "TokenKind::CloseBracket";
            case hutao::lexer::TokenKind::At:
                return "TokenKind::At";
            case hutao::lexer::TokenKind::Pound:
                return "TokenKind::Pound";
            case hutao::lexer::TokenKind::Tilde:
                return "TokenKind::Tilde";
            case hutao::lexer::TokenKind::Question:
                return "TokenKind::Question";
            case hutao::lexer::TokenKind::Colon:
                return "TokenKind::Colon";
            case hutao::lexer::TokenKind::Dollar:
                return "TokenKind::Dollar";
            case hutao::lexer::TokenKind::Eq:
                return "TokenKind::Eq";
            case hutao::lexer::TokenKind::Bang:
                return "TokenKind::Bang";
            case hutao::lexer::TokenKind::Lt:
                return "TokenKind::Lt";
            case hutao::lexer::TokenKind::Gt:
                return "TokenKind::Gt";
            case hutao::lexer::TokenKind::Minus:
                return "TokenKind::Minus";
            case hutao::lexer::TokenKind::And:
                return "TokenKind::And";
            case hutao::lexer::TokenKind::Or:
                return "TokenKind::Or";
            case hutao::lexer::TokenKind::Plus:
                return "TokenKind::Plus";
            case hutao::lexer::TokenKind::Star:
                return "TokenKind::Star";
            case hutao::lexer::TokenKind::Slash:
                return "TokenKind::Slash";
            case hutao::lexer::TokenKind::Caret:
                return "TokenKind::Caret";
            case hutao::lexer::TokenKind::Percent:
                return "TokenKind::Percent";
            case hutao::lexer::TokenKind::Unknown:
                return "TokenKind::Unknown";
            default:
                break;
            }

            return "TokenKind::Unknown";
        }

        class Token
        {
        public:
            TokenKind kind;
            std::size_t len;

        public:
            Token()
                :kind(TokenKind::Unknown), len(0)
            {
            }
            Token(TokenKind k, std::size_t l)
                :kind(k), len(l)
            {
            }
        };
    }
}

#endif