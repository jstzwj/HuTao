
#pragma once

#include <iostream>
#include <string>
#include <fstream>

#define ANTLR4CPP_STATIC
#include <antlr4-runtime.h>
#include <hutao/Basic/UniString.h>
#include <hutao/Lexer/HuTaoLexer.h>
#include <hutao/Parser/HuTaoParser.h>
#include <hutao/CodeGen/CodeGen.h>

namespace hutao
{
	class ThrowingErrorListener : public antlr4::BaseErrorListener
	{

	public:
		virtual void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line, size_t charPositionInLine,
			const std::string& msg, std::exception_ptr e) override
		{
			std::cout << "line " + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg << std::endl;
		}
	};

    class Driver
    {
	private:
		std::string _file;
	public:
		Driver(std::string file)
			:_file(file)
		{
		}

		void compile()
		{
			std::ifstream fin(_file);
			std::string rawSourceCode((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
			// hutao::HuString code = hutao::HuString::from_utf8(rawSourceCode);
			std::cout << rawSourceCode << std::endl;
			fin.clear();
			fin.seekg(0);

			antlr4::ANTLRInputStream input(fin);
			HuTaoLexer lexer(&input);
			antlr4::CommonTokenStream tokens(&lexer);
			HuTaoParser parser(&tokens);
			parser.removeErrorListeners();
			parser.addErrorListener(new ThrowingErrorListener());


			antlr4::tree::ParseTree* tree = parser.compilation_unit();
			hutao::LLVMCodeGenerator listener;
			antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
		}
    };
}