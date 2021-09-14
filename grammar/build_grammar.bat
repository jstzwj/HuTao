antlr4 -Dlanguage=Cpp HuTaoLexer.g4 HuTaoParser.g4 -o cppout
cp cppout/HuTao*.h ../hutao/include/hutao/compiler
cp cppout/HuTao*.cpp ../hutao/source/compiler