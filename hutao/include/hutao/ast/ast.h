
#include <hutao/common/HuString.h>

namespace hutao
{
    namespace ast
    {
        enum class AstKind
        {
        };

        class AstNode
        {
        protected:
            HuSpan _span;
        public:

        };
        
        class Stmt: AstNode
        {

        };

        class FunctionDefinition : Stmt
        {

        };

        class ClassDefinition : Stmt
        {

        };

        class Return : Stmt
        {

        };
    }
}