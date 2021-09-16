
// Generated from HuTaoLexer.g4 by ANTLR 4.9.2

#pragma once


#include <antlr4-runtime.h>




class  HuTaoLexer : public antlr4::Lexer {
public:
  enum {
    SINGLE_LINE_DOC_COMMENT = 1, EMPTY_DELIMITED_DOC_COMMENT = 2, DELIMITED_DOC_COMMENT = 3, 
    SINGLE_LINE_COMMENT = 4, DELIMITED_COMMENT = 5, WHITESPACES = 6, SHARP = 7, 
    ABSTRACT = 8, ADD = 9, ALIAS = 10, AS = 11, ASCENDING = 12, ASYNC = 13, 
    AWAIT = 14, BASE = 15, BOOL = 16, BREAK = 17, BY = 18, CASE = 19, CATCH = 20, 
    CHECKED = 21, CLASS = 22, CONST = 23, CONTINUE = 24, DEFAULT = 25, DELEGATE = 26, 
    DESCENDING = 27, DO = 28, ELSE = 29, ENUM = 30, EQUALS = 31, EVENT = 32, 
    EXPLICIT = 33, EXTERN = 34, FALSE = 35, FINALLY = 36, FIXED = 37, FOR = 38, 
    FOREACH = 39, FROM = 40, GET = 41, GOTO = 42, GROUP = 43, IF = 44, IMPLICIT = 45, 
    IN = 46, INTERFACE = 47, INTERNAL = 48, INTO = 49, IS = 50, JOIN = 51, 
    LET = 52, LOCK = 53, NAMEOF = 54, NAMESPACE = 55, NEW = 56, NULL_ = 57, 
    OBJECT = 58, ON = 59, OPERATOR = 60, ORDERBY = 61, OUT = 62, OVERRIDE = 63, 
    PARAMS = 64, PARTIAL = 65, PRIVATE = 66, PROTECTED = 67, PUBLIC = 68, 
    READONLY = 69, REF = 70, REMOVE = 71, RETURN = 72, SEALED = 73, SELECT = 74, 
    SET = 75, SIZEOF = 76, STACKALLOC = 77, STATIC = 78, STRING = 79, STRUCT = 80, 
    SWITCH = 81, THIS = 82, THROW = 83, TRUE = 84, TRY = 85, TYPEOF = 86, 
    UNCHECKED = 87, UNMANAGED = 88, UNSAFE = 89, USING = 90, VAR = 91, VIRTUAL = 92, 
    VOID = 93, VOLATILE = 94, WHEN = 95, WHERE = 96, WHILE = 97, YIELD = 98, 
    IDENTIFIER = 99, LITERAL_ACCESS = 100, INTEGER_LITERAL = 101, HEX_INTEGER_LITERAL = 102, 
    BIN_INTEGER_LITERAL = 103, REAL_LITERAL = 104, CHARACTER_LITERAL = 105, 
    REGULAR_STRING = 106, VERBATIUM_STRING = 107, U8 = 108, I8 = 109, U16 = 110, 
    I16 = 111, U32 = 112, I32 = 113, U64 = 114, I64 = 115, F32 = 116, F64 = 117, 
    CHAR = 118, OPEN_BRACE = 119, CLOSE_BRACE = 120, OPEN_BRACKET = 121, 
    CLOSE_BRACKET = 122, OPEN_PARENS = 123, CLOSE_PARENS = 124, DOT = 125, 
    COMMA = 126, COLON = 127, SEMICOLON = 128, PLUS = 129, MINUS = 130, 
    STAR = 131, DIV = 132, PERCENT = 133, AMP = 134, BITWISE_OR = 135, CARET = 136, 
    BANG = 137, TILDE = 138, ASSIGNMENT = 139, LT = 140, GT = 141, INTERR = 142, 
    DOUBLE_COLON = 143, OP_COALESCING = 144, OP_INC = 145, OP_DEC = 146, 
    OP_AND = 147, OP_OR = 148, OP_PTR = 149, OP_EQ = 150, OP_NE = 151, OP_LE = 152, 
    OP_GE = 153, OP_ADD_ASSIGNMENT = 154, OP_SUB_ASSIGNMENT = 155, OP_MULT_ASSIGNMENT = 156, 
    OP_DIV_ASSIGNMENT = 157, OP_MOD_ASSIGNMENT = 158, OP_AND_ASSIGNMENT = 159, 
    OP_OR_ASSIGNMENT = 160, OP_XOR_ASSIGNMENT = 161, OP_LEFT_SHIFT = 162, 
    OP_LEFT_SHIFT_ASSIGNMENT = 163, OP_COALESCING_ASSIGNMENT = 164, OP_RANGE = 165, 
    DOUBLE_CURLY_INSIDE = 166, OPEN_BRACE_INSIDE = 167, REGULAR_CHAR_INSIDE = 168, 
    VERBATIUM_DOUBLE_QUOTE_INSIDE = 169, DOUBLE_QUOTE_INSIDE = 170, REGULAR_STRING_INSIDE = 171, 
    VERBATIUM_INSIDE_STRING = 172, DOUBLE_CURLY_CLOSE_INSIDE = 173, CLOSE_BRACE_INSIDE = 174, 
    FORMAT_STRING = 175, DIRECTIVE_WHITESPACES = 176, DIGITS = 177, DEFINE = 178, 
    UNDEF = 179, ELIF = 180, ENDIF = 181, LINE = 182, ERROR = 183, WARNING = 184, 
    REGION = 185, ENDREGION = 186, PRAGMA = 187, NULLABLE = 188, DIRECTIVE_HIDDEN = 189, 
    CONDITIONAL_SYMBOL = 190, DIRECTIVE_NEW_LINE = 191, TEXT = 192
  };

  enum {
    COMMENTS_CHANNEL = 2, DIRECTIVE = 3
  };

  enum {
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2, DIRECTIVE_MODE = 3, 
    DIRECTIVE_TEXT = 4
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

