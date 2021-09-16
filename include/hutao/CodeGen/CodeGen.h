#pragma once

#include <iostream>
#include <antlr4-runtime.h>
#include <hutao/Parser/HuTaoParserBaseListener.h>
#include <vector>
#include <string>
#include <memory>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>

namespace hutao
{
    class LLVMCodeGenerator : public HuTaoParserBaseListener
    {
    public:
        llvm::LLVMContext _llvm_context;
        llvm::IRBuilder<> _builder{ _llvm_context };
        std::unique_ptr<llvm::Module> _module;
        std::map<std::string, llvm::Value*> _namedValues;
        std::vector<std::string> namespacePath;

        void logError(std::string message) {
            std::cout << message << std::endl;
        }

        llvm::Value* logErrorV(const char* Str) {
            logError(Str);
            return nullptr;
        }

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

