#pragma once

#include <hutao/Lexer/Lexer.h>
namespace hutao
{
    class Parser
    {
    private:
        Cursor _cursor;

    public:
        Parser(Cursor cursor)
            : _cursor(cursor)
        {
        }
    };
}