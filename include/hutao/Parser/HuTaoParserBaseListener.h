
// Generated from HuTaoParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include <hutao/Parser/HuTaoParserListener.h>


/**
 * This class provides an empty implementation of HuTaoParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HuTaoParserBaseListener : public HuTaoParserListener {
public:

  virtual void enterCompilation_unit(HuTaoParser::Compilation_unitContext * /*ctx*/) override { }
  virtual void exitCompilation_unit(HuTaoParser::Compilation_unitContext * /*ctx*/) override { }

  virtual void enterNamespace_or_type_name(HuTaoParser::Namespace_or_type_nameContext * /*ctx*/) override { }
  virtual void exitNamespace_or_type_name(HuTaoParser::Namespace_or_type_nameContext * /*ctx*/) override { }

  virtual void enterType_(HuTaoParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(HuTaoParser::Type_Context * /*ctx*/) override { }

  virtual void enterBase_type(HuTaoParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(HuTaoParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterTuple_type(HuTaoParser::Tuple_typeContext * /*ctx*/) override { }
  virtual void exitTuple_type(HuTaoParser::Tuple_typeContext * /*ctx*/) override { }

  virtual void enterTuple_element(HuTaoParser::Tuple_elementContext * /*ctx*/) override { }
  virtual void exitTuple_element(HuTaoParser::Tuple_elementContext * /*ctx*/) override { }

  virtual void enterSimple_type(HuTaoParser::Simple_typeContext * /*ctx*/) override { }
  virtual void exitSimple_type(HuTaoParser::Simple_typeContext * /*ctx*/) override { }

  virtual void enterNumeric_type(HuTaoParser::Numeric_typeContext * /*ctx*/) override { }
  virtual void exitNumeric_type(HuTaoParser::Numeric_typeContext * /*ctx*/) override { }

  virtual void enterIntegral_type(HuTaoParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(HuTaoParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterFloating_point_type(HuTaoParser::Floating_point_typeContext * /*ctx*/) override { }
  virtual void exitFloating_point_type(HuTaoParser::Floating_point_typeContext * /*ctx*/) override { }

  virtual void enterClass_type(HuTaoParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(HuTaoParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterType_argument_list(HuTaoParser::Type_argument_listContext * /*ctx*/) override { }
  virtual void exitType_argument_list(HuTaoParser::Type_argument_listContext * /*ctx*/) override { }

  virtual void enterArgument_list(HuTaoParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(HuTaoParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterArgument(HuTaoParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(HuTaoParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpression(HuTaoParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(HuTaoParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNon_assignment_expression(HuTaoParser::Non_assignment_expressionContext * /*ctx*/) override { }
  virtual void exitNon_assignment_expression(HuTaoParser::Non_assignment_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment(HuTaoParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(HuTaoParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(HuTaoParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(HuTaoParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(HuTaoParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(HuTaoParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterNull_coalescing_expression(HuTaoParser::Null_coalescing_expressionContext * /*ctx*/) override { }
  virtual void exitNull_coalescing_expression(HuTaoParser::Null_coalescing_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_or_expression(HuTaoParser::Conditional_or_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_or_expression(HuTaoParser::Conditional_or_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_and_expression(HuTaoParser::Conditional_and_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_and_expression(HuTaoParser::Conditional_and_expressionContext * /*ctx*/) override { }

  virtual void enterInclusive_or_expression(HuTaoParser::Inclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitInclusive_or_expression(HuTaoParser::Inclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterExclusive_or_expression(HuTaoParser::Exclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitExclusive_or_expression(HuTaoParser::Exclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(HuTaoParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(HuTaoParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(HuTaoParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(HuTaoParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(HuTaoParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(HuTaoParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterShift_expression(HuTaoParser::Shift_expressionContext * /*ctx*/) override { }
  virtual void exitShift_expression(HuTaoParser::Shift_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(HuTaoParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(HuTaoParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(HuTaoParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(HuTaoParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression(HuTaoParser::Switch_expressionContext * /*ctx*/) override { }
  virtual void exitSwitch_expression(HuTaoParser::Switch_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arms(HuTaoParser::Switch_expression_armsContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arms(HuTaoParser::Switch_expression_armsContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arm(HuTaoParser::Switch_expression_armContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arm(HuTaoParser::Switch_expression_armContext * /*ctx*/) override { }

  virtual void enterRange_expression(HuTaoParser::Range_expressionContext * /*ctx*/) override { }
  virtual void exitRange_expression(HuTaoParser::Range_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(HuTaoParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(HuTaoParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(HuTaoParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(HuTaoParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(HuTaoParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(HuTaoParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleNameExpression(HuTaoParser::SimpleNameExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleNameExpression(HuTaoParser::SimpleNameExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesisExpressions(HuTaoParser::ParenthesisExpressionsContext * /*ctx*/) override { }
  virtual void exitParenthesisExpressions(HuTaoParser::ParenthesisExpressionsContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpression(HuTaoParser::MemberAccessExpressionContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpression(HuTaoParser::MemberAccessExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralAccessExpression(HuTaoParser::LiteralAccessExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralAccessExpression(HuTaoParser::LiteralAccessExpressionContext * /*ctx*/) override { }

  virtual void enterThisReferenceExpression(HuTaoParser::ThisReferenceExpressionContext * /*ctx*/) override { }
  virtual void exitThisReferenceExpression(HuTaoParser::ThisReferenceExpressionContext * /*ctx*/) override { }

  virtual void enterBaseAccessExpression(HuTaoParser::BaseAccessExpressionContext * /*ctx*/) override { }
  virtual void exitBaseAccessExpression(HuTaoParser::BaseAccessExpressionContext * /*ctx*/) override { }

  virtual void enterObjectCreationExpression(HuTaoParser::ObjectCreationExpressionContext * /*ctx*/) override { }
  virtual void exitObjectCreationExpression(HuTaoParser::ObjectCreationExpressionContext * /*ctx*/) override { }

  virtual void enterTupleExpression(HuTaoParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(HuTaoParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(HuTaoParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(HuTaoParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterCheckedExpression(HuTaoParser::CheckedExpressionContext * /*ctx*/) override { }
  virtual void exitCheckedExpression(HuTaoParser::CheckedExpressionContext * /*ctx*/) override { }

  virtual void enterUncheckedExpression(HuTaoParser::UncheckedExpressionContext * /*ctx*/) override { }
  virtual void exitUncheckedExpression(HuTaoParser::UncheckedExpressionContext * /*ctx*/) override { }

  virtual void enterDefaultValueExpression(HuTaoParser::DefaultValueExpressionContext * /*ctx*/) override { }
  virtual void exitDefaultValueExpression(HuTaoParser::DefaultValueExpressionContext * /*ctx*/) override { }

  virtual void enterAnonymousMethodExpression(HuTaoParser::AnonymousMethodExpressionContext * /*ctx*/) override { }
  virtual void exitAnonymousMethodExpression(HuTaoParser::AnonymousMethodExpressionContext * /*ctx*/) override { }

  virtual void enterSizeofExpression(HuTaoParser::SizeofExpressionContext * /*ctx*/) override { }
  virtual void exitSizeofExpression(HuTaoParser::SizeofExpressionContext * /*ctx*/) override { }

  virtual void enterNameofExpression(HuTaoParser::NameofExpressionContext * /*ctx*/) override { }
  virtual void exitNameofExpression(HuTaoParser::NameofExpressionContext * /*ctx*/) override { }

  virtual void enterThrowable_expression(HuTaoParser::Throwable_expressionContext * /*ctx*/) override { }
  virtual void exitThrowable_expression(HuTaoParser::Throwable_expressionContext * /*ctx*/) override { }

  virtual void enterThrow_expression(HuTaoParser::Throw_expressionContext * /*ctx*/) override { }
  virtual void exitThrow_expression(HuTaoParser::Throw_expressionContext * /*ctx*/) override { }

  virtual void enterMember_access(HuTaoParser::Member_accessContext * /*ctx*/) override { }
  virtual void exitMember_access(HuTaoParser::Member_accessContext * /*ctx*/) override { }

  virtual void enterBracket_expression(HuTaoParser::Bracket_expressionContext * /*ctx*/) override { }
  virtual void exitBracket_expression(HuTaoParser::Bracket_expressionContext * /*ctx*/) override { }

  virtual void enterIndexer_argument(HuTaoParser::Indexer_argumentContext * /*ctx*/) override { }
  virtual void exitIndexer_argument(HuTaoParser::Indexer_argumentContext * /*ctx*/) override { }

  virtual void enterPredefined_type(HuTaoParser::Predefined_typeContext * /*ctx*/) override { }
  virtual void exitPredefined_type(HuTaoParser::Predefined_typeContext * /*ctx*/) override { }

  virtual void enterExpression_list(HuTaoParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(HuTaoParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterObject_or_collection_initializer(HuTaoParser::Object_or_collection_initializerContext * /*ctx*/) override { }
  virtual void exitObject_or_collection_initializer(HuTaoParser::Object_or_collection_initializerContext * /*ctx*/) override { }

  virtual void enterObject_initializer(HuTaoParser::Object_initializerContext * /*ctx*/) override { }
  virtual void exitObject_initializer(HuTaoParser::Object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_initializer_list(HuTaoParser::Member_initializer_listContext * /*ctx*/) override { }
  virtual void exitMember_initializer_list(HuTaoParser::Member_initializer_listContext * /*ctx*/) override { }

  virtual void enterMember_initializer(HuTaoParser::Member_initializerContext * /*ctx*/) override { }
  virtual void exitMember_initializer(HuTaoParser::Member_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer_value(HuTaoParser::Initializer_valueContext * /*ctx*/) override { }
  virtual void exitInitializer_value(HuTaoParser::Initializer_valueContext * /*ctx*/) override { }

  virtual void enterCollection_initializer(HuTaoParser::Collection_initializerContext * /*ctx*/) override { }
  virtual void exitCollection_initializer(HuTaoParser::Collection_initializerContext * /*ctx*/) override { }

  virtual void enterElement_initializer(HuTaoParser::Element_initializerContext * /*ctx*/) override { }
  virtual void exitElement_initializer(HuTaoParser::Element_initializerContext * /*ctx*/) override { }

  virtual void enterAnonymous_object_initializer(HuTaoParser::Anonymous_object_initializerContext * /*ctx*/) override { }
  virtual void exitAnonymous_object_initializer(HuTaoParser::Anonymous_object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_declarator_list(HuTaoParser::Member_declarator_listContext * /*ctx*/) override { }
  virtual void exitMember_declarator_list(HuTaoParser::Member_declarator_listContext * /*ctx*/) override { }

  virtual void enterMember_declarator(HuTaoParser::Member_declaratorContext * /*ctx*/) override { }
  virtual void exitMember_declarator(HuTaoParser::Member_declaratorContext * /*ctx*/) override { }

  virtual void enterUnbound_type_name(HuTaoParser::Unbound_type_nameContext * /*ctx*/) override { }
  virtual void exitUnbound_type_name(HuTaoParser::Unbound_type_nameContext * /*ctx*/) override { }

  virtual void enterGeneric_dimension_specifier(HuTaoParser::Generic_dimension_specifierContext * /*ctx*/) override { }
  virtual void exitGeneric_dimension_specifier(HuTaoParser::Generic_dimension_specifierContext * /*ctx*/) override { }

  virtual void enterIsType(HuTaoParser::IsTypeContext * /*ctx*/) override { }
  virtual void exitIsType(HuTaoParser::IsTypeContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArms(HuTaoParser::IsTypePatternArmsContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArms(HuTaoParser::IsTypePatternArmsContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArm(HuTaoParser::IsTypePatternArmContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArm(HuTaoParser::IsTypePatternArmContext * /*ctx*/) override { }

  virtual void enterLambda_expression(HuTaoParser::Lambda_expressionContext * /*ctx*/) override { }
  virtual void exitLambda_expression(HuTaoParser::Lambda_expressionContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_signature(HuTaoParser::Anonymous_function_signatureContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_signature(HuTaoParser::Anonymous_function_signatureContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter_list(HuTaoParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter_list(HuTaoParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter(HuTaoParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter(HuTaoParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }

  virtual void enterImplicit_anonymous_function_parameter_list(HuTaoParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitImplicit_anonymous_function_parameter_list(HuTaoParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_body(HuTaoParser::Anonymous_function_bodyContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_body(HuTaoParser::Anonymous_function_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_expression(HuTaoParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(HuTaoParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterFrom_clause(HuTaoParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(HuTaoParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_body(HuTaoParser::Query_bodyContext * /*ctx*/) override { }
  virtual void exitQuery_body(HuTaoParser::Query_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_body_clause(HuTaoParser::Query_body_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_body_clause(HuTaoParser::Query_body_clauseContext * /*ctx*/) override { }

  virtual void enterLet_clause(HuTaoParser::Let_clauseContext * /*ctx*/) override { }
  virtual void exitLet_clause(HuTaoParser::Let_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_clause(HuTaoParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(HuTaoParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterCombined_join_clause(HuTaoParser::Combined_join_clauseContext * /*ctx*/) override { }
  virtual void exitCombined_join_clause(HuTaoParser::Combined_join_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_clause(HuTaoParser::Orderby_clauseContext * /*ctx*/) override { }
  virtual void exitOrderby_clause(HuTaoParser::Orderby_clauseContext * /*ctx*/) override { }

  virtual void enterOrdering(HuTaoParser::OrderingContext * /*ctx*/) override { }
  virtual void exitOrdering(HuTaoParser::OrderingContext * /*ctx*/) override { }

  virtual void enterSelect_or_group_clause(HuTaoParser::Select_or_group_clauseContext * /*ctx*/) override { }
  virtual void exitSelect_or_group_clause(HuTaoParser::Select_or_group_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_continuation(HuTaoParser::Query_continuationContext * /*ctx*/) override { }
  virtual void exitQuery_continuation(HuTaoParser::Query_continuationContext * /*ctx*/) override { }

  virtual void enterStatement(HuTaoParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(HuTaoParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(HuTaoParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(HuTaoParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocal_function_declaration(HuTaoParser::Local_function_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_function_declaration(HuTaoParser::Local_function_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_function_header(HuTaoParser::Local_function_headerContext * /*ctx*/) override { }
  virtual void exitLocal_function_header(HuTaoParser::Local_function_headerContext * /*ctx*/) override { }

  virtual void enterLocal_function_modifiers(HuTaoParser::Local_function_modifiersContext * /*ctx*/) override { }
  virtual void exitLocal_function_modifiers(HuTaoParser::Local_function_modifiersContext * /*ctx*/) override { }

  virtual void enterLocal_function_body(HuTaoParser::Local_function_bodyContext * /*ctx*/) override { }
  virtual void exitLocal_function_body(HuTaoParser::Local_function_bodyContext * /*ctx*/) override { }

  virtual void enterLabeled_Statement(HuTaoParser::Labeled_StatementContext * /*ctx*/) override { }
  virtual void exitLabeled_Statement(HuTaoParser::Labeled_StatementContext * /*ctx*/) override { }

  virtual void enterEmbedded_statement(HuTaoParser::Embedded_statementContext * /*ctx*/) override { }
  virtual void exitEmbedded_statement(HuTaoParser::Embedded_statementContext * /*ctx*/) override { }

  virtual void enterTheEmptyStatement(HuTaoParser::TheEmptyStatementContext * /*ctx*/) override { }
  virtual void exitTheEmptyStatement(HuTaoParser::TheEmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(HuTaoParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(HuTaoParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(HuTaoParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(HuTaoParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(HuTaoParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(HuTaoParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(HuTaoParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(HuTaoParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(HuTaoParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(HuTaoParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(HuTaoParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(HuTaoParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForeachStatement(HuTaoParser::ForeachStatementContext * /*ctx*/) override { }
  virtual void exitForeachStatement(HuTaoParser::ForeachStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(HuTaoParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(HuTaoParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(HuTaoParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(HuTaoParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(HuTaoParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(HuTaoParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(HuTaoParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(HuTaoParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(HuTaoParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(HuTaoParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(HuTaoParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(HuTaoParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCheckedStatement(HuTaoParser::CheckedStatementContext * /*ctx*/) override { }
  virtual void exitCheckedStatement(HuTaoParser::CheckedStatementContext * /*ctx*/) override { }

  virtual void enterUncheckedStatement(HuTaoParser::UncheckedStatementContext * /*ctx*/) override { }
  virtual void exitUncheckedStatement(HuTaoParser::UncheckedStatementContext * /*ctx*/) override { }

  virtual void enterLockStatement(HuTaoParser::LockStatementContext * /*ctx*/) override { }
  virtual void exitLockStatement(HuTaoParser::LockStatementContext * /*ctx*/) override { }

  virtual void enterUsingStatement(HuTaoParser::UsingStatementContext * /*ctx*/) override { }
  virtual void exitUsingStatement(HuTaoParser::UsingStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(HuTaoParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(HuTaoParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterUnsafeStatement(HuTaoParser::UnsafeStatementContext * /*ctx*/) override { }
  virtual void exitUnsafeStatement(HuTaoParser::UnsafeStatementContext * /*ctx*/) override { }

  virtual void enterFixedStatement(HuTaoParser::FixedStatementContext * /*ctx*/) override { }
  virtual void exitFixedStatement(HuTaoParser::FixedStatementContext * /*ctx*/) override { }

  virtual void enterBlock(HuTaoParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(HuTaoParser::BlockContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declaration(HuTaoParser::Local_variable_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declaration(HuTaoParser::Local_variable_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_variable_type(HuTaoParser::Local_variable_typeContext * /*ctx*/) override { }
  virtual void exitLocal_variable_type(HuTaoParser::Local_variable_typeContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declarator(HuTaoParser::Local_variable_declaratorContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declarator(HuTaoParser::Local_variable_declaratorContext * /*ctx*/) override { }

  virtual void enterLocal_variable_initializer(HuTaoParser::Local_variable_initializerContext * /*ctx*/) override { }
  virtual void exitLocal_variable_initializer(HuTaoParser::Local_variable_initializerContext * /*ctx*/) override { }

  virtual void enterLocal_constant_declaration(HuTaoParser::Local_constant_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_constant_declaration(HuTaoParser::Local_constant_declarationContext * /*ctx*/) override { }

  virtual void enterIf_body(HuTaoParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(HuTaoParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterSwitch_section(HuTaoParser::Switch_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_section(HuTaoParser::Switch_sectionContext * /*ctx*/) override { }

  virtual void enterSwitch_label(HuTaoParser::Switch_labelContext * /*ctx*/) override { }
  virtual void exitSwitch_label(HuTaoParser::Switch_labelContext * /*ctx*/) override { }

  virtual void enterCase_guard(HuTaoParser::Case_guardContext * /*ctx*/) override { }
  virtual void exitCase_guard(HuTaoParser::Case_guardContext * /*ctx*/) override { }

  virtual void enterStatement_list(HuTaoParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(HuTaoParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterFor_initializer(HuTaoParser::For_initializerContext * /*ctx*/) override { }
  virtual void exitFor_initializer(HuTaoParser::For_initializerContext * /*ctx*/) override { }

  virtual void enterFor_iterator(HuTaoParser::For_iteratorContext * /*ctx*/) override { }
  virtual void exitFor_iterator(HuTaoParser::For_iteratorContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(HuTaoParser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(HuTaoParser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterSpecific_catch_clause(HuTaoParser::Specific_catch_clauseContext * /*ctx*/) override { }
  virtual void exitSpecific_catch_clause(HuTaoParser::Specific_catch_clauseContext * /*ctx*/) override { }

  virtual void enterGeneral_catch_clause(HuTaoParser::General_catch_clauseContext * /*ctx*/) override { }
  virtual void exitGeneral_catch_clause(HuTaoParser::General_catch_clauseContext * /*ctx*/) override { }

  virtual void enterException_filter(HuTaoParser::Exception_filterContext * /*ctx*/) override { }
  virtual void exitException_filter(HuTaoParser::Exception_filterContext * /*ctx*/) override { }

  virtual void enterFinally_clause(HuTaoParser::Finally_clauseContext * /*ctx*/) override { }
  virtual void exitFinally_clause(HuTaoParser::Finally_clauseContext * /*ctx*/) override { }

  virtual void enterResource_acquisition(HuTaoParser::Resource_acquisitionContext * /*ctx*/) override { }
  virtual void exitResource_acquisition(HuTaoParser::Resource_acquisitionContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(HuTaoParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(HuTaoParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_identifier(HuTaoParser::Qualified_identifierContext * /*ctx*/) override { }
  virtual void exitQualified_identifier(HuTaoParser::Qualified_identifierContext * /*ctx*/) override { }

  virtual void enterNamespace_body(HuTaoParser::Namespace_bodyContext * /*ctx*/) override { }
  virtual void exitNamespace_body(HuTaoParser::Namespace_bodyContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directive(HuTaoParser::Extern_alias_directiveContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directive(HuTaoParser::Extern_alias_directiveContext * /*ctx*/) override { }

  virtual void enterUsing_directives(HuTaoParser::Using_directivesContext * /*ctx*/) override { }
  virtual void exitUsing_directives(HuTaoParser::Using_directivesContext * /*ctx*/) override { }

  virtual void enterUsing_directive(HuTaoParser::Using_directiveContext * /*ctx*/) override { }
  virtual void exitUsing_directive(HuTaoParser::Using_directiveContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declarations(HuTaoParser::Namespace_member_declarationsContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declarations(HuTaoParser::Namespace_member_declarationsContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declaration(HuTaoParser::Namespace_member_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declaration(HuTaoParser::Namespace_member_declarationContext * /*ctx*/) override { }

  virtual void enterType_declaration(HuTaoParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(HuTaoParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_alias_member(HuTaoParser::Qualified_alias_memberContext * /*ctx*/) override { }
  virtual void exitQualified_alias_member(HuTaoParser::Qualified_alias_memberContext * /*ctx*/) override { }

  virtual void enterType_parameter_list(HuTaoParser::Type_parameter_listContext * /*ctx*/) override { }
  virtual void exitType_parameter_list(HuTaoParser::Type_parameter_listContext * /*ctx*/) override { }

  virtual void enterType_parameter(HuTaoParser::Type_parameterContext * /*ctx*/) override { }
  virtual void exitType_parameter(HuTaoParser::Type_parameterContext * /*ctx*/) override { }

  virtual void enterClass_base(HuTaoParser::Class_baseContext * /*ctx*/) override { }
  virtual void exitClass_base(HuTaoParser::Class_baseContext * /*ctx*/) override { }

  virtual void enterInterface_type_list(HuTaoParser::Interface_type_listContext * /*ctx*/) override { }
  virtual void exitInterface_type_list(HuTaoParser::Interface_type_listContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clauses(HuTaoParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clauses(HuTaoParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clause(HuTaoParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clause(HuTaoParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints(HuTaoParser::Type_parameter_constraintsContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints(HuTaoParser::Type_parameter_constraintsContext * /*ctx*/) override { }

  virtual void enterPrimary_constraint(HuTaoParser::Primary_constraintContext * /*ctx*/) override { }
  virtual void exitPrimary_constraint(HuTaoParser::Primary_constraintContext * /*ctx*/) override { }

  virtual void enterSecondary_constraints(HuTaoParser::Secondary_constraintsContext * /*ctx*/) override { }
  virtual void exitSecondary_constraints(HuTaoParser::Secondary_constraintsContext * /*ctx*/) override { }

  virtual void enterConstructor_constraint(HuTaoParser::Constructor_constraintContext * /*ctx*/) override { }
  virtual void exitConstructor_constraint(HuTaoParser::Constructor_constraintContext * /*ctx*/) override { }

  virtual void enterClass_body(HuTaoParser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(HuTaoParser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_member_declarations(HuTaoParser::Class_member_declarationsContext * /*ctx*/) override { }
  virtual void exitClass_member_declarations(HuTaoParser::Class_member_declarationsContext * /*ctx*/) override { }

  virtual void enterClass_member_declaration(HuTaoParser::Class_member_declarationContext * /*ctx*/) override { }
  virtual void exitClass_member_declaration(HuTaoParser::Class_member_declarationContext * /*ctx*/) override { }

  virtual void enterAll_member_modifiers(HuTaoParser::All_member_modifiersContext * /*ctx*/) override { }
  virtual void exitAll_member_modifiers(HuTaoParser::All_member_modifiersContext * /*ctx*/) override { }

  virtual void enterAll_member_modifier(HuTaoParser::All_member_modifierContext * /*ctx*/) override { }
  virtual void exitAll_member_modifier(HuTaoParser::All_member_modifierContext * /*ctx*/) override { }

  virtual void enterCommon_member_declaration(HuTaoParser::Common_member_declarationContext * /*ctx*/) override { }
  virtual void exitCommon_member_declaration(HuTaoParser::Common_member_declarationContext * /*ctx*/) override { }

  virtual void enterTyped_member_declaration(HuTaoParser::Typed_member_declarationContext * /*ctx*/) override { }
  virtual void exitTyped_member_declaration(HuTaoParser::Typed_member_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declarators(HuTaoParser::Constant_declaratorsContext * /*ctx*/) override { }
  virtual void exitConstant_declarators(HuTaoParser::Constant_declaratorsContext * /*ctx*/) override { }

  virtual void enterConstant_declarator(HuTaoParser::Constant_declaratorContext * /*ctx*/) override { }
  virtual void exitConstant_declarator(HuTaoParser::Constant_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_declarators(HuTaoParser::Variable_declaratorsContext * /*ctx*/) override { }
  virtual void exitVariable_declarators(HuTaoParser::Variable_declaratorsContext * /*ctx*/) override { }

  virtual void enterVariable_declarator(HuTaoParser::Variable_declaratorContext * /*ctx*/) override { }
  virtual void exitVariable_declarator(HuTaoParser::Variable_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_initializer(HuTaoParser::Variable_initializerContext * /*ctx*/) override { }
  virtual void exitVariable_initializer(HuTaoParser::Variable_initializerContext * /*ctx*/) override { }

  virtual void enterReturn_type(HuTaoParser::Return_typeContext * /*ctx*/) override { }
  virtual void exitReturn_type(HuTaoParser::Return_typeContext * /*ctx*/) override { }

  virtual void enterMember_name(HuTaoParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(HuTaoParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterMethod_body(HuTaoParser::Method_bodyContext * /*ctx*/) override { }
  virtual void exitMethod_body(HuTaoParser::Method_bodyContext * /*ctx*/) override { }

  virtual void enterFormal_parameter_list(HuTaoParser::Formal_parameter_listContext * /*ctx*/) override { }
  virtual void exitFormal_parameter_list(HuTaoParser::Formal_parameter_listContext * /*ctx*/) override { }

  virtual void enterFixed_parameters(HuTaoParser::Fixed_parametersContext * /*ctx*/) override { }
  virtual void exitFixed_parameters(HuTaoParser::Fixed_parametersContext * /*ctx*/) override { }

  virtual void enterFixed_parameter(HuTaoParser::Fixed_parameterContext * /*ctx*/) override { }
  virtual void exitFixed_parameter(HuTaoParser::Fixed_parameterContext * /*ctx*/) override { }

  virtual void enterParameter_modifier(HuTaoParser::Parameter_modifierContext * /*ctx*/) override { }
  virtual void exitParameter_modifier(HuTaoParser::Parameter_modifierContext * /*ctx*/) override { }

  virtual void enterParameter_array(HuTaoParser::Parameter_arrayContext * /*ctx*/) override { }
  virtual void exitParameter_array(HuTaoParser::Parameter_arrayContext * /*ctx*/) override { }

  virtual void enterAccessor_declarations(HuTaoParser::Accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitAccessor_declarations(HuTaoParser::Accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterGet_accessor_declaration(HuTaoParser::Get_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitGet_accessor_declaration(HuTaoParser::Get_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterSet_accessor_declaration(HuTaoParser::Set_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitSet_accessor_declaration(HuTaoParser::Set_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterAccessor_modifier(HuTaoParser::Accessor_modifierContext * /*ctx*/) override { }
  virtual void exitAccessor_modifier(HuTaoParser::Accessor_modifierContext * /*ctx*/) override { }

  virtual void enterAccessor_body(HuTaoParser::Accessor_bodyContext * /*ctx*/) override { }
  virtual void exitAccessor_body(HuTaoParser::Accessor_bodyContext * /*ctx*/) override { }

  virtual void enterEvent_accessor_declarations(HuTaoParser::Event_accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitEvent_accessor_declarations(HuTaoParser::Event_accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterAdd_accessor_declaration(HuTaoParser::Add_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitAdd_accessor_declaration(HuTaoParser::Add_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterRemove_accessor_declaration(HuTaoParser::Remove_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitRemove_accessor_declaration(HuTaoParser::Remove_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterOverloadable_operator(HuTaoParser::Overloadable_operatorContext * /*ctx*/) override { }
  virtual void exitOverloadable_operator(HuTaoParser::Overloadable_operatorContext * /*ctx*/) override { }

  virtual void enterConversion_operator_declarator(HuTaoParser::Conversion_operator_declaratorContext * /*ctx*/) override { }
  virtual void exitConversion_operator_declarator(HuTaoParser::Conversion_operator_declaratorContext * /*ctx*/) override { }

  virtual void enterConstructor_initializer(HuTaoParser::Constructor_initializerContext * /*ctx*/) override { }
  virtual void exitConstructor_initializer(HuTaoParser::Constructor_initializerContext * /*ctx*/) override { }

  virtual void enterBody(HuTaoParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(HuTaoParser::BodyContext * /*ctx*/) override { }

  virtual void enterStruct_interfaces(HuTaoParser::Struct_interfacesContext * /*ctx*/) override { }
  virtual void exitStruct_interfaces(HuTaoParser::Struct_interfacesContext * /*ctx*/) override { }

  virtual void enterStruct_body(HuTaoParser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(HuTaoParser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_member_declaration(HuTaoParser::Struct_member_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_member_declaration(HuTaoParser::Struct_member_declarationContext * /*ctx*/) override { }

  virtual void enterArray_type(HuTaoParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(HuTaoParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterRank_specifier(HuTaoParser::Rank_specifierContext * /*ctx*/) override { }
  virtual void exitRank_specifier(HuTaoParser::Rank_specifierContext * /*ctx*/) override { }

  virtual void enterArray_initializer(HuTaoParser::Array_initializerContext * /*ctx*/) override { }
  virtual void exitArray_initializer(HuTaoParser::Array_initializerContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter_list(HuTaoParser::Variant_type_parameter_listContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter_list(HuTaoParser::Variant_type_parameter_listContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter(HuTaoParser::Variant_type_parameterContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter(HuTaoParser::Variant_type_parameterContext * /*ctx*/) override { }

  virtual void enterVariance_annotation(HuTaoParser::Variance_annotationContext * /*ctx*/) override { }
  virtual void exitVariance_annotation(HuTaoParser::Variance_annotationContext * /*ctx*/) override { }

  virtual void enterInterface_base(HuTaoParser::Interface_baseContext * /*ctx*/) override { }
  virtual void exitInterface_base(HuTaoParser::Interface_baseContext * /*ctx*/) override { }

  virtual void enterInterface_body(HuTaoParser::Interface_bodyContext * /*ctx*/) override { }
  virtual void exitInterface_body(HuTaoParser::Interface_bodyContext * /*ctx*/) override { }

  virtual void enterInterface_member_declaration(HuTaoParser::Interface_member_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_member_declaration(HuTaoParser::Interface_member_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_accessors(HuTaoParser::Interface_accessorsContext * /*ctx*/) override { }
  virtual void exitInterface_accessors(HuTaoParser::Interface_accessorsContext * /*ctx*/) override { }

  virtual void enterEnum_base(HuTaoParser::Enum_baseContext * /*ctx*/) override { }
  virtual void exitEnum_base(HuTaoParser::Enum_baseContext * /*ctx*/) override { }

  virtual void enterEnum_body(HuTaoParser::Enum_bodyContext * /*ctx*/) override { }
  virtual void exitEnum_body(HuTaoParser::Enum_bodyContext * /*ctx*/) override { }

  virtual void enterEnum_member_declaration(HuTaoParser::Enum_member_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_member_declaration(HuTaoParser::Enum_member_declarationContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_section(HuTaoParser::Global_attribute_sectionContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_section(HuTaoParser::Global_attribute_sectionContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_target(HuTaoParser::Global_attribute_targetContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_target(HuTaoParser::Global_attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttributes(HuTaoParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(HuTaoParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttribute_section(HuTaoParser::Attribute_sectionContext * /*ctx*/) override { }
  virtual void exitAttribute_section(HuTaoParser::Attribute_sectionContext * /*ctx*/) override { }

  virtual void enterAttribute_target(HuTaoParser::Attribute_targetContext * /*ctx*/) override { }
  virtual void exitAttribute_target(HuTaoParser::Attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttribute_list(HuTaoParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(HuTaoParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterAttribute(HuTaoParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(HuTaoParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_argument(HuTaoParser::Attribute_argumentContext * /*ctx*/) override { }
  virtual void exitAttribute_argument(HuTaoParser::Attribute_argumentContext * /*ctx*/) override { }

  virtual void enterPointer_type(HuTaoParser::Pointer_typeContext * /*ctx*/) override { }
  virtual void exitPointer_type(HuTaoParser::Pointer_typeContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarators(HuTaoParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarators(HuTaoParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarator(HuTaoParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarator(HuTaoParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_initializer(HuTaoParser::Fixed_pointer_initializerContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_initializer(HuTaoParser::Fixed_pointer_initializerContext * /*ctx*/) override { }

  virtual void enterFixed_size_buffer_declarator(HuTaoParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_size_buffer_declarator(HuTaoParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }

  virtual void enterStackalloc_initializer(HuTaoParser::Stackalloc_initializerContext * /*ctx*/) override { }
  virtual void exitStackalloc_initializer(HuTaoParser::Stackalloc_initializerContext * /*ctx*/) override { }

  virtual void enterRight_arrow(HuTaoParser::Right_arrowContext * /*ctx*/) override { }
  virtual void exitRight_arrow(HuTaoParser::Right_arrowContext * /*ctx*/) override { }

  virtual void enterRight_shift(HuTaoParser::Right_shiftContext * /*ctx*/) override { }
  virtual void exitRight_shift(HuTaoParser::Right_shiftContext * /*ctx*/) override { }

  virtual void enterRight_shift_assignment(HuTaoParser::Right_shift_assignmentContext * /*ctx*/) override { }
  virtual void exitRight_shift_assignment(HuTaoParser::Right_shift_assignmentContext * /*ctx*/) override { }

  virtual void enterLiteral(HuTaoParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(HuTaoParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(HuTaoParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(HuTaoParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(HuTaoParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(HuTaoParser::String_literalContext * /*ctx*/) override { }

  virtual void enterKeyword(HuTaoParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(HuTaoParser::KeywordContext * /*ctx*/) override { }

  virtual void enterClass_definition(HuTaoParser::Class_definitionContext * /*ctx*/) override { }
  virtual void exitClass_definition(HuTaoParser::Class_definitionContext * /*ctx*/) override { }

  virtual void enterStruct_definition(HuTaoParser::Struct_definitionContext * /*ctx*/) override { }
  virtual void exitStruct_definition(HuTaoParser::Struct_definitionContext * /*ctx*/) override { }

  virtual void enterInterface_definition(HuTaoParser::Interface_definitionContext * /*ctx*/) override { }
  virtual void exitInterface_definition(HuTaoParser::Interface_definitionContext * /*ctx*/) override { }

  virtual void enterEnum_definition(HuTaoParser::Enum_definitionContext * /*ctx*/) override { }
  virtual void exitEnum_definition(HuTaoParser::Enum_definitionContext * /*ctx*/) override { }

  virtual void enterDelegate_definition(HuTaoParser::Delegate_definitionContext * /*ctx*/) override { }
  virtual void exitDelegate_definition(HuTaoParser::Delegate_definitionContext * /*ctx*/) override { }

  virtual void enterEvent_declaration(HuTaoParser::Event_declarationContext * /*ctx*/) override { }
  virtual void exitEvent_declaration(HuTaoParser::Event_declarationContext * /*ctx*/) override { }

  virtual void enterField_declaration(HuTaoParser::Field_declarationContext * /*ctx*/) override { }
  virtual void exitField_declaration(HuTaoParser::Field_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_declaration(HuTaoParser::Property_declarationContext * /*ctx*/) override { }
  virtual void exitProperty_declaration(HuTaoParser::Property_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(HuTaoParser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(HuTaoParser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterIndexer_declaration(HuTaoParser::Indexer_declarationContext * /*ctx*/) override { }
  virtual void exitIndexer_declaration(HuTaoParser::Indexer_declarationContext * /*ctx*/) override { }

  virtual void enterDestructor_definition(HuTaoParser::Destructor_definitionContext * /*ctx*/) override { }
  virtual void exitDestructor_definition(HuTaoParser::Destructor_definitionContext * /*ctx*/) override { }

  virtual void enterConstructor_declaration(HuTaoParser::Constructor_declarationContext * /*ctx*/) override { }
  virtual void exitConstructor_declaration(HuTaoParser::Constructor_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_declaration(HuTaoParser::Method_declarationContext * /*ctx*/) override { }
  virtual void exitMethod_declaration(HuTaoParser::Method_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_member_name(HuTaoParser::Method_member_nameContext * /*ctx*/) override { }
  virtual void exitMethod_member_name(HuTaoParser::Method_member_nameContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(HuTaoParser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(HuTaoParser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterArg_declaration(HuTaoParser::Arg_declarationContext * /*ctx*/) override { }
  virtual void exitArg_declaration(HuTaoParser::Arg_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_invocation(HuTaoParser::Method_invocationContext * /*ctx*/) override { }
  virtual void exitMethod_invocation(HuTaoParser::Method_invocationContext * /*ctx*/) override { }

  virtual void enterObject_creation_expression(HuTaoParser::Object_creation_expressionContext * /*ctx*/) override { }
  virtual void exitObject_creation_expression(HuTaoParser::Object_creation_expressionContext * /*ctx*/) override { }

  virtual void enterIdentifier(HuTaoParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(HuTaoParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

