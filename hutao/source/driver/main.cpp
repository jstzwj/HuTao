
#include <iostream>
#include <string>
#include <fstream>


#include <antlr4-runtime.h>
#include <hutao/common/hustring.h>
#include <hutao/compiler/HuTaoLexer.h>
#include <hutao/compiler/HuTaoParser.h>


using namespace antlr4;

int main(int argc, char* argv[]) {
	std::string inputFile = "example.hutao";
	if (argc >= 2) {
		// std::string programPath = argv[0];
		std::string inputFile = argv[1];
	}


	std::ifstream fin(inputFile);
	std::string rawSourceCode((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
	hutao::HuString code = hutao::HuString::from_utf8(rawSourceCode);

	ANTLRInputStream input(fin);
	HuTaoLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	HuTaoParser parser(&tokens);

    return 0;
}