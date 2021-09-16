#include <iostream>
#include <antlr4-runtime.h>
#include <hutao/compiler/HuTaoParserBaseListener.h>
#include <vector>
#include <string>
namespace hutao
{
    class LLVMCodeGenerator : public HuTaoParserBaseListener {
    public:
        std::vector<std::string> namespacePath;
        virtual void enterCompilation_unit(HuTaoParser::Compilation_unitContext* ctx) override {
        }
        virtual void exitCompilation_unit(HuTaoParser::Compilation_unitContext* ctx) override {
        }
        virtual void enterNamespace_declaration(HuTaoParser::Namespace_declarationContext* ctx) override {
            std::cout << ctx->qualified_identifier()->getText() << std::endl;
            namespacePath.push_back(ctx->qualified_identifier()->getText());
        }
        virtual void exitNamespace_declaration(HuTaoParser::Namespace_declarationContext* ctx) override {
            namespacePath.pop_back();
        }

        virtual void enterClass_definition(HuTaoParser::Class_definitionContext* ctx) override {
            std::cout << ctx->getText() << std::endl;
        }
    };
}

