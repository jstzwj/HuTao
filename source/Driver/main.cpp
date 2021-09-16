
#include <string>
#include <hutao/Driver/Driver.h>

int main(int argc, char* argv[])
{
	std::string inputFile = "../../../../example/test.hutao";
	hutao::Driver driver(inputFile);
	driver.compile();
    return 0;
}