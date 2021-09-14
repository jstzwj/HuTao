#pragma once

#include <hutao/compiler/lexer.h>
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