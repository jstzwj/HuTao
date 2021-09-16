
// Generated from HuTaoParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include <hutao/Parser/HuTaoParser.h>


/**
 * This interface defines an abstract listener for a parse tree produced by HuTaoParser.
 */
class  HuTaoParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilation_unit(HuTaoParser::Compilation_unitContext *ctx) = 0;
  virtual void exitCompilation_unit(HuTaoParser::Compilation_unitContext *ctx) = 0;

  virtual void enterNamespace_or_type_name(HuTaoParser::Namespace_or_type_nameContext *ctx) = 0;
  virtual void exitNamespace_or_type_name(HuTaoParser::Namespace_or_type_nameContext *ctx) = 0;

  virtual void enterType_(HuTaoParser::Type_Context *ctx) = 0;
  virtual void exitType_(HuTaoParser::Type_Context *ctx) = 0;

  virtual void enterBase_type(HuTaoParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(HuTaoParser::Base_typeContext *ctx) = 0;

  virtual void enterTuple_type(HuTaoParser::Tuple_typeContext *ctx) = 0;
  virtual void exitTuple_type(HuTaoParser::Tuple_typeContext *ctx) = 0;

  virtual void enterTuple_element(HuTaoParser::Tuple_elementContext *ctx) = 0;
  virtual void exitTuple_element(HuTaoParser::Tuple_elementContext *ctx) = 0;

  virtual void enterSimple_type(HuTaoParser::Simple_typeContext *ctx) = 0;
  virtual void exitSimple_type(HuTaoParser::Simple_typeContext *ctx) = 0;

  virtual void enterNumeric_type(HuTaoParser::Numeric_typeContext *ctx) = 0;
  virtual void exitNumeric_type(HuTaoParser::Numeric_typeContext *ctx) = 0;

  virtual void enterIntegral_type(HuTaoParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(HuTaoParser::Integral_typeContext *ctx) = 0;

  virtual void enterFloating_point_type(HuTaoParser::Floating_point_typeContext *ctx) = 0;
  virtual void exitFloating_point_type(HuTaoParser::Floating_point_typeContext *ctx) = 0;

  virtual void enterClass_type(HuTaoParser::Class_typeContext *ctx) = 0;
  virtual void exitClass_type(HuTaoParser::Class_typeContext *ctx) = 0;

  virtual void enterType_argument_list(HuTaoParser::Type_argument_listContext *ctx) = 0;
  virtual void exitType_argument_list(HuTaoParser::Type_argument_listContext *ctx) = 0;

  virtual void enterArgument_list(HuTaoParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(HuTaoParser::Argument_listContext *ctx) = 0;

  virtual void enterArgument(HuTaoParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(HuTaoParser::ArgumentContext *ctx) = 0;

  virtual void enterExpression(HuTaoParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(HuTaoParser::ExpressionContext *ctx) = 0;

  virtual void enterNon_assignment_expression(HuTaoParser::Non_assignment_expressionContext *ctx) = 0;
  virtual void exitNon_assignment_expression(HuTaoParser::Non_assignment_expressionContext *ctx) = 0;

  virtual void enterAssignment(HuTaoParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(HuTaoParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignment_operator(HuTaoParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(HuTaoParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(HuTaoParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(HuTaoParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterNull_coalescing_expression(HuTaoParser::Null_coalescing_expressionContext *ctx) = 0;
  virtual void exitNull_coalescing_expression(HuTaoParser::Null_coalescing_expressionContext *ctx) = 0;

  virtual void enterConditional_or_expression(HuTaoParser::Conditional_or_expressionContext *ctx) = 0;
  virtual void exitConditional_or_expression(HuTaoParser::Conditional_or_expressionContext *ctx) = 0;

  virtual void enterConditional_and_expression(HuTaoParser::Conditional_and_expressionContext *ctx) = 0;
  virtual void exitConditional_and_expression(HuTaoParser::Conditional_and_expressionContext *ctx) = 0;

  virtual void enterInclusive_or_expression(HuTaoParser::Inclusive_or_expressionContext *ctx) = 0;
  virtual void exitInclusive_or_expression(HuTaoParser::Inclusive_or_expressionContext *ctx) = 0;

  virtual void enterExclusive_or_expression(HuTaoParser::Exclusive_or_expressionContext *ctx) = 0;
  virtual void exitExclusive_or_expression(HuTaoParser::Exclusive_or_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(HuTaoParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(HuTaoParser::And_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(HuTaoParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(HuTaoParser::Equality_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(HuTaoParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(HuTaoParser::Relational_expressionContext *ctx) = 0;

  virtual void enterShift_expression(HuTaoParser::Shift_expressionContext *ctx) = 0;
  virtual void exitShift_expression(HuTaoParser::Shift_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(HuTaoParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(HuTaoParser::Additive_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_expression(HuTaoParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(HuTaoParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression(HuTaoParser::Switch_expressionContext *ctx) = 0;
  virtual void exitSwitch_expression(HuTaoParser::Switch_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression_arms(HuTaoParser::Switch_expression_armsContext *ctx) = 0;
  virtual void exitSwitch_expression_arms(HuTaoParser::Switch_expression_armsContext *ctx) = 0;

  virtual void enterSwitch_expression_arm(HuTaoParser::Switch_expression_armContext *ctx) = 0;
  virtual void exitSwitch_expression_arm(HuTaoParser::Switch_expression_armContext *ctx) = 0;

  virtual void enterRange_expression(HuTaoParser::Range_expressionContext *ctx) = 0;
  virtual void exitRange_expression(HuTaoParser::Range_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(HuTaoParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(HuTaoParser::Unary_expressionContext *ctx) = 0;

  virtual void enterPrimary_expression(HuTaoParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(HuTaoParser::Primary_expressionContext *ctx) = 0;

  virtual void enterLiteralExpression(HuTaoParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(HuTaoParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterSimpleNameExpression(HuTaoParser::SimpleNameExpressionContext *ctx) = 0;
  virtual void exitSimpleNameExpression(HuTaoParser::SimpleNameExpressionContext *ctx) = 0;

  virtual void enterParenthesisExpressions(HuTaoParser::ParenthesisExpressionsContext *ctx) = 0;
  virtual void exitParenthesisExpressions(HuTaoParser::ParenthesisExpressionsContext *ctx) = 0;

  virtual void enterMemberAccessExpression(HuTaoParser::MemberAccessExpressionContext *ctx) = 0;
  virtual void exitMemberAccessExpression(HuTaoParser::MemberAccessExpressionContext *ctx) = 0;

  virtual void enterLiteralAccessExpression(HuTaoParser::LiteralAccessExpressionContext *ctx) = 0;
  virtual void exitLiteralAccessExpression(HuTaoParser::LiteralAccessExpressionContext *ctx) = 0;

  virtual void enterThisReferenceExpression(HuTaoParser::ThisReferenceExpressionContext *ctx) = 0;
  virtual void exitThisReferenceExpression(HuTaoParser::ThisReferenceExpressionContext *ctx) = 0;

  virtual void enterBaseAccessExpression(HuTaoParser::BaseAccessExpressionContext *ctx) = 0;
  virtual void exitBaseAccessExpression(HuTaoParser::BaseAccessExpressionContext *ctx) = 0;

  virtual void enterObjectCreationExpression(HuTaoParser::ObjectCreationExpressionContext *ctx) = 0;
  virtual void exitObjectCreationExpression(HuTaoParser::ObjectCreationExpressionContext *ctx) = 0;

  virtual void enterTupleExpression(HuTaoParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(HuTaoParser::TupleExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(HuTaoParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(HuTaoParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterCheckedExpression(HuTaoParser::CheckedExpressionContext *ctx) = 0;
  virtual void exitCheckedExpression(HuTaoParser::CheckedExpressionContext *ctx) = 0;

  virtual void enterUncheckedExpression(HuTaoParser::UncheckedExpressionContext *ctx) = 0;
  virtual void exitUncheckedExpression(HuTaoParser::UncheckedExpressionContext *ctx) = 0;

  virtual void enterDefaultValueExpression(HuTaoParser::DefaultValueExpressionContext *ctx) = 0;
  virtual void exitDefaultValueExpression(HuTaoParser::DefaultValueExpressionContext *ctx) = 0;

  virtual void enterAnonymousMethodExpression(HuTaoParser::AnonymousMethodExpressionContext *ctx) = 0;
  virtual void exitAnonymousMethodExpression(HuTaoParser::AnonymousMethodExpressionContext *ctx) = 0;

  virtual void enterSizeofExpression(HuTaoParser::SizeofExpressionContext *ctx) = 0;
  virtual void exitSizeofExpression(HuTaoParser::SizeofExpressionContext *ctx) = 0;

  virtual void enterNameofExpression(HuTaoParser::NameofExpressionContext *ctx) = 0;
  virtual void exitNameofExpression(HuTaoParser::NameofExpressionContext *ctx) = 0;

  virtual void enterThrowable_expression(HuTaoParser::Throwable_expressionContext *ctx) = 0;
  virtual void exitThrowable_expression(HuTaoParser::Throwable_expressionContext *ctx) = 0;

  virtual void enterThrow_expression(HuTaoParser::Throw_expressionContext *ctx) = 0;
  virtual void exitThrow_expression(HuTaoParser::Throw_expressionContext *ctx) = 0;

  virtual void enterMember_access(HuTaoParser::Member_accessContext *ctx) = 0;
  virtual void exitMember_access(HuTaoParser::Member_accessContext *ctx) = 0;

  virtual void enterBracket_expression(HuTaoParser::Bracket_expressionContext *ctx) = 0;
  virtual void exitBracket_expression(HuTaoParser::Bracket_expressionContext *ctx) = 0;

  virtual void enterIndexer_argument(HuTaoParser::Indexer_argumentContext *ctx) = 0;
  virtual void exitIndexer_argument(HuTaoParser::Indexer_argumentContext *ctx) = 0;

  virtual void enterPredefined_type(HuTaoParser::Predefined_typeContext *ctx) = 0;
  virtual void exitPredefined_type(HuTaoParser::Predefined_typeContext *ctx) = 0;

  virtual void enterExpression_list(HuTaoParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(HuTaoParser::Expression_listContext *ctx) = 0;

  virtual void enterObject_or_collection_initializer(HuTaoParser::Object_or_collection_initializerContext *ctx) = 0;
  virtual void exitObject_or_collection_initializer(HuTaoParser::Object_or_collection_initializerContext *ctx) = 0;

  virtual void enterObject_initializer(HuTaoParser::Object_initializerContext *ctx) = 0;
  virtual void exitObject_initializer(HuTaoParser::Object_initializerContext *ctx) = 0;

  virtual void enterMember_initializer_list(HuTaoParser::Member_initializer_listContext *ctx) = 0;
  virtual void exitMember_initializer_list(HuTaoParser::Member_initializer_listContext *ctx) = 0;

  virtual void enterMember_initializer(HuTaoParser::Member_initializerContext *ctx) = 0;
  virtual void exitMember_initializer(HuTaoParser::Member_initializerContext *ctx) = 0;

  virtual void enterInitializer_value(HuTaoParser::Initializer_valueContext *ctx) = 0;
  virtual void exitInitializer_value(HuTaoParser::Initializer_valueContext *ctx) = 0;

  virtual void enterCollection_initializer(HuTaoParser::Collection_initializerContext *ctx) = 0;
  virtual void exitCollection_initializer(HuTaoParser::Collection_initializerContext *ctx) = 0;

  virtual void enterElement_initializer(HuTaoParser::Element_initializerContext *ctx) = 0;
  virtual void exitElement_initializer(HuTaoParser::Element_initializerContext *ctx) = 0;

  virtual void enterAnonymous_object_initializer(HuTaoParser::Anonymous_object_initializerContext *ctx) = 0;
  virtual void exitAnonymous_object_initializer(HuTaoParser::Anonymous_object_initializerContext *ctx) = 0;

  virtual void enterMember_declarator_list(HuTaoParser::Member_declarator_listContext *ctx) = 0;
  virtual void exitMember_declarator_list(HuTaoParser::Member_declarator_listContext *ctx) = 0;

  virtual void enterMember_declarator(HuTaoParser::Member_declaratorContext *ctx) = 0;
  virtual void exitMember_declarator(HuTaoParser::Member_declaratorContext *ctx) = 0;

  virtual void enterUnbound_type_name(HuTaoParser::Unbound_type_nameContext *ctx) = 0;
  virtual void exitUnbound_type_name(HuTaoParser::Unbound_type_nameContext *ctx) = 0;

  virtual void enterGeneric_dimension_specifier(HuTaoParser::Generic_dimension_specifierContext *ctx) = 0;
  virtual void exitGeneric_dimension_specifier(HuTaoParser::Generic_dimension_specifierContext *ctx) = 0;

  virtual void enterIsType(HuTaoParser::IsTypeContext *ctx) = 0;
  virtual void exitIsType(HuTaoParser::IsTypeContext *ctx) = 0;

  virtual void enterIsTypePatternArms(HuTaoParser::IsTypePatternArmsContext *ctx) = 0;
  virtual void exitIsTypePatternArms(HuTaoParser::IsTypePatternArmsContext *ctx) = 0;

  virtual void enterIsTypePatternArm(HuTaoParser::IsTypePatternArmContext *ctx) = 0;
  virtual void exitIsTypePatternArm(HuTaoParser::IsTypePatternArmContext *ctx) = 0;

  virtual void enterLambda_expression(HuTaoParser::Lambda_expressionContext *ctx) = 0;
  virtual void exitLambda_expression(HuTaoParser::Lambda_expressionContext *ctx) = 0;

  virtual void enterAnonymous_function_signature(HuTaoParser::Anonymous_function_signatureContext *ctx) = 0;
  virtual void exitAnonymous_function_signature(HuTaoParser::Anonymous_function_signatureContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter_list(HuTaoParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter_list(HuTaoParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter(HuTaoParser::Explicit_anonymous_function_parameterContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter(HuTaoParser::Explicit_anonymous_function_parameterContext *ctx) = 0;

  virtual void enterImplicit_anonymous_function_parameter_list(HuTaoParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitImplicit_anonymous_function_parameter_list(HuTaoParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterAnonymous_function_body(HuTaoParser::Anonymous_function_bodyContext *ctx) = 0;
  virtual void exitAnonymous_function_body(HuTaoParser::Anonymous_function_bodyContext *ctx) = 0;

  virtual void enterQuery_expression(HuTaoParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(HuTaoParser::Query_expressionContext *ctx) = 0;

  virtual void enterFrom_clause(HuTaoParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(HuTaoParser::From_clauseContext *ctx) = 0;

  virtual void enterQuery_body(HuTaoParser::Query_bodyContext *ctx) = 0;
  virtual void exitQuery_body(HuTaoParser::Query_bodyContext *ctx) = 0;

  virtual void enterQuery_body_clause(HuTaoParser::Query_body_clauseContext *ctx) = 0;
  virtual void exitQuery_body_clause(HuTaoParser::Query_body_clauseContext *ctx) = 0;

  virtual void enterLet_clause(HuTaoParser::Let_clauseContext *ctx) = 0;
  virtual void exitLet_clause(HuTaoParser::Let_clauseContext *ctx) = 0;

  virtual void enterWhere_clause(HuTaoParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(HuTaoParser::Where_clauseContext *ctx) = 0;

  virtual void enterCombined_join_clause(HuTaoParser::Combined_join_clauseContext *ctx) = 0;
  virtual void exitCombined_join_clause(HuTaoParser::Combined_join_clauseContext *ctx) = 0;

  virtual void enterOrderby_clause(HuTaoParser::Orderby_clauseContext *ctx) = 0;
  virtual void exitOrderby_clause(HuTaoParser::Orderby_clauseContext *ctx) = 0;

  virtual void enterOrdering(HuTaoParser::OrderingContext *ctx) = 0;
  virtual void exitOrdering(HuTaoParser::OrderingContext *ctx) = 0;

  virtual void enterSelect_or_group_clause(HuTaoParser::Select_or_group_clauseContext *ctx) = 0;
  virtual void exitSelect_or_group_clause(HuTaoParser::Select_or_group_clauseContext *ctx) = 0;

  virtual void enterQuery_continuation(HuTaoParser::Query_continuationContext *ctx) = 0;
  virtual void exitQuery_continuation(HuTaoParser::Query_continuationContext *ctx) = 0;

  virtual void enterStatement(HuTaoParser::StatementContext *ctx) = 0;
  virtual void exitStatement(HuTaoParser::StatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(HuTaoParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(HuTaoParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterLocal_function_declaration(HuTaoParser::Local_function_declarationContext *ctx) = 0;
  virtual void exitLocal_function_declaration(HuTaoParser::Local_function_declarationContext *ctx) = 0;

  virtual void enterLocal_function_header(HuTaoParser::Local_function_headerContext *ctx) = 0;
  virtual void exitLocal_function_header(HuTaoParser::Local_function_headerContext *ctx) = 0;

  virtual void enterLocal_function_modifiers(HuTaoParser::Local_function_modifiersContext *ctx) = 0;
  virtual void exitLocal_function_modifiers(HuTaoParser::Local_function_modifiersContext *ctx) = 0;

  virtual void enterLocal_function_body(HuTaoParser::Local_function_bodyContext *ctx) = 0;
  virtual void exitLocal_function_body(HuTaoParser::Local_function_bodyContext *ctx) = 0;

  virtual void enterLabeled_Statement(HuTaoParser::Labeled_StatementContext *ctx) = 0;
  virtual void exitLabeled_Statement(HuTaoParser::Labeled_StatementContext *ctx) = 0;

  virtual void enterEmbedded_statement(HuTaoParser::Embedded_statementContext *ctx) = 0;
  virtual void exitEmbedded_statement(HuTaoParser::Embedded_statementContext *ctx) = 0;

  virtual void enterTheEmptyStatement(HuTaoParser::TheEmptyStatementContext *ctx) = 0;
  virtual void exitTheEmptyStatement(HuTaoParser::TheEmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(HuTaoParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(HuTaoParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(HuTaoParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(HuTaoParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(HuTaoParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(HuTaoParser::SwitchStatementContext *ctx) = 0;

  virtual void enterWhileStatement(HuTaoParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(HuTaoParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoStatement(HuTaoParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(HuTaoParser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(HuTaoParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(HuTaoParser::ForStatementContext *ctx) = 0;

  virtual void enterForeachStatement(HuTaoParser::ForeachStatementContext *ctx) = 0;
  virtual void exitForeachStatement(HuTaoParser::ForeachStatementContext *ctx) = 0;

  virtual void enterBreakStatement(HuTaoParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(HuTaoParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(HuTaoParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(HuTaoParser::ContinueStatementContext *ctx) = 0;

  virtual void enterGotoStatement(HuTaoParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(HuTaoParser::GotoStatementContext *ctx) = 0;

  virtual void enterReturnStatement(HuTaoParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(HuTaoParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(HuTaoParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(HuTaoParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(HuTaoParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(HuTaoParser::TryStatementContext *ctx) = 0;

  virtual void enterCheckedStatement(HuTaoParser::CheckedStatementContext *ctx) = 0;
  virtual void exitCheckedStatement(HuTaoParser::CheckedStatementContext *ctx) = 0;

  virtual void enterUncheckedStatement(HuTaoParser::UncheckedStatementContext *ctx) = 0;
  virtual void exitUncheckedStatement(HuTaoParser::UncheckedStatementContext *ctx) = 0;

  virtual void enterLockStatement(HuTaoParser::LockStatementContext *ctx) = 0;
  virtual void exitLockStatement(HuTaoParser::LockStatementContext *ctx) = 0;

  virtual void enterUsingStatement(HuTaoParser::UsingStatementContext *ctx) = 0;
  virtual void exitUsingStatement(HuTaoParser::UsingStatementContext *ctx) = 0;

  virtual void enterYieldStatement(HuTaoParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(HuTaoParser::YieldStatementContext *ctx) = 0;

  virtual void enterUnsafeStatement(HuTaoParser::UnsafeStatementContext *ctx) = 0;
  virtual void exitUnsafeStatement(HuTaoParser::UnsafeStatementContext *ctx) = 0;

  virtual void enterFixedStatement(HuTaoParser::FixedStatementContext *ctx) = 0;
  virtual void exitFixedStatement(HuTaoParser::FixedStatementContext *ctx) = 0;

  virtual void enterBlock(HuTaoParser::BlockContext *ctx) = 0;
  virtual void exitBlock(HuTaoParser::BlockContext *ctx) = 0;

  virtual void enterLocal_variable_declaration(HuTaoParser::Local_variable_declarationContext *ctx) = 0;
  virtual void exitLocal_variable_declaration(HuTaoParser::Local_variable_declarationContext *ctx) = 0;

  virtual void enterLocal_variable_type(HuTaoParser::Local_variable_typeContext *ctx) = 0;
  virtual void exitLocal_variable_type(HuTaoParser::Local_variable_typeContext *ctx) = 0;

  virtual void enterLocal_variable_declarator(HuTaoParser::Local_variable_declaratorContext *ctx) = 0;
  virtual void exitLocal_variable_declarator(HuTaoParser::Local_variable_declaratorContext *ctx) = 0;

  virtual void enterLocal_variable_initializer(HuTaoParser::Local_variable_initializerContext *ctx) = 0;
  virtual void exitLocal_variable_initializer(HuTaoParser::Local_variable_initializerContext *ctx) = 0;

  virtual void enterLocal_constant_declaration(HuTaoParser::Local_constant_declarationContext *ctx) = 0;
  virtual void exitLocal_constant_declaration(HuTaoParser::Local_constant_declarationContext *ctx) = 0;

  virtual void enterIf_body(HuTaoParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(HuTaoParser::If_bodyContext *ctx) = 0;

  virtual void enterSwitch_section(HuTaoParser::Switch_sectionContext *ctx) = 0;
  virtual void exitSwitch_section(HuTaoParser::Switch_sectionContext *ctx) = 0;

  virtual void enterSwitch_label(HuTaoParser::Switch_labelContext *ctx) = 0;
  virtual void exitSwitch_label(HuTaoParser::Switch_labelContext *ctx) = 0;

  virtual void enterCase_guard(HuTaoParser::Case_guardContext *ctx) = 0;
  virtual void exitCase_guard(HuTaoParser::Case_guardContext *ctx) = 0;

  virtual void enterStatement_list(HuTaoParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(HuTaoParser::Statement_listContext *ctx) = 0;

  virtual void enterFor_initializer(HuTaoParser::For_initializerContext *ctx) = 0;
  virtual void exitFor_initializer(HuTaoParser::For_initializerContext *ctx) = 0;

  virtual void enterFor_iterator(HuTaoParser::For_iteratorContext *ctx) = 0;
  virtual void exitFor_iterator(HuTaoParser::For_iteratorContext *ctx) = 0;

  virtual void enterCatch_clauses(HuTaoParser::Catch_clausesContext *ctx) = 0;
  virtual void exitCatch_clauses(HuTaoParser::Catch_clausesContext *ctx) = 0;

  virtual void enterSpecific_catch_clause(HuTaoParser::Specific_catch_clauseContext *ctx) = 0;
  virtual void exitSpecific_catch_clause(HuTaoParser::Specific_catch_clauseContext *ctx) = 0;

  virtual void enterGeneral_catch_clause(HuTaoParser::General_catch_clauseContext *ctx) = 0;
  virtual void exitGeneral_catch_clause(HuTaoParser::General_catch_clauseContext *ctx) = 0;

  virtual void enterException_filter(HuTaoParser::Exception_filterContext *ctx) = 0;
  virtual void exitException_filter(HuTaoParser::Exception_filterContext *ctx) = 0;

  virtual void enterFinally_clause(HuTaoParser::Finally_clauseContext *ctx) = 0;
  virtual void exitFinally_clause(HuTaoParser::Finally_clauseContext *ctx) = 0;

  virtual void enterResource_acquisition(HuTaoParser::Resource_acquisitionContext *ctx) = 0;
  virtual void exitResource_acquisition(HuTaoParser::Resource_acquisitionContext *ctx) = 0;

  virtual void enterNamespace_declaration(HuTaoParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(HuTaoParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterQualified_identifier(HuTaoParser::Qualified_identifierContext *ctx) = 0;
  virtual void exitQualified_identifier(HuTaoParser::Qualified_identifierContext *ctx) = 0;

  virtual void enterNamespace_body(HuTaoParser::Namespace_bodyContext *ctx) = 0;
  virtual void exitNamespace_body(HuTaoParser::Namespace_bodyContext *ctx) = 0;

  virtual void enterExtern_alias_directive(HuTaoParser::Extern_alias_directiveContext *ctx) = 0;
  virtual void exitExtern_alias_directive(HuTaoParser::Extern_alias_directiveContext *ctx) = 0;

  virtual void enterUsing_directives(HuTaoParser::Using_directivesContext *ctx) = 0;
  virtual void exitUsing_directives(HuTaoParser::Using_directivesContext *ctx) = 0;

  virtual void enterUsing_directive(HuTaoParser::Using_directiveContext *ctx) = 0;
  virtual void exitUsing_directive(HuTaoParser::Using_directiveContext *ctx) = 0;

  virtual void enterNamespace_member_declarations(HuTaoParser::Namespace_member_declarationsContext *ctx) = 0;
  virtual void exitNamespace_member_declarations(HuTaoParser::Namespace_member_declarationsContext *ctx) = 0;

  virtual void enterNamespace_member_declaration(HuTaoParser::Namespace_member_declarationContext *ctx) = 0;
  virtual void exitNamespace_member_declaration(HuTaoParser::Namespace_member_declarationContext *ctx) = 0;

  virtual void enterType_declaration(HuTaoParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(HuTaoParser::Type_declarationContext *ctx) = 0;

  virtual void enterQualified_alias_member(HuTaoParser::Qualified_alias_memberContext *ctx) = 0;
  virtual void exitQualified_alias_member(HuTaoParser::Qualified_alias_memberContext *ctx) = 0;

  virtual void enterType_parameter_list(HuTaoParser::Type_parameter_listContext *ctx) = 0;
  virtual void exitType_parameter_list(HuTaoParser::Type_parameter_listContext *ctx) = 0;

  virtual void enterType_parameter(HuTaoParser::Type_parameterContext *ctx) = 0;
  virtual void exitType_parameter(HuTaoParser::Type_parameterContext *ctx) = 0;

  virtual void enterClass_base(HuTaoParser::Class_baseContext *ctx) = 0;
  virtual void exitClass_base(HuTaoParser::Class_baseContext *ctx) = 0;

  virtual void enterInterface_type_list(HuTaoParser::Interface_type_listContext *ctx) = 0;
  virtual void exitInterface_type_list(HuTaoParser::Interface_type_listContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clauses(HuTaoParser::Type_parameter_constraints_clausesContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clauses(HuTaoParser::Type_parameter_constraints_clausesContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clause(HuTaoParser::Type_parameter_constraints_clauseContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clause(HuTaoParser::Type_parameter_constraints_clauseContext *ctx) = 0;

  virtual void enterType_parameter_constraints(HuTaoParser::Type_parameter_constraintsContext *ctx) = 0;
  virtual void exitType_parameter_constraints(HuTaoParser::Type_parameter_constraintsContext *ctx) = 0;

  virtual void enterPrimary_constraint(HuTaoParser::Primary_constraintContext *ctx) = 0;
  virtual void exitPrimary_constraint(HuTaoParser::Primary_constraintContext *ctx) = 0;

  virtual void enterSecondary_constraints(HuTaoParser::Secondary_constraintsContext *ctx) = 0;
  virtual void exitSecondary_constraints(HuTaoParser::Secondary_constraintsContext *ctx) = 0;

  virtual void enterConstructor_constraint(HuTaoParser::Constructor_constraintContext *ctx) = 0;
  virtual void exitConstructor_constraint(HuTaoParser::Constructor_constraintContext *ctx) = 0;

  virtual void enterClass_body(HuTaoParser::Class_bodyContext *ctx) = 0;
  virtual void exitClass_body(HuTaoParser::Class_bodyContext *ctx) = 0;

  virtual void enterClass_member_declarations(HuTaoParser::Class_member_declarationsContext *ctx) = 0;
  virtual void exitClass_member_declarations(HuTaoParser::Class_member_declarationsContext *ctx) = 0;

  virtual void enterClass_member_declaration(HuTaoParser::Class_member_declarationContext *ctx) = 0;
  virtual void exitClass_member_declaration(HuTaoParser::Class_member_declarationContext *ctx) = 0;

  virtual void enterAll_member_modifiers(HuTaoParser::All_member_modifiersContext *ctx) = 0;
  virtual void exitAll_member_modifiers(HuTaoParser::All_member_modifiersContext *ctx) = 0;

  virtual void enterAll_member_modifier(HuTaoParser::All_member_modifierContext *ctx) = 0;
  virtual void exitAll_member_modifier(HuTaoParser::All_member_modifierContext *ctx) = 0;

  virtual void enterCommon_member_declaration(HuTaoParser::Common_member_declarationContext *ctx) = 0;
  virtual void exitCommon_member_declaration(HuTaoParser::Common_member_declarationContext *ctx) = 0;

  virtual void enterTyped_member_declaration(HuTaoParser::Typed_member_declarationContext *ctx) = 0;
  virtual void exitTyped_member_declaration(HuTaoParser::Typed_member_declarationContext *ctx) = 0;

  virtual void enterConstant_declarators(HuTaoParser::Constant_declaratorsContext *ctx) = 0;
  virtual void exitConstant_declarators(HuTaoParser::Constant_declaratorsContext *ctx) = 0;

  virtual void enterConstant_declarator(HuTaoParser::Constant_declaratorContext *ctx) = 0;
  virtual void exitConstant_declarator(HuTaoParser::Constant_declaratorContext *ctx) = 0;

  virtual void enterVariable_declarators(HuTaoParser::Variable_declaratorsContext *ctx) = 0;
  virtual void exitVariable_declarators(HuTaoParser::Variable_declaratorsContext *ctx) = 0;

  virtual void enterVariable_declarator(HuTaoParser::Variable_declaratorContext *ctx) = 0;
  virtual void exitVariable_declarator(HuTaoParser::Variable_declaratorContext *ctx) = 0;

  virtual void enterVariable_initializer(HuTaoParser::Variable_initializerContext *ctx) = 0;
  virtual void exitVariable_initializer(HuTaoParser::Variable_initializerContext *ctx) = 0;

  virtual void enterReturn_type(HuTaoParser::Return_typeContext *ctx) = 0;
  virtual void exitReturn_type(HuTaoParser::Return_typeContext *ctx) = 0;

  virtual void enterMember_name(HuTaoParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(HuTaoParser::Member_nameContext *ctx) = 0;

  virtual void enterMethod_body(HuTaoParser::Method_bodyContext *ctx) = 0;
  virtual void exitMethod_body(HuTaoParser::Method_bodyContext *ctx) = 0;

  virtual void enterFormal_parameter_list(HuTaoParser::Formal_parameter_listContext *ctx) = 0;
  virtual void exitFormal_parameter_list(HuTaoParser::Formal_parameter_listContext *ctx) = 0;

  virtual void enterFixed_parameters(HuTaoParser::Fixed_parametersContext *ctx) = 0;
  virtual void exitFixed_parameters(HuTaoParser::Fixed_parametersContext *ctx) = 0;

  virtual void enterFixed_parameter(HuTaoParser::Fixed_parameterContext *ctx) = 0;
  virtual void exitFixed_parameter(HuTaoParser::Fixed_parameterContext *ctx) = 0;

  virtual void enterParameter_modifier(HuTaoParser::Parameter_modifierContext *ctx) = 0;
  virtual void exitParameter_modifier(HuTaoParser::Parameter_modifierContext *ctx) = 0;

  virtual void enterParameter_array(HuTaoParser::Parameter_arrayContext *ctx) = 0;
  virtual void exitParameter_array(HuTaoParser::Parameter_arrayContext *ctx) = 0;

  virtual void enterAccessor_declarations(HuTaoParser::Accessor_declarationsContext *ctx) = 0;
  virtual void exitAccessor_declarations(HuTaoParser::Accessor_declarationsContext *ctx) = 0;

  virtual void enterGet_accessor_declaration(HuTaoParser::Get_accessor_declarationContext *ctx) = 0;
  virtual void exitGet_accessor_declaration(HuTaoParser::Get_accessor_declarationContext *ctx) = 0;

  virtual void enterSet_accessor_declaration(HuTaoParser::Set_accessor_declarationContext *ctx) = 0;
  virtual void exitSet_accessor_declaration(HuTaoParser::Set_accessor_declarationContext *ctx) = 0;

  virtual void enterAccessor_modifier(HuTaoParser::Accessor_modifierContext *ctx) = 0;
  virtual void exitAccessor_modifier(HuTaoParser::Accessor_modifierContext *ctx) = 0;

  virtual void enterAccessor_body(HuTaoParser::Accessor_bodyContext *ctx) = 0;
  virtual void exitAccessor_body(HuTaoParser::Accessor_bodyContext *ctx) = 0;

  virtual void enterEvent_accessor_declarations(HuTaoParser::Event_accessor_declarationsContext *ctx) = 0;
  virtual void exitEvent_accessor_declarations(HuTaoParser::Event_accessor_declarationsContext *ctx) = 0;

  virtual void enterAdd_accessor_declaration(HuTaoParser::Add_accessor_declarationContext *ctx) = 0;
  virtual void exitAdd_accessor_declaration(HuTaoParser::Add_accessor_declarationContext *ctx) = 0;

  virtual void enterRemove_accessor_declaration(HuTaoParser::Remove_accessor_declarationContext *ctx) = 0;
  virtual void exitRemove_accessor_declaration(HuTaoParser::Remove_accessor_declarationContext *ctx) = 0;

  virtual void enterOverloadable_operator(HuTaoParser::Overloadable_operatorContext *ctx) = 0;
  virtual void exitOverloadable_operator(HuTaoParser::Overloadable_operatorContext *ctx) = 0;

  virtual void enterConversion_operator_declarator(HuTaoParser::Conversion_operator_declaratorContext *ctx) = 0;
  virtual void exitConversion_operator_declarator(HuTaoParser::Conversion_operator_declaratorContext *ctx) = 0;

  virtual void enterConstructor_initializer(HuTaoParser::Constructor_initializerContext *ctx) = 0;
  virtual void exitConstructor_initializer(HuTaoParser::Constructor_initializerContext *ctx) = 0;

  virtual void enterBody(HuTaoParser::BodyContext *ctx) = 0;
  virtual void exitBody(HuTaoParser::BodyContext *ctx) = 0;

  virtual void enterStruct_interfaces(HuTaoParser::Struct_interfacesContext *ctx) = 0;
  virtual void exitStruct_interfaces(HuTaoParser::Struct_interfacesContext *ctx) = 0;

  virtual void enterStruct_body(HuTaoParser::Struct_bodyContext *ctx) = 0;
  virtual void exitStruct_body(HuTaoParser::Struct_bodyContext *ctx) = 0;

  virtual void enterStruct_member_declaration(HuTaoParser::Struct_member_declarationContext *ctx) = 0;
  virtual void exitStruct_member_declaration(HuTaoParser::Struct_member_declarationContext *ctx) = 0;

  virtual void enterArray_type(HuTaoParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(HuTaoParser::Array_typeContext *ctx) = 0;

  virtual void enterRank_specifier(HuTaoParser::Rank_specifierContext *ctx) = 0;
  virtual void exitRank_specifier(HuTaoParser::Rank_specifierContext *ctx) = 0;

  virtual void enterArray_initializer(HuTaoParser::Array_initializerContext *ctx) = 0;
  virtual void exitArray_initializer(HuTaoParser::Array_initializerContext *ctx) = 0;

  virtual void enterVariant_type_parameter_list(HuTaoParser::Variant_type_parameter_listContext *ctx) = 0;
  virtual void exitVariant_type_parameter_list(HuTaoParser::Variant_type_parameter_listContext *ctx) = 0;

  virtual void enterVariant_type_parameter(HuTaoParser::Variant_type_parameterContext *ctx) = 0;
  virtual void exitVariant_type_parameter(HuTaoParser::Variant_type_parameterContext *ctx) = 0;

  virtual void enterVariance_annotation(HuTaoParser::Variance_annotationContext *ctx) = 0;
  virtual void exitVariance_annotation(HuTaoParser::Variance_annotationContext *ctx) = 0;

  virtual void enterInterface_base(HuTaoParser::Interface_baseContext *ctx) = 0;
  virtual void exitInterface_base(HuTaoParser::Interface_baseContext *ctx) = 0;

  virtual void enterInterface_body(HuTaoParser::Interface_bodyContext *ctx) = 0;
  virtual void exitInterface_body(HuTaoParser::Interface_bodyContext *ctx) = 0;

  virtual void enterInterface_member_declaration(HuTaoParser::Interface_member_declarationContext *ctx) = 0;
  virtual void exitInterface_member_declaration(HuTaoParser::Interface_member_declarationContext *ctx) = 0;

  virtual void enterInterface_accessors(HuTaoParser::Interface_accessorsContext *ctx) = 0;
  virtual void exitInterface_accessors(HuTaoParser::Interface_accessorsContext *ctx) = 0;

  virtual void enterEnum_base(HuTaoParser::Enum_baseContext *ctx) = 0;
  virtual void exitEnum_base(HuTaoParser::Enum_baseContext *ctx) = 0;

  virtual void enterEnum_body(HuTaoParser::Enum_bodyContext *ctx) = 0;
  virtual void exitEnum_body(HuTaoParser::Enum_bodyContext *ctx) = 0;

  virtual void enterEnum_member_declaration(HuTaoParser::Enum_member_declarationContext *ctx) = 0;
  virtual void exitEnum_member_declaration(HuTaoParser::Enum_member_declarationContext *ctx) = 0;

  virtual void enterGlobal_attribute_section(HuTaoParser::Global_attribute_sectionContext *ctx) = 0;
  virtual void exitGlobal_attribute_section(HuTaoParser::Global_attribute_sectionContext *ctx) = 0;

  virtual void enterGlobal_attribute_target(HuTaoParser::Global_attribute_targetContext *ctx) = 0;
  virtual void exitGlobal_attribute_target(HuTaoParser::Global_attribute_targetContext *ctx) = 0;

  virtual void enterAttributes(HuTaoParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(HuTaoParser::AttributesContext *ctx) = 0;

  virtual void enterAttribute_section(HuTaoParser::Attribute_sectionContext *ctx) = 0;
  virtual void exitAttribute_section(HuTaoParser::Attribute_sectionContext *ctx) = 0;

  virtual void enterAttribute_target(HuTaoParser::Attribute_targetContext *ctx) = 0;
  virtual void exitAttribute_target(HuTaoParser::Attribute_targetContext *ctx) = 0;

  virtual void enterAttribute_list(HuTaoParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(HuTaoParser::Attribute_listContext *ctx) = 0;

  virtual void enterAttribute(HuTaoParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(HuTaoParser::AttributeContext *ctx) = 0;

  virtual void enterAttribute_argument(HuTaoParser::Attribute_argumentContext *ctx) = 0;
  virtual void exitAttribute_argument(HuTaoParser::Attribute_argumentContext *ctx) = 0;

  virtual void enterPointer_type(HuTaoParser::Pointer_typeContext *ctx) = 0;
  virtual void exitPointer_type(HuTaoParser::Pointer_typeContext *ctx) = 0;

  virtual void enterFixed_pointer_declarators(HuTaoParser::Fixed_pointer_declaratorsContext *ctx) = 0;
  virtual void exitFixed_pointer_declarators(HuTaoParser::Fixed_pointer_declaratorsContext *ctx) = 0;

  virtual void enterFixed_pointer_declarator(HuTaoParser::Fixed_pointer_declaratorContext *ctx) = 0;
  virtual void exitFixed_pointer_declarator(HuTaoParser::Fixed_pointer_declaratorContext *ctx) = 0;

  virtual void enterFixed_pointer_initializer(HuTaoParser::Fixed_pointer_initializerContext *ctx) = 0;
  virtual void exitFixed_pointer_initializer(HuTaoParser::Fixed_pointer_initializerContext *ctx) = 0;

  virtual void enterFixed_size_buffer_declarator(HuTaoParser::Fixed_size_buffer_declaratorContext *ctx) = 0;
  virtual void exitFixed_size_buffer_declarator(HuTaoParser::Fixed_size_buffer_declaratorContext *ctx) = 0;

  virtual void enterStackalloc_initializer(HuTaoParser::Stackalloc_initializerContext *ctx) = 0;
  virtual void exitStackalloc_initializer(HuTaoParser::Stackalloc_initializerContext *ctx) = 0;

  virtual void enterRight_arrow(HuTaoParser::Right_arrowContext *ctx) = 0;
  virtual void exitRight_arrow(HuTaoParser::Right_arrowContext *ctx) = 0;

  virtual void enterRight_shift(HuTaoParser::Right_shiftContext *ctx) = 0;
  virtual void exitRight_shift(HuTaoParser::Right_shiftContext *ctx) = 0;

  virtual void enterRight_shift_assignment(HuTaoParser::Right_shift_assignmentContext *ctx) = 0;
  virtual void exitRight_shift_assignment(HuTaoParser::Right_shift_assignmentContext *ctx) = 0;

  virtual void enterLiteral(HuTaoParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(HuTaoParser::LiteralContext *ctx) = 0;

  virtual void enterBoolean_literal(HuTaoParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(HuTaoParser::Boolean_literalContext *ctx) = 0;

  virtual void enterString_literal(HuTaoParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(HuTaoParser::String_literalContext *ctx) = 0;

  virtual void enterKeyword(HuTaoParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(HuTaoParser::KeywordContext *ctx) = 0;

  virtual void enterClass_definition(HuTaoParser::Class_definitionContext *ctx) = 0;
  virtual void exitClass_definition(HuTaoParser::Class_definitionContext *ctx) = 0;

  virtual void enterStruct_definition(HuTaoParser::Struct_definitionContext *ctx) = 0;
  virtual void exitStruct_definition(HuTaoParser::Struct_definitionContext *ctx) = 0;

  virtual void enterInterface_definition(HuTaoParser::Interface_definitionContext *ctx) = 0;
  virtual void exitInterface_definition(HuTaoParser::Interface_definitionContext *ctx) = 0;

  virtual void enterEnum_definition(HuTaoParser::Enum_definitionContext *ctx) = 0;
  virtual void exitEnum_definition(HuTaoParser::Enum_definitionContext *ctx) = 0;

  virtual void enterDelegate_definition(HuTaoParser::Delegate_definitionContext *ctx) = 0;
  virtual void exitDelegate_definition(HuTaoParser::Delegate_definitionContext *ctx) = 0;

  virtual void enterEvent_declaration(HuTaoParser::Event_declarationContext *ctx) = 0;
  virtual void exitEvent_declaration(HuTaoParser::Event_declarationContext *ctx) = 0;

  virtual void enterField_declaration(HuTaoParser::Field_declarationContext *ctx) = 0;
  virtual void exitField_declaration(HuTaoParser::Field_declarationContext *ctx) = 0;

  virtual void enterProperty_declaration(HuTaoParser::Property_declarationContext *ctx) = 0;
  virtual void exitProperty_declaration(HuTaoParser::Property_declarationContext *ctx) = 0;

  virtual void enterConstant_declaration(HuTaoParser::Constant_declarationContext *ctx) = 0;
  virtual void exitConstant_declaration(HuTaoParser::Constant_declarationContext *ctx) = 0;

  virtual void enterIndexer_declaration(HuTaoParser::Indexer_declarationContext *ctx) = 0;
  virtual void exitIndexer_declaration(HuTaoParser::Indexer_declarationContext *ctx) = 0;

  virtual void enterDestructor_definition(HuTaoParser::Destructor_definitionContext *ctx) = 0;
  virtual void exitDestructor_definition(HuTaoParser::Destructor_definitionContext *ctx) = 0;

  virtual void enterConstructor_declaration(HuTaoParser::Constructor_declarationContext *ctx) = 0;
  virtual void exitConstructor_declaration(HuTaoParser::Constructor_declarationContext *ctx) = 0;

  virtual void enterMethod_declaration(HuTaoParser::Method_declarationContext *ctx) = 0;
  virtual void exitMethod_declaration(HuTaoParser::Method_declarationContext *ctx) = 0;

  virtual void enterMethod_member_name(HuTaoParser::Method_member_nameContext *ctx) = 0;
  virtual void exitMethod_member_name(HuTaoParser::Method_member_nameContext *ctx) = 0;

  virtual void enterOperator_declaration(HuTaoParser::Operator_declarationContext *ctx) = 0;
  virtual void exitOperator_declaration(HuTaoParser::Operator_declarationContext *ctx) = 0;

  virtual void enterArg_declaration(HuTaoParser::Arg_declarationContext *ctx) = 0;
  virtual void exitArg_declaration(HuTaoParser::Arg_declarationContext *ctx) = 0;

  virtual void enterMethod_invocation(HuTaoParser::Method_invocationContext *ctx) = 0;
  virtual void exitMethod_invocation(HuTaoParser::Method_invocationContext *ctx) = 0;

  virtual void enterObject_creation_expression(HuTaoParser::Object_creation_expressionContext *ctx) = 0;
  virtual void exitObject_creation_expression(HuTaoParser::Object_creation_expressionContext *ctx) = 0;

  virtual void enterIdentifier(HuTaoParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(HuTaoParser::IdentifierContext *ctx) = 0;


};

