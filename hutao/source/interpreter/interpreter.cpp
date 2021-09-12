
#include <iostream>
#include <string>
#include <fstream>

#include <hutao/common/HuString.h>
#include <hutao/lexer/Lexer.h>

int main(int argc, char* argv[]) {
	std::string inputFile = "example.hutao";
	if (argc >= 2) {
		// std::string programPath = argv[0];
		std::string inputFile = argv[1];
	}


	std::ifstream fin(inputFile);
	std::string rawSourceCode((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
	hutao::HuString code = hutao::HuString::from_utf8(rawSourceCode);

	hutao::lexer::Cursor cursor(code);

	std::cout << (int) cursor.advance_token().kind << std::endl;
	

    return 0;
}