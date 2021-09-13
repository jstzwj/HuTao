
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

	hutao::lexer::Token token;
	for (int i = 0; i < 100; ++i) {
		if (cursor.is_eof())
			break;
		token = cursor.advance_token();
		std::cout << to_string(token.kind) << '\t' << token.len << std::endl;
	}

    return 0;
}