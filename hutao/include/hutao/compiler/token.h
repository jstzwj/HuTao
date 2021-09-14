#ifndef HUTAO_LEXER_TOKEN_H_
#define HUTAO_LEXER_TOKEN_H_

#include <string>
#include <hutao/common/Source.h>

namespace hutao
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
        case hutao::TokenKind::LineComment:
            return "TokenKind::LineComment";
        case hutao::TokenKind::BlockComment:
            return "TokenKind::BlockComment";
        case hutao::TokenKind::Whitespace:
            return "TokenKind::Whitespace";
        case hutao::TokenKind::Identifier:
            return "TokenKind::Identifier";
        case hutao::TokenKind::Literal:
            return "TokenKind::Literal";
        case hutao::TokenKind::UnknownPrefix:
            return "TokenKind::UnknownPrefix";
        case hutao::TokenKind::Semi:
            return "TokenKind::Semi";
        case hutao::TokenKind::Comma:
            return "TokenKind::Comma";
        case hutao::TokenKind::Dot:
            return "TokenKind::Dot";
        case hutao::TokenKind::OpenParen:
            return "TokenKind::OpenParen";
        case hutao::TokenKind::CloseParen:
            return "TokenKind::CloseParen";
        case hutao::TokenKind::OpenBrace:
            return "TokenKind::OpenBrace";
        case hutao::TokenKind::CloseBrace:
            return "TokenKind::CloseBrace";
        case hutao::TokenKind::OpenBracket:
            return "TokenKind::OpenBracket";
        case hutao::TokenKind::CloseBracket:
            return "TokenKind::CloseBracket";
        case hutao::TokenKind::At:
            return "TokenKind::At";
        case hutao::TokenKind::Pound:
            return "TokenKind::Pound";
        case hutao::TokenKind::Tilde:
            return "TokenKind::Tilde";
        case hutao::TokenKind::Question:
            return "TokenKind::Question";
        case hutao::TokenKind::Colon:
            return "TokenKind::Colon";
        case hutao::TokenKind::Dollar:
            return "TokenKind::Dollar";
        case hutao::TokenKind::Eq:
            return "TokenKind::Eq";
        case hutao::TokenKind::Bang:
            return "TokenKind::Bang";
        case hutao::TokenKind::Lt:
            return "TokenKind::Lt";
        case hutao::TokenKind::Gt:
            return "TokenKind::Gt";
        case hutao::TokenKind::Minus:
            return "TokenKind::Minus";
        case hutao::TokenKind::And:
            return "TokenKind::And";
        case hutao::TokenKind::Or:
            return "TokenKind::Or";
        case hutao::TokenKind::Plus:
            return "TokenKind::Plus";
        case hutao::TokenKind::Star:
            return "TokenKind::Star";
        case hutao::TokenKind::Slash:
            return "TokenKind::Slash";
        case hutao::TokenKind::Caret:
            return "TokenKind::Caret";
        case hutao::TokenKind::Percent:
            return "TokenKind::Percent";
        case hutao::TokenKind::Unknown:
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
            : kind(TokenKind::Unknown), len(0)
        {
        }
        Token(TokenKind k, std::size_t l)
            : kind(k), len(l)
        {
        }
    };
}

#endif