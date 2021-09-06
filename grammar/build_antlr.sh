antlr4 -Dlanguage=Cpp -o antlr_output HutaoLexer.g4 HutaoParser.g4
cp antlr_output/*.h ../hutao/include/hutao/parser
cp antlr_output/*.cpp ../hutao/source/parser