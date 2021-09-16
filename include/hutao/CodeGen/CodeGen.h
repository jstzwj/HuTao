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
#include <llvm/IR/LegacyPassManager.h>

#include <llvm/IR/CFG.h>

#include <llvm/Target/TargetMachine.h>
#include <llvm/Target/TargetOptions.h>

#include <llvm/Support/Host.h>
#include <llvm/Support/TargetRegistry.h>
#include <llvm/Support/TargetSelect.h>

#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/FileSystem.h>

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

        LLVMCodeGenerator()
        {
            
        }

        int emit(std::string outPath)
        {
            auto targetTriple = llvm::sys::getDefaultTargetTriple();
            llvm::InitializeAllTargetInfos();
            llvm::InitializeAllTargets();
            llvm::InitializeAllTargetMCs();
            llvm::InitializeAllAsmParsers();
            llvm::InitializeAllAsmPrinters();

            std::string error_message;
            auto target = llvm::TargetRegistry::lookupTarget(targetTriple, error_message);

            // Print an error and exit if we couldn't find the requested target.
            // This generally occurs if we've forgotten to initialise the
            // TargetRegistry or we have a bogus target triple.
            if (!target) {
                std::cerr << error_message;
                return 1;
            }

            auto CPU = "generic";
            auto Features = "";

            llvm::TargetOptions opt;
            auto RM = llvm::Optional<llvm::Reloc::Model>();
            auto targetMachine = target->createTargetMachine(targetTriple, CPU, Features, opt, RM);

            _module->setDataLayout(targetMachine->createDataLayout());
            _module->setTargetTriple(targetTriple);

            auto Filename = outPath.c_str();
            std::error_code ec;
            llvm::raw_fd_ostream dest(Filename, ec, llvm::sys::fs::F_None);

            if (ec) {
                std::cerr << "Could not open file: " << ec.message();
                return 1;
            }
            llvm::legacy::PassManager pass;
            auto FileType = llvm::CGFT_ObjectFile;

            if (targetMachine->addPassesToEmitFile(pass, dest, nullptr, FileType)) {
                std::cerr << "TargetMachine can't emit a file of this type";
                return 1;
            }

            pass.run(*_module);
            dest.flush();
        }

        void logError(std::string message) 
        {
            std::cout << message << std::endl;
        }

        llvm::Value* logErrorV(const char* Str) 
        {
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
        }

        virtual void enterClass_member_declaration(HuTaoParser::Class_member_declarationContext* ctx) override {
        }

        virtual void enterCommon_member_declaration(HuTaoParser::Common_member_declarationContext* ctx) override {
        }

        virtual void enterTyped_member_declaration(HuTaoParser::Typed_member_declarationContext* ctx) override {
        }

        virtual void enterMethod_declaration(HuTaoParser::Method_declarationContext * ctx) override {
            std::cout << ctx->method_member_name()->getText() << std::endl;
        }
    };
}

