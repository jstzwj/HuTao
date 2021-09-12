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
            BlockComment
        };
        class Token
        {
        private:
            TokenKind kind;
            std::size_t len;
        };
    }
}

#endif