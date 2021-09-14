
// Generated from HuTaoParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  HuTaoParser : public antlr4::Parser {
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
    RuleCompilation_unit = 0, RuleNamespace_or_type_name = 1, RuleType_ = 2, 
    RuleBase_type = 3, RuleTuple_type = 4, RuleTuple_element = 5, RuleSimple_type = 6, 
    RuleNumeric_type = 7, RuleIntegral_type = 8, RuleFloating_point_type = 9, 
    RuleClass_type = 10, RuleType_argument_list = 11, RuleArgument_list = 12, 
    RuleArgument = 13, RuleExpression = 14, RuleNon_assignment_expression = 15, 
    RuleAssignment = 16, RuleAssignment_operator = 17, RuleConditional_expression = 18, 
    RuleNull_coalescing_expression = 19, RuleConditional_or_expression = 20, 
    RuleConditional_and_expression = 21, RuleInclusive_or_expression = 22, 
    RuleExclusive_or_expression = 23, RuleAnd_expression = 24, RuleEquality_expression = 25, 
    RuleRelational_expression = 26, RuleShift_expression = 27, RuleAdditive_expression = 28, 
    RuleMultiplicative_expression = 29, RuleSwitch_expression = 30, RuleSwitch_expression_arms = 31, 
    RuleSwitch_expression_arm = 32, RuleRange_expression = 33, RuleUnary_expression = 34, 
    RulePrimary_expression = 35, RulePrimary_expression_start = 36, RuleThrowable_expression = 37, 
    RuleThrow_expression = 38, RuleMember_access = 39, RuleBracket_expression = 40, 
    RuleIndexer_argument = 41, RulePredefined_type = 42, RuleExpression_list = 43, 
    RuleObject_or_collection_initializer = 44, RuleObject_initializer = 45, 
    RuleMember_initializer_list = 46, RuleMember_initializer = 47, RuleInitializer_value = 48, 
    RuleCollection_initializer = 49, RuleElement_initializer = 50, RuleAnonymous_object_initializer = 51, 
    RuleMember_declarator_list = 52, RuleMember_declarator = 53, RuleUnbound_type_name = 54, 
    RuleGeneric_dimension_specifier = 55, RuleIsType = 56, RuleIsTypePatternArms = 57, 
    RuleIsTypePatternArm = 58, RuleLambda_expression = 59, RuleAnonymous_function_signature = 60, 
    RuleExplicit_anonymous_function_parameter_list = 61, RuleExplicit_anonymous_function_parameter = 62, 
    RuleImplicit_anonymous_function_parameter_list = 63, RuleAnonymous_function_body = 64, 
    RuleQuery_expression = 65, RuleFrom_clause = 66, RuleQuery_body = 67, 
    RuleQuery_body_clause = 68, RuleLet_clause = 69, RuleWhere_clause = 70, 
    RuleCombined_join_clause = 71, RuleOrderby_clause = 72, RuleOrdering = 73, 
    RuleSelect_or_group_clause = 74, RuleQuery_continuation = 75, RuleStatement = 76, 
    RuleDeclarationStatement = 77, RuleLocal_function_declaration = 78, 
    RuleLocal_function_header = 79, RuleLocal_function_modifiers = 80, RuleLocal_function_body = 81, 
    RuleLabeled_Statement = 82, RuleEmbedded_statement = 83, RuleSimple_embedded_statement = 84, 
    RuleBlock = 85, RuleLocal_variable_declaration = 86, RuleLocal_variable_type = 87, 
    RuleLocal_variable_declarator = 88, RuleLocal_variable_initializer = 89, 
    RuleLocal_constant_declaration = 90, RuleIf_body = 91, RuleSwitch_section = 92, 
    RuleSwitch_label = 93, RuleCase_guard = 94, RuleStatement_list = 95, 
    RuleFor_initializer = 96, RuleFor_iterator = 97, RuleCatch_clauses = 98, 
    RuleSpecific_catch_clause = 99, RuleGeneral_catch_clause = 100, RuleException_filter = 101, 
    RuleFinally_clause = 102, RuleResource_acquisition = 103, RuleNamespace_declaration = 104, 
    RuleQualified_identifier = 105, RuleNamespace_body = 106, RuleExtern_alias_directives = 107, 
    RuleExtern_alias_directive = 108, RuleUsing_directives = 109, RuleUsing_directive = 110, 
    RuleNamespace_member_declarations = 111, RuleNamespace_member_declaration = 112, 
    RuleType_declaration = 113, RuleQualified_alias_member = 114, RuleType_parameter_list = 115, 
    RuleType_parameter = 116, RuleClass_base = 117, RuleInterface_type_list = 118, 
    RuleType_parameter_constraints_clauses = 119, RuleType_parameter_constraints_clause = 120, 
    RuleType_parameter_constraints = 121, RulePrimary_constraint = 122, 
    RuleSecondary_constraints = 123, RuleConstructor_constraint = 124, RuleClass_body = 125, 
    RuleClass_member_declarations = 126, RuleClass_member_declaration = 127, 
    RuleAll_member_modifiers = 128, RuleAll_member_modifier = 129, RuleCommon_member_declaration = 130, 
    RuleTyped_member_declaration = 131, RuleConstant_declarators = 132, 
    RuleConstant_declarator = 133, RuleVariable_declarators = 134, RuleVariable_declarator = 135, 
    RuleVariable_initializer = 136, RuleReturn_type = 137, RuleMember_name = 138, 
    RuleMethod_body = 139, RuleFormal_parameter_list = 140, RuleFixed_parameters = 141, 
    RuleFixed_parameter = 142, RuleParameter_modifier = 143, RuleParameter_array = 144, 
    RuleAccessor_declarations = 145, RuleGet_accessor_declaration = 146, 
    RuleSet_accessor_declaration = 147, RuleAccessor_modifier = 148, RuleAccessor_body = 149, 
    RuleEvent_accessor_declarations = 150, RuleAdd_accessor_declaration = 151, 
    RuleRemove_accessor_declaration = 152, RuleOverloadable_operator = 153, 
    RuleConversion_operator_declarator = 154, RuleConstructor_initializer = 155, 
    RuleBody = 156, RuleStruct_interfaces = 157, RuleStruct_body = 158, 
    RuleStruct_member_declaration = 159, RuleArray_type = 160, RuleRank_specifier = 161, 
    RuleArray_initializer = 162, RuleVariant_type_parameter_list = 163, 
    RuleVariant_type_parameter = 164, RuleVariance_annotation = 165, RuleInterface_base = 166, 
    RuleInterface_body = 167, RuleInterface_member_declaration = 168, RuleInterface_accessors = 169, 
    RuleEnum_base = 170, RuleEnum_body = 171, RuleEnum_member_declaration = 172, 
    RuleGlobal_attribute_section = 173, RuleGlobal_attribute_target = 174, 
    RuleAttributes = 175, RuleAttribute_section = 176, RuleAttribute_target = 177, 
    RuleAttribute_list = 178, RuleAttribute = 179, RuleAttribute_argument = 180, 
    RulePointer_type = 181, RuleFixed_pointer_declarators = 182, RuleFixed_pointer_declarator = 183, 
    RuleFixed_pointer_initializer = 184, RuleFixed_size_buffer_declarator = 185, 
    RuleStackalloc_initializer = 186, RuleRight_arrow = 187, RuleRight_shift = 188, 
    RuleRight_shift_assignment = 189, RuleLiteral = 190, RuleBoolean_literal = 191, 
    RuleString_literal = 192, RuleInterpolated_regular_string_part = 193, 
    RuleInterpolated_verbatium_string_part = 194, RuleInterpolated_string_expression = 195, 
    RuleKeyword = 196, RuleClass_definition = 197, RuleStruct_definition = 198, 
    RuleInterface_definition = 199, RuleEnum_definition = 200, RuleDelegate_definition = 201, 
    RuleEvent_declaration = 202, RuleField_declaration = 203, RuleProperty_declaration = 204, 
    RuleConstant_declaration = 205, RuleIndexer_declaration = 206, RuleDestructor_definition = 207, 
    RuleConstructor_declaration = 208, RuleMethod_declaration = 209, RuleMethod_member_name = 210, 
    RuleOperator_declaration = 211, RuleArg_declaration = 212, RuleMethod_invocation = 213, 
    RuleObject_creation_expression = 214, RuleIdentifier = 215
  };

  explicit HuTaoParser(antlr4::TokenStream *input);
  ~HuTaoParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Compilation_unitContext;
  class Namespace_or_type_nameContext;
  class Type_Context;
  class Base_typeContext;
  class Tuple_typeContext;
  class Tuple_elementContext;
  class Simple_typeContext;
  class Numeric_typeContext;
  class Integral_typeContext;
  class Floating_point_typeContext;
  class Class_typeContext;
  class Type_argument_listContext;
  class Argument_listContext;
  class ArgumentContext;
  class ExpressionContext;
  class Non_assignment_expressionContext;
  class AssignmentContext;
  class Assignment_operatorContext;
  class Conditional_expressionContext;
  class Null_coalescing_expressionContext;
  class Conditional_or_expressionContext;
  class Conditional_and_expressionContext;
  class Inclusive_or_expressionContext;
  class Exclusive_or_expressionContext;
  class And_expressionContext;
  class Equality_expressionContext;
  class Relational_expressionContext;
  class Shift_expressionContext;
  class Additive_expressionContext;
  class Multiplicative_expressionContext;
  class Switch_expressionContext;
  class Switch_expression_armsContext;
  class Switch_expression_armContext;
  class Range_expressionContext;
  class Unary_expressionContext;
  class Primary_expressionContext;
  class Primary_expression_startContext;
  class Throwable_expressionContext;
  class Throw_expressionContext;
  class Member_accessContext;
  class Bracket_expressionContext;
  class Indexer_argumentContext;
  class Predefined_typeContext;
  class Expression_listContext;
  class Object_or_collection_initializerContext;
  class Object_initializerContext;
  class Member_initializer_listContext;
  class Member_initializerContext;
  class Initializer_valueContext;
  class Collection_initializerContext;
  class Element_initializerContext;
  class Anonymous_object_initializerContext;
  class Member_declarator_listContext;
  class Member_declaratorContext;
  class Unbound_type_nameContext;
  class Generic_dimension_specifierContext;
  class IsTypeContext;
  class IsTypePatternArmsContext;
  class IsTypePatternArmContext;
  class Lambda_expressionContext;
  class Anonymous_function_signatureContext;
  class Explicit_anonymous_function_parameter_listContext;
  class Explicit_anonymous_function_parameterContext;
  class Implicit_anonymous_function_parameter_listContext;
  class Anonymous_function_bodyContext;
  class Query_expressionContext;
  class From_clauseContext;
  class Query_bodyContext;
  class Query_body_clauseContext;
  class Let_clauseContext;
  class Where_clauseContext;
  class Combined_join_clauseContext;
  class Orderby_clauseContext;
  class OrderingContext;
  class Select_or_group_clauseContext;
  class Query_continuationContext;
  class StatementContext;
  class DeclarationStatementContext;
  class Local_function_declarationContext;
  class Local_function_headerContext;
  class Local_function_modifiersContext;
  class Local_function_bodyContext;
  class Labeled_StatementContext;
  class Embedded_statementContext;
  class Simple_embedded_statementContext;
  class BlockContext;
  class Local_variable_declarationContext;
  class Local_variable_typeContext;
  class Local_variable_declaratorContext;
  class Local_variable_initializerContext;
  class Local_constant_declarationContext;
  class If_bodyContext;
  class Switch_sectionContext;
  class Switch_labelContext;
  class Case_guardContext;
  class Statement_listContext;
  class For_initializerContext;
  class For_iteratorContext;
  class Catch_clausesContext;
  class Specific_catch_clauseContext;
  class General_catch_clauseContext;
  class Exception_filterContext;
  class Finally_clauseContext;
  class Resource_acquisitionContext;
  class Namespace_declarationContext;
  class Qualified_identifierContext;
  class Namespace_bodyContext;
  class Extern_alias_directivesContext;
  class Extern_alias_directiveContext;
  class Using_directivesContext;
  class Using_directiveContext;
  class Namespace_member_declarationsContext;
  class Namespace_member_declarationContext;
  class Type_declarationContext;
  class Qualified_alias_memberContext;
  class Type_parameter_listContext;
  class Type_parameterContext;
  class Class_baseContext;
  class Interface_type_listContext;
  class Type_parameter_constraints_clausesContext;
  class Type_parameter_constraints_clauseContext;
  class Type_parameter_constraintsContext;
  class Primary_constraintContext;
  class Secondary_constraintsContext;
  class Constructor_constraintContext;
  class Class_bodyContext;
  class Class_member_declarationsContext;
  class Class_member_declarationContext;
  class All_member_modifiersContext;
  class All_member_modifierContext;
  class Common_member_declarationContext;
  class Typed_member_declarationContext;
  class Constant_declaratorsContext;
  class Constant_declaratorContext;
  class Variable_declaratorsContext;
  class Variable_declaratorContext;
  class Variable_initializerContext;
  class Return_typeContext;
  class Member_nameContext;
  class Method_bodyContext;
  class Formal_parameter_listContext;
  class Fixed_parametersContext;
  class Fixed_parameterContext;
  class Parameter_modifierContext;
  class Parameter_arrayContext;
  class Accessor_declarationsContext;
  class Get_accessor_declarationContext;
  class Set_accessor_declarationContext;
  class Accessor_modifierContext;
  class Accessor_bodyContext;
  class Event_accessor_declarationsContext;
  class Add_accessor_declarationContext;
  class Remove_accessor_declarationContext;
  class Overloadable_operatorContext;
  class Conversion_operator_declaratorContext;
  class Constructor_initializerContext;
  class BodyContext;
  class Struct_interfacesContext;
  class Struct_bodyContext;
  class Struct_member_declarationContext;
  class Array_typeContext;
  class Rank_specifierContext;
  class Array_initializerContext;
  class Variant_type_parameter_listContext;
  class Variant_type_parameterContext;
  class Variance_annotationContext;
  class Interface_baseContext;
  class Interface_bodyContext;
  class Interface_member_declarationContext;
  class Interface_accessorsContext;
  class Enum_baseContext;
  class Enum_bodyContext;
  class Enum_member_declarationContext;
  class Global_attribute_sectionContext;
  class Global_attribute_targetContext;
  class AttributesContext;
  class Attribute_sectionContext;
  class Attribute_targetContext;
  class Attribute_listContext;
  class AttributeContext;
  class Attribute_argumentContext;
  class Pointer_typeContext;
  class Fixed_pointer_declaratorsContext;
  class Fixed_pointer_declaratorContext;
  class Fixed_pointer_initializerContext;
  class Fixed_size_buffer_declaratorContext;
  class Stackalloc_initializerContext;
  class Right_arrowContext;
  class Right_shiftContext;
  class Right_shift_assignmentContext;
  class LiteralContext;
  class Boolean_literalContext;
  class String_literalContext;
  class Interpolated_regular_string_partContext;
  class Interpolated_verbatium_string_partContext;
  class Interpolated_string_expressionContext;
  class KeywordContext;
  class Class_definitionContext;
  class Struct_definitionContext;
  class Interface_definitionContext;
  class Enum_definitionContext;
  class Delegate_definitionContext;
  class Event_declarationContext;
  class Field_declarationContext;
  class Property_declarationContext;
  class Constant_declarationContext;
  class Indexer_declarationContext;
  class Destructor_definitionContext;
  class Constructor_declarationContext;
  class Method_declarationContext;
  class Method_member_nameContext;
  class Operator_declarationContext;
  class Arg_declarationContext;
  class Method_invocationContext;
  class Object_creation_expressionContext;
  class IdentifierContext; 

  class  Compilation_unitContext : public antlr4::ParserRuleContext {
  public:
    Compilation_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Extern_alias_directivesContext *extern_alias_directives();
    Using_directivesContext *using_directives();
    std::vector<Global_attribute_sectionContext *> global_attribute_section();
    Global_attribute_sectionContext* global_attribute_section(size_t i);
    Namespace_member_declarationsContext *namespace_member_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_unitContext* compilation_unit();

  class  Namespace_or_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Namespace_or_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Qualified_alias_memberContext *qualified_alias_member();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Type_argument_listContext *> type_argument_list();
    Type_argument_listContext* type_argument_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Namespace_or_type_nameContext* namespace_or_type_name();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    std::vector<antlr4::tree::TerminalNode *> INTERR();
    antlr4::tree::TerminalNode* INTERR(size_t i);
    std::vector<Rank_specifierContext *> rank_specifier();
    Rank_specifierContext* rank_specifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_Context* type_();

  class  Base_typeContext : public antlr4::ParserRuleContext {
  public:
    Base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *STAR();
    Tuple_typeContext *tuple_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Base_typeContext* base_type();

  class  Tuple_typeContext : public antlr4::ParserRuleContext {
  public:
    Tuple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Tuple_elementContext *> tuple_element();
    Tuple_elementContext* tuple_element(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_typeContext* tuple_type();

  class  Tuple_elementContext : public antlr4::ParserRuleContext {
  public:
    Tuple_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_elementContext* tuple_element();

  class  Simple_typeContext : public antlr4::ParserRuleContext {
  public:
    Simple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Numeric_typeContext *numeric_type();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_typeContext* simple_type();

  class  Numeric_typeContext : public antlr4::ParserRuleContext {
  public:
    Numeric_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_typeContext *integral_type();
    Floating_point_typeContext *floating_point_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Numeric_typeContext* numeric_type();

  class  Integral_typeContext : public antlr4::ParserRuleContext {
  public:
    Integral_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *U64();
    antlr4::tree::TerminalNode *I64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integral_typeContext* integral_type();

  class  Floating_point_typeContext : public antlr4::ParserRuleContext {
  public:
    Floating_point_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *F64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Floating_point_typeContext* floating_point_type();

  class  Class_typeContext : public antlr4::ParserRuleContext {
  public:
    Class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_typeContext* class_type();

  class  Type_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Type_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_argument_listContext* type_argument_list();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_listContext* argument_list();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *refout = nullptr;
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *VAR();
    Type_Context *type_();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentContext* argument();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    Non_assignment_expressionContext *non_assignment_expression();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Non_assignment_expressionContext : public antlr4::ParserRuleContext {
  public:
    Non_assignment_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lambda_expressionContext *lambda_expression();
    Query_expressionContext *query_expression();
    Conditional_expressionContext *conditional_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_assignment_expressionContext* non_assignment_expression();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    Assignment_operatorContext *assignment_operator();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OP_COALESCING_ASSIGNMENT();
    Throwable_expressionContext *throwable_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_ADD_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_SUB_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_MULT_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_DIV_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_MOD_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_AND_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_OR_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_XOR_ASSIGNMENT();
    antlr4::tree::TerminalNode *OP_LEFT_SHIFT_ASSIGNMENT();
    Right_shift_assignmentContext *right_shift_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Conditional_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Null_coalescing_expressionContext *null_coalescing_expression();
    antlr4::tree::TerminalNode *INTERR();
    std::vector<Throwable_expressionContext *> throwable_expression();
    Throwable_expressionContext* throwable_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_expressionContext* conditional_expression();

  class  Null_coalescing_expressionContext : public antlr4::ParserRuleContext {
  public:
    Null_coalescing_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_or_expressionContext *conditional_or_expression();
    antlr4::tree::TerminalNode *OP_COALESCING();
    Null_coalescing_expressionContext *null_coalescing_expression();
    Throw_expressionContext *throw_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Null_coalescing_expressionContext* null_coalescing_expression();

  class  Conditional_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Conditional_and_expressionContext *> conditional_and_expression();
    Conditional_and_expressionContext* conditional_and_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_OR();
    antlr4::tree::TerminalNode* OP_OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_or_expressionContext* conditional_or_expression();

  class  Conditional_and_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_and_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inclusive_or_expressionContext *> inclusive_or_expression();
    Inclusive_or_expressionContext* inclusive_or_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_AND();
    antlr4::tree::TerminalNode* OP_AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_and_expressionContext* conditional_and_expression();

  class  Inclusive_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Inclusive_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Exclusive_or_expressionContext *> exclusive_or_expression();
    Exclusive_or_expressionContext* exclusive_or_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BITWISE_OR();
    antlr4::tree::TerminalNode* BITWISE_OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inclusive_or_expressionContext* inclusive_or_expression();

  class  Exclusive_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Exclusive_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_expressionContext *> and_expression();
    And_expressionContext* and_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CARET();
    antlr4::tree::TerminalNode* CARET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exclusive_or_expressionContext* exclusive_or_expression();

  class  And_expressionContext : public antlr4::ParserRuleContext {
  public:
    And_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Equality_expressionContext *> equality_expression();
    Equality_expressionContext* equality_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMP();
    antlr4::tree::TerminalNode* AMP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  And_expressionContext* and_expression();

  class  Equality_expressionContext : public antlr4::ParserRuleContext {
  public:
    Equality_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Relational_expressionContext *> relational_expression();
    Relational_expressionContext* relational_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_EQ();
    antlr4::tree::TerminalNode* OP_EQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_NE();
    antlr4::tree::TerminalNode* OP_NE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Equality_expressionContext* equality_expression();

  class  Relational_expressionContext : public antlr4::ParserRuleContext {
  public:
    Relational_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Shift_expressionContext *> shift_expression();
    Shift_expressionContext* shift_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IS();
    antlr4::tree::TerminalNode* IS(size_t i);
    std::vector<IsTypeContext *> isType();
    IsTypeContext* isType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_LE();
    antlr4::tree::TerminalNode* OP_LE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_GE();
    antlr4::tree::TerminalNode* OP_GE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Relational_expressionContext* relational_expression();

  class  Shift_expressionContext : public antlr4::ParserRuleContext {
  public:
    Shift_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Additive_expressionContext *> additive_expression();
    Additive_expressionContext* additive_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_LEFT_SHIFT();
    antlr4::tree::TerminalNode* OP_LEFT_SHIFT(size_t i);
    std::vector<Right_shiftContext *> right_shift();
    Right_shiftContext* right_shift(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Shift_expressionContext* shift_expression();

  class  Additive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Additive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multiplicative_expressionContext *> multiplicative_expression();
    Multiplicative_expressionContext* multiplicative_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Additive_expressionContext* additive_expression();

  class  Multiplicative_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Switch_expressionContext *> switch_expression();
    Switch_expressionContext* switch_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERCENT();
    antlr4::tree::TerminalNode* PERCENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multiplicative_expressionContext* multiplicative_expression();

  class  Switch_expressionContext : public antlr4::ParserRuleContext {
  public:
    Switch_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Switch_expression_armsContext *switch_expression_arms();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_expressionContext* switch_expression();

  class  Switch_expression_armsContext : public antlr4::ParserRuleContext {
  public:
    Switch_expression_armsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Switch_expression_armContext *> switch_expression_arm();
    Switch_expression_armContext* switch_expression_arm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_expression_armsContext* switch_expression_arms();

  class  Switch_expression_armContext : public antlr4::ParserRuleContext {
  public:
    Switch_expression_armContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    Case_guardContext *case_guard();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_expression_armContext* switch_expression_arm();

  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_expressionContext *> unary_expression();
    Unary_expressionContext* unary_expression(size_t i);
    antlr4::tree::TerminalNode *OP_RANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_expressionContext* range_expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expressionContext *primary_expression();
    antlr4::tree::TerminalNode *PLUS();
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *OP_INC();
    antlr4::tree::TerminalNode *OP_DEC();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Type_Context *type_();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *AWAIT();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CARET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  Primary_expressionContext : public antlr4::ParserRuleContext {
  public:
    HuTaoParser::Primary_expression_startContext *pe = nullptr;
    Primary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expression_startContext *primary_expression_start();
    std::vector<antlr4::tree::TerminalNode *> BANG();
    antlr4::tree::TerminalNode* BANG(size_t i);
    std::vector<Bracket_expressionContext *> bracket_expression();
    Bracket_expressionContext* bracket_expression(size_t i);
    std::vector<Member_accessContext *> member_access();
    Member_accessContext* member_access(size_t i);
    std::vector<Method_invocationContext *> method_invocation();
    Method_invocationContext* method_invocation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_INC();
    antlr4::tree::TerminalNode* OP_INC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_DEC();
    antlr4::tree::TerminalNode* OP_DEC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OP_PTR();
    antlr4::tree::TerminalNode* OP_PTR(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primary_expressionContext* primary_expression();

  class  Primary_expression_startContext : public antlr4::ParserRuleContext {
  public:
    Primary_expression_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Primary_expression_startContext() = default;
    void copyFrom(Primary_expression_startContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LiteralAccessExpressionContext : public Primary_expression_startContext {
  public:
    LiteralAccessExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *LITERAL_ACCESS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefaultValueExpressionContext : public Primary_expression_startContext {
  public:
    DefaultValueExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Type_Context *type_();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BaseAccessExpressionContext : public Primary_expression_startContext {
  public:
    BaseAccessExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Type_argument_listContext *type_argument_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SizeofExpressionContext : public Primary_expression_startContext {
  public:
    SizeofExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *SIZEOF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Type_Context *type_();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesisExpressionsContext : public Primary_expression_startContext {
  public:
    ParenthesisExpressionsContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThisReferenceExpressionContext : public Primary_expression_startContext {
  public:
    ThisReferenceExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *THIS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ObjectCreationExpressionContext : public Primary_expression_startContext {
  public:
    ObjectCreationExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *NEW();
    Type_Context *type_();
    Anonymous_object_initializerContext *anonymous_object_initializer();
    std::vector<Rank_specifierContext *> rank_specifier();
    Rank_specifierContext* rank_specifier(size_t i);
    Array_initializerContext *array_initializer();
    Object_creation_expressionContext *object_creation_expression();
    Object_or_collection_initializerContext *object_or_collection_initializer();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AnonymousMethodExpressionContext : public Primary_expression_startContext {
  public:
    AnonymousMethodExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *DELEGATE();
    BlockContext *block();
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Explicit_anonymous_function_parameter_listContext *explicit_anonymous_function_parameter_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TypeofExpressionContext : public Primary_expression_startContext {
  public:
    TypeofExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *TYPEOF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Unbound_type_nameContext *unbound_type_name();
    Type_Context *type_();
    antlr4::tree::TerminalNode *VOID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TupleExpressionContext : public Primary_expression_startContext {
  public:
    TupleExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UncheckedExpressionContext : public Primary_expression_startContext {
  public:
    UncheckedExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleNameExpressionContext : public Primary_expression_startContext {
  public:
    SimpleNameExpressionContext(Primary_expression_startContext *ctx);

    IdentifierContext *identifier();
    Type_argument_listContext *type_argument_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberAccessExpressionContext : public Primary_expression_startContext {
  public:
    MemberAccessExpressionContext(Primary_expression_startContext *ctx);

    Predefined_typeContext *predefined_type();
    Qualified_alias_memberContext *qualified_alias_member();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CheckedExpressionContext : public Primary_expression_startContext {
  public:
    CheckedExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LiteralExpressionContext : public Primary_expression_startContext {
  public:
    LiteralExpressionContext(Primary_expression_startContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NameofExpressionContext : public Primary_expression_startContext {
  public:
    NameofExpressionContext(Primary_expression_startContext *ctx);

    antlr4::tree::TerminalNode *NAMEOF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Primary_expression_startContext* primary_expression_start();

  class  Throwable_expressionContext : public antlr4::ParserRuleContext {
  public:
    Throwable_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Throw_expressionContext *throw_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Throwable_expressionContext* throwable_expression();

  class  Throw_expressionContext : public antlr4::ParserRuleContext {
  public:
    Throw_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Throw_expressionContext* throw_expression();

  class  Member_accessContext : public antlr4::ParserRuleContext {
  public:
    Member_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTERR();
    Type_argument_listContext *type_argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_accessContext* member_access();

  class  Bracket_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bracket_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    std::vector<Indexer_argumentContext *> indexer_argument();
    Indexer_argumentContext* indexer_argument(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *INTERR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bracket_expressionContext* bracket_expression();

  class  Indexer_argumentContext : public antlr4::ParserRuleContext {
  public:
    Indexer_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Indexer_argumentContext* indexer_argument();

  class  Predefined_typeContext : public antlr4::ParserRuleContext {
  public:
    Predefined_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *U64();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *F64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Predefined_typeContext* predefined_type();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_listContext* expression_list();

  class  Object_or_collection_initializerContext : public antlr4::ParserRuleContext {
  public:
    Object_or_collection_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Object_initializerContext *object_initializer();
    Collection_initializerContext *collection_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_or_collection_initializerContext* object_or_collection_initializer();

  class  Object_initializerContext : public antlr4::ParserRuleContext {
  public:
    Object_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Member_initializer_listContext *member_initializer_list();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_initializerContext* object_initializer();

  class  Member_initializer_listContext : public antlr4::ParserRuleContext {
  public:
    Member_initializer_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Member_initializerContext *> member_initializer();
    Member_initializerContext* member_initializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_initializer_listContext* member_initializer_list();

  class  Member_initializerContext : public antlr4::ParserRuleContext {
  public:
    Member_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Initializer_valueContext *initializer_value();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_initializerContext* member_initializer();

  class  Initializer_valueContext : public antlr4::ParserRuleContext {
  public:
    Initializer_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Object_or_collection_initializerContext *object_or_collection_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initializer_valueContext* initializer_value();

  class  Collection_initializerContext : public antlr4::ParserRuleContext {
  public:
    Collection_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    std::vector<Element_initializerContext *> element_initializer();
    Element_initializerContext* element_initializer(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Collection_initializerContext* collection_initializer();

  class  Element_initializerContext : public antlr4::ParserRuleContext {
  public:
    Element_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Non_assignment_expressionContext *non_assignment_expression();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *CLOSE_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_initializerContext* element_initializer();

  class  Anonymous_object_initializerContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_object_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Member_declarator_listContext *member_declarator_list();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Anonymous_object_initializerContext* anonymous_object_initializer();

  class  Member_declarator_listContext : public antlr4::ParserRuleContext {
  public:
    Member_declarator_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Member_declaratorContext *> member_declarator();
    Member_declaratorContext* member_declarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_declarator_listContext* member_declarator_list();

  class  Member_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Member_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expressionContext *primary_expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_declaratorContext* member_declarator();

  class  Unbound_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Unbound_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Generic_dimension_specifierContext *> generic_dimension_specifier();
    Generic_dimension_specifierContext* generic_dimension_specifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unbound_type_nameContext* unbound_type_name();

  class  Generic_dimension_specifierContext : public antlr4::ParserRuleContext {
  public:
    Generic_dimension_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_dimension_specifierContext* generic_dimension_specifier();

  class  IsTypeContext : public antlr4::ParserRuleContext {
  public:
    IsTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    std::vector<Rank_specifierContext *> rank_specifier();
    Rank_specifierContext* rank_specifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    antlr4::tree::TerminalNode *INTERR();
    IsTypePatternArmsContext *isTypePatternArms();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsTypeContext* isType();

  class  IsTypePatternArmsContext : public antlr4::ParserRuleContext {
  public:
    IsTypePatternArmsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    std::vector<IsTypePatternArmContext *> isTypePatternArm();
    IsTypePatternArmContext* isTypePatternArm(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsTypePatternArmsContext* isTypePatternArms();

  class  IsTypePatternArmContext : public antlr4::ParserRuleContext {
  public:
    IsTypePatternArmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsTypePatternArmContext* isTypePatternArm();

  class  Lambda_expressionContext : public antlr4::ParserRuleContext {
  public:
    Lambda_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Anonymous_function_signatureContext *anonymous_function_signature();
    Right_arrowContext *right_arrow();
    Anonymous_function_bodyContext *anonymous_function_body();
    antlr4::tree::TerminalNode *ASYNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lambda_expressionContext* lambda_expression();

  class  Anonymous_function_signatureContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_function_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Explicit_anonymous_function_parameter_listContext *explicit_anonymous_function_parameter_list();
    Implicit_anonymous_function_parameter_listContext *implicit_anonymous_function_parameter_list();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Anonymous_function_signatureContext* anonymous_function_signature();

  class  Explicit_anonymous_function_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Explicit_anonymous_function_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Explicit_anonymous_function_parameterContext *> explicit_anonymous_function_parameter();
    Explicit_anonymous_function_parameterContext* explicit_anonymous_function_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explicit_anonymous_function_parameter_listContext* explicit_anonymous_function_parameter_list();

  class  Explicit_anonymous_function_parameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *refout = nullptr;
    Explicit_anonymous_function_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explicit_anonymous_function_parameterContext* explicit_anonymous_function_parameter();

  class  Implicit_anonymous_function_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Implicit_anonymous_function_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Implicit_anonymous_function_parameter_listContext* implicit_anonymous_function_parameter_list();

  class  Anonymous_function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Throwable_expressionContext *throwable_expression();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Anonymous_function_bodyContext* anonymous_function_body();

  class  Query_expressionContext : public antlr4::ParserRuleContext {
  public:
    Query_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    From_clauseContext *from_clause();
    Query_bodyContext *query_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_expressionContext* query_expression();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  From_clauseContext* from_clause();

  class  Query_bodyContext : public antlr4::ParserRuleContext {
  public:
    Query_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_or_group_clauseContext *select_or_group_clause();
    std::vector<Query_body_clauseContext *> query_body_clause();
    Query_body_clauseContext* query_body_clause(size_t i);
    Query_continuationContext *query_continuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_bodyContext* query_body();

  class  Query_body_clauseContext : public antlr4::ParserRuleContext {
  public:
    Query_body_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    From_clauseContext *from_clause();
    Let_clauseContext *let_clause();
    Where_clauseContext *where_clause();
    Combined_join_clauseContext *combined_join_clause();
    Orderby_clauseContext *orderby_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_body_clauseContext* query_body_clause();

  class  Let_clauseContext : public antlr4::ParserRuleContext {
  public:
    Let_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_clauseContext* let_clause();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_clauseContext* where_clause();

  class  Combined_join_clauseContext : public antlr4::ParserRuleContext {
  public:
    Combined_join_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *IN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *EQUALS();
    Type_Context *type_();
    antlr4::tree::TerminalNode *INTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Combined_join_clauseContext* combined_join_clause();

  class  Orderby_clauseContext : public antlr4::ParserRuleContext {
  public:
    Orderby_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDERBY();
    std::vector<OrderingContext *> ordering();
    OrderingContext* ordering(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Orderby_clauseContext* orderby_clause();

  class  OrderingContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dir = nullptr;
    OrderingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASCENDING();
    antlr4::tree::TerminalNode *DESCENDING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrderingContext* ordering();

  class  Select_or_group_clauseContext : public antlr4::ParserRuleContext {
  public:
    Select_or_group_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_or_group_clauseContext* select_or_group_clause();

  class  Query_continuationContext : public antlr4::ParserRuleContext {
  public:
    Query_continuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    IdentifierContext *identifier();
    Query_bodyContext *query_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_continuationContext* query_continuation();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Labeled_StatementContext *labeled_Statement();
    DeclarationStatementContext *declarationStatement();
    Embedded_statementContext *embedded_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_variable_declarationContext *local_variable_declaration();
    antlr4::tree::TerminalNode *SEMICOLON();
    Local_constant_declarationContext *local_constant_declaration();
    Local_function_declarationContext *local_function_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  Local_function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_function_headerContext *local_function_header();
    Local_function_bodyContext *local_function_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_function_declarationContext* local_function_declaration();

  class  Local_function_headerContext : public antlr4::ParserRuleContext {
  public:
    Local_function_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Return_typeContext *return_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Local_function_modifiersContext *local_function_modifiers();
    Type_parameter_listContext *type_parameter_list();
    Formal_parameter_listContext *formal_parameter_list();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_function_headerContext* local_function_header();

  class  Local_function_modifiersContext : public antlr4::ParserRuleContext {
  public:
    Local_function_modifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_function_modifiersContext* local_function_modifiers();

  class  Local_function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Local_function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_function_bodyContext* local_function_body();

  class  Labeled_StatementContext : public antlr4::ParserRuleContext {
  public:
    Labeled_StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Labeled_StatementContext* labeled_Statement();

  class  Embedded_statementContext : public antlr4::ParserRuleContext {
  public:
    Embedded_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    Simple_embedded_statementContext *simple_embedded_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Embedded_statementContext* embedded_statement();

  class  Simple_embedded_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_embedded_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Simple_embedded_statementContext() = default;
    void copyFrom(Simple_embedded_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TryStatementContext : public Simple_embedded_statementContext {
  public:
    TryStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *TRY();
    BlockContext *block();
    Catch_clausesContext *catch_clauses();
    Finally_clauseContext *finally_clause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CheckedStatementContext : public Simple_embedded_statementContext {
  public:
    CheckedStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *CHECKED();
    BlockContext *block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThrowStatementContext : public Simple_embedded_statementContext {
  public:
    ThrowStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TheEmptyStatementContext : public Simple_embedded_statementContext {
  public:
    TheEmptyStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnsafeStatementContext : public Simple_embedded_statementContext {
  public:
    UnsafeStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *UNSAFE();
    BlockContext *block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForStatementContext : public Simple_embedded_statementContext {
  public:
    ForStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    For_initializerContext *for_initializer();
    ExpressionContext *expression();
    For_iteratorContext *for_iterator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BreakStatementContext : public Simple_embedded_statementContext {
  public:
    BreakStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IfStatementContext : public Simple_embedded_statementContext {
  public:
    IfStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<If_bodyContext *> if_body();
    If_bodyContext* if_body(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ReturnStatementContext : public Simple_embedded_statementContext {
  public:
    ReturnStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GotoStatementContext : public Simple_embedded_statementContext {
  public:
    GotoStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *SEMICOLON();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SwitchStatementContext : public Simple_embedded_statementContext {
  public:
    SwitchStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Switch_sectionContext *> switch_section();
    Switch_sectionContext* switch_section(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FixedStatementContext : public Simple_embedded_statementContext {
  public:
    FixedStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Pointer_typeContext *pointer_type();
    Fixed_pointer_declaratorsContext *fixed_pointer_declarators();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WhileStatementContext : public Simple_embedded_statementContext {
  public:
    WhileStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DoStatementContext : public Simple_embedded_statementContext {
  public:
    DoStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *DO();
    Embedded_statementContext *embedded_statement();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForeachStatementContext : public Simple_embedded_statementContext {
  public:
    ForeachStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *FOREACH();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Local_variable_typeContext *local_variable_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    antlr4::tree::TerminalNode *AWAIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UncheckedStatementContext : public Simple_embedded_statementContext {
  public:
    UncheckedStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *UNCHECKED();
    BlockContext *block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpressionStatementContext : public Simple_embedded_statementContext {
  public:
    ExpressionStatementContext(Simple_embedded_statementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ContinueStatementContext : public Simple_embedded_statementContext {
  public:
    ContinueStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UsingStatementContext : public Simple_embedded_statementContext {
  public:
    UsingStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Resource_acquisitionContext *resource_acquisition();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LockStatementContext : public Simple_embedded_statementContext {
  public:
    LockStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Embedded_statementContext *embedded_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  YieldStatementContext : public Simple_embedded_statementContext {
  public:
    YieldStatementContext(Simple_embedded_statementContext *ctx);

    antlr4::tree::TerminalNode *YIELD();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BREAK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Simple_embedded_statementContext* simple_embedded_statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Statement_listContext *statement_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  Local_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_variable_typeContext *local_variable_type();
    std::vector<Local_variable_declaratorContext *> local_variable_declarator();
    Local_variable_declaratorContext* local_variable_declarator(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *READONLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FIXED();
    Pointer_typeContext *pointer_type();
    Fixed_pointer_declaratorsContext *fixed_pointer_declarators();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_variable_declarationContext* local_variable_declaration();

  class  Local_variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Local_variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_variable_typeContext* local_variable_type();

  class  Local_variable_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Local_variable_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Local_variable_initializerContext *local_variable_initializer();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_variable_declaratorContext* local_variable_declarator();

  class  Local_variable_initializerContext : public antlr4::ParserRuleContext {
  public:
    Local_variable_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Array_initializerContext *array_initializer();
    Stackalloc_initializerContext *stackalloc_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_variable_initializerContext* local_variable_initializer();

  class  Local_constant_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_constant_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Type_Context *type_();
    Constant_declaratorsContext *constant_declarators();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_constant_declarationContext* local_constant_declaration();

  class  If_bodyContext : public antlr4::ParserRuleContext {
  public:
    If_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    Simple_embedded_statementContext *simple_embedded_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_bodyContext* if_body();

  class  Switch_sectionContext : public antlr4::ParserRuleContext {
  public:
    Switch_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_listContext *statement_list();
    std::vector<Switch_labelContext *> switch_label();
    Switch_labelContext* switch_label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_sectionContext* switch_section();

  class  Switch_labelContext : public antlr4::ParserRuleContext {
  public:
    Switch_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    Case_guardContext *case_guard();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_labelContext* switch_label();

  class  Case_guardContext : public antlr4::ParserRuleContext {
  public:
    Case_guardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_guardContext* case_guard();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_listContext* statement_list();

  class  For_initializerContext : public antlr4::ParserRuleContext {
  public:
    For_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_variable_declarationContext *local_variable_declaration();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_initializerContext* for_initializer();

  class  For_iteratorContext : public antlr4::ParserRuleContext {
  public:
    For_iteratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_iteratorContext* for_iterator();

  class  Catch_clausesContext : public antlr4::ParserRuleContext {
  public:
    Catch_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specific_catch_clauseContext *> specific_catch_clause();
    Specific_catch_clauseContext* specific_catch_clause(size_t i);
    General_catch_clauseContext *general_catch_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Catch_clausesContext* catch_clauses();

  class  Specific_catch_clauseContext : public antlr4::ParserRuleContext {
  public:
    Specific_catch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    BlockContext *block();
    IdentifierContext *identifier();
    Exception_filterContext *exception_filter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specific_catch_clauseContext* specific_catch_clause();

  class  General_catch_clauseContext : public antlr4::ParserRuleContext {
  public:
    General_catch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    BlockContext *block();
    Exception_filterContext *exception_filter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  General_catch_clauseContext* general_catch_clause();

  class  Exception_filterContext : public antlr4::ParserRuleContext {
  public:
    Exception_filterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exception_filterContext* exception_filter();

  class  Finally_clauseContext : public antlr4::ParserRuleContext {
  public:
    Finally_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Finally_clauseContext* finally_clause();

  class  Resource_acquisitionContext : public antlr4::ParserRuleContext {
  public:
    Resource_acquisitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_variable_declarationContext *local_variable_declaration();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Resource_acquisitionContext* resource_acquisition();

  class  Namespace_declarationContext : public antlr4::ParserRuleContext {
  public:
    HuTaoParser::Qualified_identifierContext *qi = nullptr;
    Namespace_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMESPACE();
    Namespace_bodyContext *namespace_body();
    Qualified_identifierContext *qualified_identifier();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Namespace_declarationContext* namespace_declaration();

  class  Qualified_identifierContext : public antlr4::ParserRuleContext {
  public:
    Qualified_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Qualified_identifierContext* qualified_identifier();

  class  Namespace_bodyContext : public antlr4::ParserRuleContext {
  public:
    Namespace_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Extern_alias_directivesContext *extern_alias_directives();
    Using_directivesContext *using_directives();
    Namespace_member_declarationsContext *namespace_member_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Namespace_bodyContext* namespace_body();

  class  Extern_alias_directivesContext : public antlr4::ParserRuleContext {
  public:
    Extern_alias_directivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Extern_alias_directiveContext *> extern_alias_directive();
    Extern_alias_directiveContext* extern_alias_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_alias_directivesContext* extern_alias_directives();

  class  Extern_alias_directiveContext : public antlr4::ParserRuleContext {
  public:
    Extern_alias_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *ALIAS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_alias_directiveContext* extern_alias_directive();

  class  Using_directivesContext : public antlr4::ParserRuleContext {
  public:
    Using_directivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Using_directiveContext *> using_directive();
    Using_directiveContext* using_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Using_directivesContext* using_directives();

  class  Using_directiveContext : public antlr4::ParserRuleContext {
  public:
    Using_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Using_directiveContext() = default;
    void copyFrom(Using_directiveContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UsingAliasDirectiveContext : public Using_directiveContext {
  public:
    UsingAliasDirectiveContext(Using_directiveContext *ctx);

    antlr4::tree::TerminalNode *USING();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UsingNamespaceDirectiveContext : public Using_directiveContext {
  public:
    UsingNamespaceDirectiveContext(Using_directiveContext *ctx);

    antlr4::tree::TerminalNode *USING();
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UsingStaticDirectiveContext : public Using_directiveContext {
  public:
    UsingStaticDirectiveContext(Using_directiveContext *ctx);

    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *STATIC();
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Using_directiveContext* using_directive();

  class  Namespace_member_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Namespace_member_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Namespace_member_declarationContext *> namespace_member_declaration();
    Namespace_member_declarationContext* namespace_member_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Namespace_member_declarationsContext* namespace_member_declarations();

  class  Namespace_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Namespace_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Namespace_declarationContext *namespace_declaration();
    Type_declarationContext *type_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Namespace_member_declarationContext* namespace_member_declaration();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_definitionContext *class_definition();
    Struct_definitionContext *struct_definition();
    Interface_definitionContext *interface_definition();
    Enum_definitionContext *enum_definition();
    Delegate_definitionContext *delegate_definition();
    AttributesContext *attributes();
    All_member_modifiersContext *all_member_modifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Qualified_alias_memberContext : public antlr4::ParserRuleContext {
  public:
    Qualified_alias_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    Type_argument_listContext *type_argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Qualified_alias_memberContext* qualified_alias_member();

  class  Type_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Type_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<Type_parameterContext *> type_parameter();
    Type_parameterContext* type_parameter(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_parameter_listContext* type_parameter_list();

  class  Type_parameterContext : public antlr4::ParserRuleContext {
  public:
    Type_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_parameterContext* type_parameter();

  class  Class_baseContext : public antlr4::ParserRuleContext {
  public:
    Class_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Class_typeContext *class_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Namespace_or_type_nameContext *> namespace_or_type_name();
    Namespace_or_type_nameContext* namespace_or_type_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_baseContext* class_base();

  class  Interface_type_listContext : public antlr4::ParserRuleContext {
  public:
    Interface_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Namespace_or_type_nameContext *> namespace_or_type_name();
    Namespace_or_type_nameContext* namespace_or_type_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_type_listContext* interface_type_list();

  class  Type_parameter_constraints_clausesContext : public antlr4::ParserRuleContext {
  public:
    Type_parameter_constraints_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_parameter_constraints_clauseContext *> type_parameter_constraints_clause();
    Type_parameter_constraints_clauseContext* type_parameter_constraints_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_parameter_constraints_clausesContext* type_parameter_constraints_clauses();

  class  Type_parameter_constraints_clauseContext : public antlr4::ParserRuleContext {
  public:
    Type_parameter_constraints_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    Type_parameter_constraintsContext *type_parameter_constraints();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_parameter_constraints_clauseContext* type_parameter_constraints_clause();

  class  Type_parameter_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Type_parameter_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constructor_constraintContext *constructor_constraint();
    Primary_constraintContext *primary_constraint();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Secondary_constraintsContext *secondary_constraints();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_parameter_constraintsContext* type_parameter_constraints();

  class  Primary_constraintContext : public antlr4::ParserRuleContext {
  public:
    Primary_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *INTERR();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNMANAGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primary_constraintContext* primary_constraint();

  class  Secondary_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Secondary_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Namespace_or_type_nameContext *> namespace_or_type_name();
    Namespace_or_type_nameContext* namespace_or_type_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Secondary_constraintsContext* secondary_constraints();

  class  Constructor_constraintContext : public antlr4::ParserRuleContext {
  public:
    Constructor_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constructor_constraintContext* constructor_constraint();

  class  Class_bodyContext : public antlr4::ParserRuleContext {
  public:
    Class_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Class_member_declarationsContext *class_member_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_bodyContext* class_body();

  class  Class_member_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Class_member_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_member_declarationContext *> class_member_declaration();
    Class_member_declarationContext* class_member_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_member_declarationsContext* class_member_declarations();

  class  Class_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Common_member_declarationContext *common_member_declaration();
    Destructor_definitionContext *destructor_definition();
    AttributesContext *attributes();
    All_member_modifiersContext *all_member_modifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_member_declarationContext* class_member_declaration();

  class  All_member_modifiersContext : public antlr4::ParserRuleContext {
  public:
    All_member_modifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<All_member_modifierContext *> all_member_modifier();
    All_member_modifierContext* all_member_modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  All_member_modifiersContext* all_member_modifiers();

  class  All_member_modifierContext : public antlr4::ParserRuleContext {
  public:
    All_member_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *ASYNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  All_member_modifierContext* all_member_modifier();

  class  Common_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Common_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_declarationContext *constant_declaration();
    Typed_member_declarationContext *typed_member_declaration();
    Event_declarationContext *event_declaration();
    Conversion_operator_declaratorContext *conversion_operator_declarator();
    BodyContext *body();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    Constructor_declarationContext *constructor_declaration();
    antlr4::tree::TerminalNode *VOID();
    Method_declarationContext *method_declaration();
    Class_definitionContext *class_definition();
    Struct_definitionContext *struct_definition();
    Interface_definitionContext *interface_definition();
    Enum_definitionContext *enum_definition();
    Delegate_definitionContext *delegate_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Common_member_declarationContext* common_member_declaration();

  class  Typed_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Typed_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *DOT();
    Indexer_declarationContext *indexer_declaration();
    Method_declarationContext *method_declaration();
    Property_declarationContext *property_declaration();
    Operator_declarationContext *operator_declaration();
    Field_declarationContext *field_declaration();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *READONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Typed_member_declarationContext* typed_member_declaration();

  class  Constant_declaratorsContext : public antlr4::ParserRuleContext {
  public:
    Constant_declaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_declaratorContext *> constant_declarator();
    Constant_declaratorContext* constant_declarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_declaratorsContext* constant_declarators();

  class  Constant_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Constant_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_declaratorContext* constant_declarator();

  class  Variable_declaratorsContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declaratorContext *> variable_declarator();
    Variable_declaratorContext* variable_declarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_declaratorsContext* variable_declarators();

  class  Variable_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Variable_initializerContext *variable_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_declaratorContext* variable_declarator();

  class  Variable_initializerContext : public antlr4::ParserRuleContext {
  public:
    Variable_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Array_initializerContext *array_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_initializerContext* variable_initializer();

  class  Return_typeContext : public antlr4::ParserRuleContext {
  public:
    Return_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_typeContext* return_type();

  class  Member_nameContext : public antlr4::ParserRuleContext {
  public:
    Member_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Namespace_or_type_nameContext *namespace_or_type_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_nameContext* member_name();

  class  Method_bodyContext : public antlr4::ParserRuleContext {
  public:
    Method_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_bodyContext* method_body();

  class  Formal_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Formal_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_arrayContext *parameter_array();
    Fixed_parametersContext *fixed_parameters();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_parameter_listContext* formal_parameter_list();

  class  Fixed_parametersContext : public antlr4::ParserRuleContext {
  public:
    Fixed_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fixed_parameterContext *> fixed_parameter();
    Fixed_parameterContext* fixed_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_parametersContext* fixed_parameters();

  class  Fixed_parameterContext : public antlr4::ParserRuleContext {
  public:
    Fixed_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arg_declarationContext *arg_declaration();
    AttributesContext *attributes();
    Parameter_modifierContext *parameter_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_parameterContext* fixed_parameter();

  class  Parameter_modifierContext : public antlr4::ParserRuleContext {
  public:
    Parameter_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *THIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_modifierContext* parameter_modifier();

  class  Parameter_arrayContext : public antlr4::ParserRuleContext {
  public:
    Parameter_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMS();
    Array_typeContext *array_type();
    IdentifierContext *identifier();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_arrayContext* parameter_array();

  class  Accessor_declarationsContext : public antlr4::ParserRuleContext {
  public:
    HuTaoParser::AttributesContext *attrs = nullptr;
    HuTaoParser::Accessor_modifierContext *mods = nullptr;
    Accessor_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    Accessor_bodyContext *accessor_body();
    antlr4::tree::TerminalNode *SET();
    AttributesContext *attributes();
    Accessor_modifierContext *accessor_modifier();
    Set_accessor_declarationContext *set_accessor_declaration();
    Get_accessor_declarationContext *get_accessor_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accessor_declarationsContext* accessor_declarations();

  class  Get_accessor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Get_accessor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    Accessor_bodyContext *accessor_body();
    AttributesContext *attributes();
    Accessor_modifierContext *accessor_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Get_accessor_declarationContext* get_accessor_declaration();

  class  Set_accessor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Set_accessor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    Accessor_bodyContext *accessor_body();
    AttributesContext *attributes();
    Accessor_modifierContext *accessor_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Set_accessor_declarationContext* set_accessor_declaration();

  class  Accessor_modifierContext : public antlr4::ParserRuleContext {
  public:
    Accessor_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PRIVATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accessor_modifierContext* accessor_modifier();

  class  Accessor_bodyContext : public antlr4::ParserRuleContext {
  public:
    Accessor_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accessor_bodyContext* accessor_body();

  class  Event_accessor_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Event_accessor_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    BlockContext *block();
    Remove_accessor_declarationContext *remove_accessor_declaration();
    antlr4::tree::TerminalNode *REMOVE();
    Add_accessor_declarationContext *add_accessor_declaration();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_accessor_declarationsContext* event_accessor_declarations();

  class  Add_accessor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Add_accessor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    BlockContext *block();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Add_accessor_declarationContext* add_accessor_declaration();

  class  Remove_accessor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Remove_accessor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVE();
    BlockContext *block();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Remove_accessor_declarationContext* remove_accessor_declaration();

  class  Overloadable_operatorContext : public antlr4::ParserRuleContext {
  public:
    Overloadable_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *OP_INC();
    antlr4::tree::TerminalNode *OP_DEC();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *BITWISE_OR();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *OP_LEFT_SHIFT();
    Right_shiftContext *right_shift();
    antlr4::tree::TerminalNode *OP_EQ();
    antlr4::tree::TerminalNode *OP_NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *OP_GE();
    antlr4::tree::TerminalNode *OP_LE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Overloadable_operatorContext* overloadable_operator();

  class  Conversion_operator_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Conversion_operator_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    Type_Context *type_();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Arg_declarationContext *arg_declaration();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *EXPLICIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conversion_operator_declaratorContext* conversion_operator_declarator();

  class  Constructor_initializerContext : public antlr4::ParserRuleContext {
  public:
    Constructor_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *THIS();
    Argument_listContext *argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constructor_initializerContext* constructor_initializer();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  Struct_interfacesContext : public antlr4::ParserRuleContext {
  public:
    Struct_interfacesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Interface_type_listContext *interface_type_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_interfacesContext* struct_interfaces();

  class  Struct_bodyContext : public antlr4::ParserRuleContext {
  public:
    Struct_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Struct_member_declarationContext *> struct_member_declaration();
    Struct_member_declarationContext* struct_member_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_bodyContext* struct_body();

  class  Struct_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Struct_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Common_member_declarationContext *common_member_declaration();
    antlr4::tree::TerminalNode *FIXED();
    Type_Context *type_();
    antlr4::tree::TerminalNode *SEMICOLON();
    AttributesContext *attributes();
    All_member_modifiersContext *all_member_modifiers();
    std::vector<Fixed_size_buffer_declaratorContext *> fixed_size_buffer_declarator();
    Fixed_size_buffer_declaratorContext* fixed_size_buffer_declarator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_member_declarationContext* struct_member_declaration();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    std::vector<Rank_specifierContext *> rank_specifier();
    Rank_specifierContext* rank_specifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTERR();
    antlr4::tree::TerminalNode* INTERR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_typeContext* array_type();

  class  Rank_specifierContext : public antlr4::ParserRuleContext {
  public:
    Rank_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rank_specifierContext* rank_specifier();

  class  Array_initializerContext : public antlr4::ParserRuleContext {
  public:
    Array_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Variable_initializerContext *> variable_initializer();
    Variable_initializerContext* variable_initializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_initializerContext* array_initializer();

  class  Variant_type_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Variant_type_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<Variant_type_parameterContext *> variant_type_parameter();
    Variant_type_parameterContext* variant_type_parameter(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variant_type_parameter_listContext* variant_type_parameter_list();

  class  Variant_type_parameterContext : public antlr4::ParserRuleContext {
  public:
    Variant_type_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AttributesContext *attributes();
    Variance_annotationContext *variance_annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variant_type_parameterContext* variant_type_parameter();

  class  Variance_annotationContext : public antlr4::ParserRuleContext {
  public:
    Variance_annotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variance_annotationContext* variance_annotation();

  class  Interface_baseContext : public antlr4::ParserRuleContext {
  public:
    Interface_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Interface_type_listContext *interface_type_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_baseContext* interface_base();

  class  Interface_bodyContext : public antlr4::ParserRuleContext {
  public:
    Interface_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Interface_member_declarationContext *> interface_member_declaration();
    Interface_member_declarationContext* interface_member_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_bodyContext* interface_body();

  class  Interface_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    antlr4::tree::TerminalNode *VOID();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *EVENT();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Interface_accessorsContext *interface_accessors();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Formal_parameter_listContext *formal_parameter_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *READONLY();
    Type_parameter_listContext *type_parameter_list();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_member_declarationContext* interface_member_declaration();

  class  Interface_accessorsContext : public antlr4::ParserRuleContext {
  public:
    Interface_accessorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *SET();
    std::vector<AttributesContext *> attributes();
    AttributesContext* attributes(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_accessorsContext* interface_accessors();

  class  Enum_baseContext : public antlr4::ParserRuleContext {
  public:
    Enum_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_baseContext* enum_base();

  class  Enum_bodyContext : public antlr4::ParserRuleContext {
  public:
    Enum_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Enum_member_declarationContext *> enum_member_declaration();
    Enum_member_declarationContext* enum_member_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_bodyContext* enum_body();

  class  Enum_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_member_declarationContext* enum_member_declaration();

  class  Global_attribute_sectionContext : public antlr4::ParserRuleContext {
  public:
    Global_attribute_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Global_attribute_targetContext *global_attribute_target();
    antlr4::tree::TerminalNode *COLON();
    Attribute_listContext *attribute_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_attribute_sectionContext* global_attribute_section();

  class  Global_attribute_targetContext : public antlr4::ParserRuleContext {
  public:
    Global_attribute_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_attribute_targetContext* global_attribute_target();

  class  AttributesContext : public antlr4::ParserRuleContext {
  public:
    AttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_sectionContext *> attribute_section();
    Attribute_sectionContext* attribute_section(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributesContext* attributes();

  class  Attribute_sectionContext : public antlr4::ParserRuleContext {
  public:
    Attribute_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Attribute_listContext *attribute_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Attribute_targetContext *attribute_target();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_sectionContext* attribute_section();

  class  Attribute_targetContext : public antlr4::ParserRuleContext {
  public:
    Attribute_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_targetContext* attribute_target();

  class  Attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_listContext* attribute_list();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Namespace_or_type_nameContext *namespace_or_type_name();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Attribute_argumentContext *> attribute_argument();
    Attribute_argumentContext* attribute_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  Attribute_argumentContext : public antlr4::ParserRuleContext {
  public:
    Attribute_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_argumentContext* attribute_argument();

  class  Pointer_typeContext : public antlr4::ParserRuleContext {
  public:
    Pointer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    Simple_typeContext *simple_type();
    Class_typeContext *class_type();
    std::vector<Rank_specifierContext *> rank_specifier();
    Rank_specifierContext* rank_specifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTERR();
    antlr4::tree::TerminalNode* INTERR(size_t i);
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pointer_typeContext* pointer_type();

  class  Fixed_pointer_declaratorsContext : public antlr4::ParserRuleContext {
  public:
    Fixed_pointer_declaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fixed_pointer_declaratorContext *> fixed_pointer_declarator();
    Fixed_pointer_declaratorContext* fixed_pointer_declarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_pointer_declaratorsContext* fixed_pointer_declarators();

  class  Fixed_pointer_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Fixed_pointer_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Fixed_pointer_initializerContext *fixed_pointer_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_pointer_declaratorContext* fixed_pointer_declarator();

  class  Fixed_pointer_initializerContext : public antlr4::ParserRuleContext {
  public:
    Fixed_pointer_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AMP();
    Stackalloc_initializerContext *stackalloc_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_pointer_initializerContext* fixed_pointer_initializer();

  class  Fixed_size_buffer_declaratorContext : public antlr4::ParserRuleContext {
  public:
    Fixed_size_buffer_declaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_size_buffer_declaratorContext* fixed_size_buffer_declarator();

  class  Stackalloc_initializerContext : public antlr4::ParserRuleContext {
  public:
    Stackalloc_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STACKALLOC();
    Type_Context *type_();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stackalloc_initializerContext* stackalloc_initializer();

  class  Right_arrowContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *first = nullptr;
    antlr4::Token *second = nullptr;
    Right_arrowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Right_arrowContext* right_arrow();

  class  Right_shiftContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *first = nullptr;
    antlr4::Token *second = nullptr;
    Right_shiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Right_shiftContext* right_shift();

  class  Right_shift_assignmentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *first = nullptr;
    antlr4::Token *second = nullptr;
    Right_shift_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *OP_GE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Right_shift_assignmentContext* right_shift_assignment();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boolean_literalContext *boolean_literal();
    String_literalContext *string_literal();
    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *HEX_INTEGER_LITERAL();
    antlr4::tree::TerminalNode *BIN_INTEGER_LITERAL();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  Boolean_literalContext : public antlr4::ParserRuleContext {
  public:
    Boolean_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Boolean_literalContext* boolean_literal();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGULAR_STRING();
    antlr4::tree::TerminalNode *VERBATIUM_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_literalContext* string_literal();

  class  Interpolated_regular_string_partContext : public antlr4::ParserRuleContext {
  public:
    Interpolated_regular_string_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interpolated_string_expressionContext *interpolated_string_expression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_CHAR_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_STRING_INSIDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interpolated_regular_string_partContext* interpolated_regular_string_part();

  class  Interpolated_verbatium_string_partContext : public antlr4::ParserRuleContext {
  public:
    Interpolated_verbatium_string_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interpolated_string_expressionContext *interpolated_string_expression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *VERBATIUM_DOUBLE_QUOTE_INSIDE();
    antlr4::tree::TerminalNode *VERBATIUM_INSIDE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interpolated_verbatium_string_partContext* interpolated_verbatium_string_part();

  class  Interpolated_string_expressionContext : public antlr4::ParserRuleContext {
  public:
    Interpolated_string_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> FORMAT_STRING();
    antlr4::tree::TerminalNode* FORMAT_STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interpolated_string_expressionContext* interpolated_string_expression();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DELEGATE();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *F64();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXPLICIT();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FINALLY();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FOREACH();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *PARAMS();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *SIZEOF();
    antlr4::tree::TerminalNode *STACKALLOC();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *TYPEOF();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *U64();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNMANAGED();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WHILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  Class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    IdentifierContext *identifier();
    Class_bodyContext *class_body();
    Type_parameter_listContext *type_parameter_list();
    Class_baseContext *class_base();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_definitionContext* class_definition();

  class  Struct_definitionContext : public antlr4::ParserRuleContext {
  public:
    Struct_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    IdentifierContext *identifier();
    Struct_bodyContext *struct_body();
    Type_parameter_listContext *type_parameter_list();
    Struct_interfacesContext *struct_interfaces();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_definitionContext* struct_definition();

  class  Interface_definitionContext : public antlr4::ParserRuleContext {
  public:
    Interface_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    IdentifierContext *identifier();
    Class_bodyContext *class_body();
    Variant_type_parameter_listContext *variant_type_parameter_list();
    Interface_baseContext *interface_base();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_definitionContext* interface_definition();

  class  Enum_definitionContext : public antlr4::ParserRuleContext {
  public:
    Enum_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    IdentifierContext *identifier();
    Enum_bodyContext *enum_body();
    Enum_baseContext *enum_base();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_definitionContext* enum_definition();

  class  Delegate_definitionContext : public antlr4::ParserRuleContext {
  public:
    Delegate_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELEGATE();
    Return_typeContext *return_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLON();
    Variant_type_parameter_listContext *variant_type_parameter_list();
    Formal_parameter_listContext *formal_parameter_list();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delegate_definitionContext* delegate_definition();

  class  Event_declarationContext : public antlr4::ParserRuleContext {
  public:
    Event_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();
    Type_Context *type_();
    Variable_declaratorsContext *variable_declarators();
    antlr4::tree::TerminalNode *SEMICOLON();
    Member_nameContext *member_name();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Event_accessor_declarationsContext *event_accessor_declarations();
    antlr4::tree::TerminalNode *CLOSE_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_declarationContext* event_declaration();

  class  Field_declarationContext : public antlr4::ParserRuleContext {
  public:
    Field_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declaratorsContext *variable_declarators();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_declarationContext* field_declaration();

  class  Property_declarationContext : public antlr4::ParserRuleContext {
  public:
    Property_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Member_nameContext *member_name();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Accessor_declarationsContext *accessor_declarations();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Variable_initializerContext *variable_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_declarationContext* property_declaration();

  class  Constant_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constant_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Type_Context *type_();
    Constant_declaratorsContext *constant_declarators();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_declarationContext* constant_declaration();

  class  Indexer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Indexer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Formal_parameter_listContext *formal_parameter_list();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    Accessor_declarationsContext *accessor_declarations();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Indexer_declarationContext* indexer_declaration();

  class  Destructor_definitionContext : public antlr4::ParserRuleContext {
  public:
    Destructor_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TILDE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Destructor_definitionContext* destructor_definition();

  class  Constructor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constructor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    BodyContext *body();
    Formal_parameter_listContext *formal_parameter_list();
    Constructor_initializerContext *constructor_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constructor_declarationContext* constructor_declaration();

  class  Method_declarationContext : public antlr4::ParserRuleContext {
  public:
    Method_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_member_nameContext *method_member_name();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Method_bodyContext *method_body();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    Type_parameter_listContext *type_parameter_list();
    Formal_parameter_listContext *formal_parameter_list();
    Type_parameter_constraints_clausesContext *type_parameter_constraints_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_declarationContext* method_declaration();

  class  Method_member_nameContext : public antlr4::ParserRuleContext {
  public:
    Method_member_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOUBLE_COLON();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Type_argument_listContext *> type_argument_list();
    Type_argument_listContext* type_argument_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_member_nameContext* method_member_name();

  class  Operator_declarationContext : public antlr4::ParserRuleContext {
  public:
    Operator_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    Overloadable_operatorContext *overloadable_operator();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Arg_declarationContext *> arg_declaration();
    Arg_declarationContext* arg_declaration(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    BodyContext *body();
    Right_arrowContext *right_arrow();
    Throwable_expressionContext *throwable_expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_declarationContext* operator_declaration();

  class  Arg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Arg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arg_declarationContext* arg_declaration();

  class  Method_invocationContext : public antlr4::ParserRuleContext {
  public:
    Method_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Argument_listContext *argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_invocationContext* method_invocation();

  class  Object_creation_expressionContext : public antlr4::ParserRuleContext {
  public:
    Object_creation_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Argument_listContext *argument_list();
    Object_or_collection_initializerContext *object_or_collection_initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_creation_expressionContext* object_creation_expression();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ASCENDING();
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *AWAIT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *NAMEOF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ORDERBY();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *UNMANAGED();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *YIELD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool right_arrowSempred(Right_arrowContext *_localctx, size_t predicateIndex);
  bool right_shiftSempred(Right_shiftContext *_localctx, size_t predicateIndex);
  bool right_shift_assignmentSempred(Right_shift_assignmentContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

