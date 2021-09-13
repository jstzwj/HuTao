#pragma once

#include <hutao/lexer/Lexer.h>
namespace hutao
{
    namespace parser
    {
        class Parser
        {
        private:
            lexer::Cursor _cursor;
        public:
            Parser(lexer::Cursor cursor)
                :_cursor(cursor)
            {
            }
        };
    }
}