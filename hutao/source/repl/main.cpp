#include <iostream>
#include <fstream>
#include <string>

#include <hutao/common/version.h>
#include <hutao/common/hustring.h>

int repl() {
    // init kale environment

    // output info
    std::cout << "hutao " << HUTAO_VERSION << std::endl;
    for (;;)
    {
        std::cout << ">> ";
        std::string line;
        std::getline(std::cin, line);
        // state.load(line);
        // state.call(0, 0);
    }
}


int main(int argc, const char* argv[]) {
    // repl();

    return 0;
}