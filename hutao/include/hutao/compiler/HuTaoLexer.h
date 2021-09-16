
// Generated from HuTaoLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  HuTaoLexer : public antlr4::Lexer {
public:
  enum {
    SINGLE_LINE_DOC_COMMENT = 1, EMPTY_DELIMITED_DOC_COMMENT = 2, DELIMITED_DOC_COMMENT = 3, 
    SINGLE_LINE_COMMENT = 4, DELIMITED_COMMENT = 5, WHITESPACES = 6, ABSTRACT = 7, 
    ADD = 8, ALIAS = 9, AS = 10, ASCENDING = 11, ASYNC = 12, AWAIT = 13, 
    BASE = 14, BOOL = 15, BREAK = 16, BY = 17, CASE = 18, CATCH = 19, CHECKED = 20, 
    CLASS = 21, CONST = 22, CONTINUE = 23, DEFAULT = 24, DELEGATE = 25, 
    DESCENDING = 26, DO = 27, ELSE = 28, ENUM = 29, EQUALS = 30, EVENT = 31, 
    EXPLICIT = 32, EXTERN = 33, FALSE = 34, FINALLY = 35, FIXED = 36, FOR = 37, 
    FOREACH = 38, FROM = 39, GET = 40, GOTO = 41, GROUP = 42, IF = 43, IMPLICIT = 44, 
    IN = 45, INTERFACE = 46, INTERNAL = 47, INTO = 48, IS = 49, JOIN = 50, 
    LET = 51, LOCK = 52, NAMEOF = 53, NAMESPACE = 54, NEW = 55, NULL_ = 56, 
    OBJECT = 57, ON = 58, OPERATOR = 59, ORDERBY = 60, OUT = 61, OVERRIDE = 62, 
    PARAMS = 63, PARTIAL = 64, PRIVATE = 65, PROTECTED = 66, PUBLIC = 67, 
    READONLY = 68, REF = 69, REMOVE = 70, RETURN = 71, SEALED = 72, SELECT = 73, 
    SET = 74, SIZEOF = 75, STACKALLOC = 76, STATIC = 77, STRING = 78, STRUCT = 79, 
    SWITCH = 80, THIS = 81, THROW = 82, TRUE = 83, TRY = 84, TYPEOF = 85, 
    UNCHECKED = 86, UNMANAGED = 87, UNSAFE = 88, USING = 89, VAR = 90, VIRTUAL = 91, 
    VOID = 92, VOLATILE = 93, WHEN = 94, WHERE = 95, WHILE = 96, YIELD = 97, 
    IDENTIFIER = 98, LITERAL_ACCESS = 99, INTEGER_LITERAL = 100, HEX_INTEGER_LITERAL = 101, 
    BIN_INTEGER_LITERAL = 102, REAL_LITERAL = 103, CHARACTER_LITERAL = 104, 
    REGULAR_STRING = 105, VERBATIUM_STRING = 106, U8 = 107, I8 = 108, U16 = 109, 
    I16 = 110, U32 = 111, I32 = 112, U64 = 113, I64 = 114, F32 = 115, F64 = 116, 
    CHAR = 117, OPEN_BRACE = 118, CLOSE_BRACE = 119, OPEN_BRACKET = 120, 
    CLOSE_BRACKET = 121, OPEN_PARENS = 122, CLOSE_PARENS = 123, DOT = 124, 
    COMMA = 125, COLON = 126, SEMICOLON = 127, PLUS = 128, MINUS = 129, 
    STAR = 130, DIV = 131, PERCENT = 132, AMP = 133, BITWISE_OR = 134, CARET = 135, 
    BANG = 136, TILDE = 137, ASSIGNMENT = 138, LT = 139, GT = 140, INTERR = 141, 
    DOUBLE_COLON = 142, OP_COALESCING = 143, OP_INC = 144, OP_DEC = 145, 
    OP_AND = 146, OP_OR = 147, OP_PTR = 148, OP_EQ = 149, OP_NE = 150, OP_LE = 151, 
    OP_GE = 152, OP_ADD_ASSIGNMENT = 153, OP_SUB_ASSIGNMENT = 154, OP_MULT_ASSIGNMENT = 155, 
    OP_DIV_ASSIGNMENT = 156, OP_MOD_ASSIGNMENT = 157, OP_AND_ASSIGNMENT = 158, 
    OP_OR_ASSIGNMENT = 159, OP_XOR_ASSIGNMENT = 160, OP_LEFT_SHIFT = 161, 
    OP_LEFT_SHIFT_ASSIGNMENT = 162, OP_COALESCING_ASSIGNMENT = 163, OP_RANGE = 164
  };

  enum {
    COMMENTS_CHANNEL = 2, DIRECTIVE = 3
  };

  explicit HuTaoLexer(antlr4::CharStream *input);
  ~HuTaoLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

