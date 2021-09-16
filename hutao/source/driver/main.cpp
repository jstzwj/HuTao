
#include <iostream>
#include <string>
#include <fstream>

#define ANTLR4CPP_STATIC
#include <antlr4-runtime.h>
#include <hutao/common/hustring.h>
#include <hutao/compiler/HuTaoLexer.h>
#include <hutao/compiler/HuTaoParser.h>
#include <hutao/compiler/codegen.h>


using namespace antlr4;


class ThrowingErrorListener : public BaseErrorListener
{

public:
	virtual void syntaxError(Recognizer* recognizer, Token* offendingSymbol, size_t line, size_t charPositionInLine,
		const std::string& msg, std::exception_ptr e) override
	{
		std::cout << "line " + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg << std::endl;
	}
};



int main(int argc, char* argv[]) {
	std::string inputFile = "../../../../example/test.hutao";
	if (argc >= 2) {
		// std::string programPath = argv[0];
		inputFile = argv[1];
	}


	std::ifstream fin(inputFile);
	// std::string rawSourceCode((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
	// hutao::HuString code = hutao::HuString::from_utf8(rawSourceCode);
	// std::cout << rawSourceCode << std::endl;

	ANTLRInputStream input(fin);
	HuTaoLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	HuTaoParser parser(&tokens);
	parser.removeErrorListeners();
	parser.addErrorListener(new ThrowingErrorListener());


	tree::ParseTree* tree = parser.compilation_unit();
	hutao::LLVMCodeGenerator listener;
	tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);


    return 0;
}