
#pragma once

#include <iostream>
#include <string>
#include <fstream>


#include <hutao/Basic/UniString.h>
#include <hutao/Lexer/Lexer.h>

namespace hutao
{

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
			hutao::UniString code = hutao::UniString::from_utf8(rawSourceCode);
		}
    };
}