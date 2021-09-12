#ifndef HUTAO_LEXER_TOKEN_H_
#define HUTAO_LEXER_TOKEN_H_

#include <hutao/common/Source.h>

namespace hutao
{
    namespace lexer
    {
        enum class TokenKind
        {
            LineComment,
            BlockComment,
            Slash,
            Unknown,
        };
        class Token
        {
        public:
            TokenKind kind;
            std::size_t len;

        public:
            Token(TokenKind k, std::size_t l)
                :kind(k), len(l)
            {
            }
        };
    }
}

#endif