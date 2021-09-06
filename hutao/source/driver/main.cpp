#include <iostream>

#include "antlr4-runtime.h"
#include <hutao/parser/HutaoLexer.h>
#include <hutao/parser/HutaoParser.h>
#include <hutao/parser/HutaoParserBaseListener.h>

using namespace antlr4;

class TreeShapeListener : public HutaoParserBaseListener {
public:
  virtual void enterStmt(HutaoParser::StmtContext *ctx) override {
	// Do something when entering the key rule.
  }
};


int main(int argc, const char* argv[]) {
    std::cout<< "output" << std::endl;
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  HutaoLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  HutaoParser parser(&tokens);

  tree::ParseTree *tree = parser.stmt();
  TreeShapeListener listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return 0;
}