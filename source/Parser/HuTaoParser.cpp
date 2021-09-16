
// Generated from HuTaoParser.g4 by ANTLR 4.9.2


#include <hutao/Parser/HuTaoParserListener.h>

#include <hutao/Parser/HuTaoParser.h>


using namespace antlrcpp;
using namespace antlr4;

HuTaoParser::HuTaoParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HuTaoParser::~HuTaoParser() {
  delete _interpreter;
}

std::string HuTaoParser::getGrammarFileName() const {
  return "HuTaoParser.g4";
}

const std::vector<std::string>& HuTaoParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HuTaoParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Compilation_unitContext ------------------------------------------------------------------

HuTaoParser::Compilation_unitContext::Compilation_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Compilation_unitContext::EOF() {
  return getToken(HuTaoParser::EOF, 0);
}

HuTaoParser::Using_directivesContext* HuTaoParser::Compilation_unitContext::using_directives() {
  return getRuleContext<HuTaoParser::Using_directivesContext>(0);
}

HuTaoParser::Namespace_member_declarationsContext* HuTaoParser::Compilation_unitContext::namespace_member_declarations() {
  return getRuleContext<HuTaoParser::Namespace_member_declarationsContext>(0);
}


size_t HuTaoParser::Compilation_unitContext::getRuleIndex() const {
  return HuTaoParser::RuleCompilation_unit;
}

void HuTaoParser::Compilation_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilation_unit(this);
}

void HuTaoParser::Compilation_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilation_unit(this);
}

HuTaoParser::Compilation_unitContext* HuTaoParser::compilation_unit() {
  Compilation_unitContext *_localctx = _tracker.createInstance<Compilation_unitContext>(_ctx, getState());
  enterRule(_localctx, 0, HuTaoParser::RuleCompilation_unit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::USING) {
      setState(424);
      using_directives();
    }
    setState(428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::NAMESPACE)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64)))) != 0)) {
      setState(427);
      namespace_member_declarations();
    }
    setState(430);
    match(HuTaoParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_or_type_nameContext ------------------------------------------------------------------

HuTaoParser::Namespace_or_type_nameContext::Namespace_or_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Namespace_or_type_nameContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Namespace_or_type_nameContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

HuTaoParser::Qualified_alias_memberContext* HuTaoParser::Namespace_or_type_nameContext::qualified_alias_member() {
  return getRuleContext<HuTaoParser::Qualified_alias_memberContext>(0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Namespace_or_type_nameContext::DOT() {
  return getTokens(HuTaoParser::DOT);
}

tree::TerminalNode* HuTaoParser::Namespace_or_type_nameContext::DOT(size_t i) {
  return getToken(HuTaoParser::DOT, i);
}

std::vector<HuTaoParser::Type_argument_listContext *> HuTaoParser::Namespace_or_type_nameContext::type_argument_list() {
  return getRuleContexts<HuTaoParser::Type_argument_listContext>();
}

HuTaoParser::Type_argument_listContext* HuTaoParser::Namespace_or_type_nameContext::type_argument_list(size_t i) {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(i);
}


size_t HuTaoParser::Namespace_or_type_nameContext::getRuleIndex() const {
  return HuTaoParser::RuleNamespace_or_type_name;
}

void HuTaoParser::Namespace_or_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_or_type_name(this);
}

void HuTaoParser::Namespace_or_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_or_type_name(this);
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::namespace_or_type_name() {
  Namespace_or_type_nameContext *_localctx = _tracker.createInstance<Namespace_or_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 2, HuTaoParser::RuleNamespace_or_type_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(432);
      identifier();
      setState(434);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(433);
        type_argument_list();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(436);
      qualified_alias_member();
      break;
    }

    default:
      break;
    }
    setState(446);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(439);
        match(HuTaoParser::DOT);
        setState(440);
        identifier();
        setState(442);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(441);
          type_argument_list();
          break;
        }

        default:
          break;
        } 
      }
      setState(448);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

HuTaoParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Base_typeContext* HuTaoParser::Type_Context::base_type() {
  return getRuleContext<HuTaoParser::Base_typeContext>(0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Type_Context::INTERR() {
  return getTokens(HuTaoParser::INTERR);
}

tree::TerminalNode* HuTaoParser::Type_Context::INTERR(size_t i) {
  return getToken(HuTaoParser::INTERR, i);
}

std::vector<HuTaoParser::Rank_specifierContext *> HuTaoParser::Type_Context::rank_specifier() {
  return getRuleContexts<HuTaoParser::Rank_specifierContext>();
}

HuTaoParser::Rank_specifierContext* HuTaoParser::Type_Context::rank_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Rank_specifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Type_Context::STAR() {
  return getTokens(HuTaoParser::STAR);
}

tree::TerminalNode* HuTaoParser::Type_Context::STAR(size_t i) {
  return getToken(HuTaoParser::STAR, i);
}


size_t HuTaoParser::Type_Context::getRuleIndex() const {
  return HuTaoParser::RuleType_;
}

void HuTaoParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void HuTaoParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}

HuTaoParser::Type_Context* HuTaoParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 4, HuTaoParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(449);
    base_type();
    setState(455);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(453);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case HuTaoParser::INTERR: {
            setState(450);
            match(HuTaoParser::INTERR);
            break;
          }

          case HuTaoParser::OPEN_BRACKET: {
            setState(451);
            rank_specifier();
            break;
          }

          case HuTaoParser::STAR: {
            setState(452);
            match(HuTaoParser::STAR);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(457);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

HuTaoParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Simple_typeContext* HuTaoParser::Base_typeContext::simple_type() {
  return getRuleContext<HuTaoParser::Simple_typeContext>(0);
}

HuTaoParser::Class_typeContext* HuTaoParser::Base_typeContext::class_type() {
  return getRuleContext<HuTaoParser::Class_typeContext>(0);
}

tree::TerminalNode* HuTaoParser::Base_typeContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}

tree::TerminalNode* HuTaoParser::Base_typeContext::STAR() {
  return getToken(HuTaoParser::STAR, 0);
}

HuTaoParser::Tuple_typeContext* HuTaoParser::Base_typeContext::tuple_type() {
  return getRuleContext<HuTaoParser::Tuple_typeContext>(0);
}


size_t HuTaoParser::Base_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleBase_type;
}

void HuTaoParser::Base_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_type(this);
}

void HuTaoParser::Base_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_type(this);
}

HuTaoParser::Base_typeContext* HuTaoParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 6, HuTaoParser::RuleBase_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::BOOL:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64: {
        enterOuterAlt(_localctx, 1);
        setState(458);
        simple_type();
        break;
      }

      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BY:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(459);
        class_type();
        break;
      }

      case HuTaoParser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(460);
        match(HuTaoParser::VOID);
        setState(461);
        match(HuTaoParser::STAR);
        break;
      }

      case HuTaoParser::OPEN_PARENS: {
        enterOuterAlt(_localctx, 4);
        setState(462);
        tuple_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tuple_typeContext ------------------------------------------------------------------

HuTaoParser::Tuple_typeContext::Tuple_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Tuple_typeContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

std::vector<HuTaoParser::Tuple_elementContext *> HuTaoParser::Tuple_typeContext::tuple_element() {
  return getRuleContexts<HuTaoParser::Tuple_elementContext>();
}

HuTaoParser::Tuple_elementContext* HuTaoParser::Tuple_typeContext::tuple_element(size_t i) {
  return getRuleContext<HuTaoParser::Tuple_elementContext>(i);
}

tree::TerminalNode* HuTaoParser::Tuple_typeContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Tuple_typeContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Tuple_typeContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Tuple_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleTuple_type;
}

void HuTaoParser::Tuple_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuple_type(this);
}

void HuTaoParser::Tuple_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuple_type(this);
}

HuTaoParser::Tuple_typeContext* HuTaoParser::tuple_type() {
  Tuple_typeContext *_localctx = _tracker.createInstance<Tuple_typeContext>(_ctx, getState());
  enterRule(_localctx, 8, HuTaoParser::RuleTuple_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    match(HuTaoParser::OPEN_PARENS);
    setState(466);
    tuple_element();
    setState(469); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(467);
      match(HuTaoParser::COMMA);
      setState(468);
      tuple_element();
      setState(471); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HuTaoParser::COMMA);
    setState(473);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tuple_elementContext ------------------------------------------------------------------

HuTaoParser::Tuple_elementContext::Tuple_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Tuple_elementContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Tuple_elementContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}


size_t HuTaoParser::Tuple_elementContext::getRuleIndex() const {
  return HuTaoParser::RuleTuple_element;
}

void HuTaoParser::Tuple_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuple_element(this);
}

void HuTaoParser::Tuple_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuple_element(this);
}

HuTaoParser::Tuple_elementContext* HuTaoParser::tuple_element() {
  Tuple_elementContext *_localctx = _tracker.createInstance<Tuple_elementContext>(_ctx, getState());
  enterRule(_localctx, 10, HuTaoParser::RuleTuple_element);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    type_();
    setState(477);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64)))) != 0)) {
      setState(476);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_typeContext ------------------------------------------------------------------

HuTaoParser::Simple_typeContext::Simple_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Numeric_typeContext* HuTaoParser::Simple_typeContext::numeric_type() {
  return getRuleContext<HuTaoParser::Numeric_typeContext>(0);
}

tree::TerminalNode* HuTaoParser::Simple_typeContext::BOOL() {
  return getToken(HuTaoParser::BOOL, 0);
}


size_t HuTaoParser::Simple_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleSimple_type;
}

void HuTaoParser::Simple_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_type(this);
}

void HuTaoParser::Simple_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_type(this);
}

HuTaoParser::Simple_typeContext* HuTaoParser::simple_type() {
  Simple_typeContext *_localctx = _tracker.createInstance<Simple_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, HuTaoParser::RuleSimple_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(481);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64: {
        enterOuterAlt(_localctx, 1);
        setState(479);
        numeric_type();
        break;
      }

      case HuTaoParser::BOOL: {
        enterOuterAlt(_localctx, 2);
        setState(480);
        match(HuTaoParser::BOOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Numeric_typeContext ------------------------------------------------------------------

HuTaoParser::Numeric_typeContext::Numeric_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Integral_typeContext* HuTaoParser::Numeric_typeContext::integral_type() {
  return getRuleContext<HuTaoParser::Integral_typeContext>(0);
}

HuTaoParser::Floating_point_typeContext* HuTaoParser::Numeric_typeContext::floating_point_type() {
  return getRuleContext<HuTaoParser::Floating_point_typeContext>(0);
}


size_t HuTaoParser::Numeric_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleNumeric_type;
}

void HuTaoParser::Numeric_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumeric_type(this);
}

void HuTaoParser::Numeric_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumeric_type(this);
}

HuTaoParser::Numeric_typeContext* HuTaoParser::numeric_type() {
  Numeric_typeContext *_localctx = _tracker.createInstance<Numeric_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, HuTaoParser::RuleNumeric_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(485);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64: {
        enterOuterAlt(_localctx, 1);
        setState(483);
        integral_type();
        break;
      }

      case HuTaoParser::F32:
      case HuTaoParser::F64: {
        enterOuterAlt(_localctx, 2);
        setState(484);
        floating_point_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integral_typeContext ------------------------------------------------------------------

HuTaoParser::Integral_typeContext::Integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::U8() {
  return getToken(HuTaoParser::U8, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::I8() {
  return getToken(HuTaoParser::I8, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::U16() {
  return getToken(HuTaoParser::U16, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::I16() {
  return getToken(HuTaoParser::I16, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::U32() {
  return getToken(HuTaoParser::U32, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::I32() {
  return getToken(HuTaoParser::I32, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::U64() {
  return getToken(HuTaoParser::U64, 0);
}

tree::TerminalNode* HuTaoParser::Integral_typeContext::I64() {
  return getToken(HuTaoParser::I64, 0);
}


size_t HuTaoParser::Integral_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleIntegral_type;
}

void HuTaoParser::Integral_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegral_type(this);
}

void HuTaoParser::Integral_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegral_type(this);
}

HuTaoParser::Integral_typeContext* HuTaoParser::integral_type() {
  Integral_typeContext *_localctx = _tracker.createInstance<Integral_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, HuTaoParser::RuleIntegral_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    _la = _input->LA(1);
    if (!(((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (HuTaoParser::U8 - 107))
      | (1ULL << (HuTaoParser::I8 - 107))
      | (1ULL << (HuTaoParser::U16 - 107))
      | (1ULL << (HuTaoParser::I16 - 107))
      | (1ULL << (HuTaoParser::U32 - 107))
      | (1ULL << (HuTaoParser::I32 - 107))
      | (1ULL << (HuTaoParser::U64 - 107))
      | (1ULL << (HuTaoParser::I64 - 107)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Floating_point_typeContext ------------------------------------------------------------------

HuTaoParser::Floating_point_typeContext::Floating_point_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Floating_point_typeContext::F32() {
  return getToken(HuTaoParser::F32, 0);
}

tree::TerminalNode* HuTaoParser::Floating_point_typeContext::F64() {
  return getToken(HuTaoParser::F64, 0);
}


size_t HuTaoParser::Floating_point_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleFloating_point_type;
}

void HuTaoParser::Floating_point_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloating_point_type(this);
}

void HuTaoParser::Floating_point_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloating_point_type(this);
}

HuTaoParser::Floating_point_typeContext* HuTaoParser::floating_point_type() {
  Floating_point_typeContext *_localctx = _tracker.createInstance<Floating_point_typeContext>(_ctx, getState());
  enterRule(_localctx, 18, HuTaoParser::RuleFloating_point_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::F32

    || _la == HuTaoParser::F64)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_typeContext ------------------------------------------------------------------

HuTaoParser::Class_typeContext::Class_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Class_typeContext::namespace_or_type_name() {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Class_typeContext::OBJECT() {
  return getToken(HuTaoParser::OBJECT, 0);
}

tree::TerminalNode* HuTaoParser::Class_typeContext::STRING() {
  return getToken(HuTaoParser::STRING, 0);
}


size_t HuTaoParser::Class_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_type;
}

void HuTaoParser::Class_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_type(this);
}

void HuTaoParser::Class_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_type(this);
}

HuTaoParser::Class_typeContext* HuTaoParser::class_type() {
  Class_typeContext *_localctx = _tracker.createInstance<Class_typeContext>(_ctx, getState());
  enterRule(_localctx, 20, HuTaoParser::RuleClass_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BY:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(491);
        namespace_or_type_name();
        break;
      }

      case HuTaoParser::OBJECT: {
        enterOuterAlt(_localctx, 2);
        setState(492);
        match(HuTaoParser::OBJECT);
        break;
      }

      case HuTaoParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(493);
        match(HuTaoParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_argument_listContext ------------------------------------------------------------------

HuTaoParser::Type_argument_listContext::Type_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Type_argument_listContext::LT() {
  return getToken(HuTaoParser::LT, 0);
}

std::vector<HuTaoParser::Type_Context *> HuTaoParser::Type_argument_listContext::type_() {
  return getRuleContexts<HuTaoParser::Type_Context>();
}

HuTaoParser::Type_Context* HuTaoParser::Type_argument_listContext::type_(size_t i) {
  return getRuleContext<HuTaoParser::Type_Context>(i);
}

tree::TerminalNode* HuTaoParser::Type_argument_listContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Type_argument_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Type_argument_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Type_argument_listContext::getRuleIndex() const {
  return HuTaoParser::RuleType_argument_list;
}

void HuTaoParser::Type_argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_argument_list(this);
}

void HuTaoParser::Type_argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_argument_list(this);
}

HuTaoParser::Type_argument_listContext* HuTaoParser::type_argument_list() {
  Type_argument_listContext *_localctx = _tracker.createInstance<Type_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 22, HuTaoParser::RuleType_argument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(HuTaoParser::LT);
    setState(497);
    type_();
    setState(502);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(498);
      match(HuTaoParser::COMMA);
      setState(499);
      type_();
      setState(504);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(505);
    match(HuTaoParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

HuTaoParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::ArgumentContext *> HuTaoParser::Argument_listContext::argument() {
  return getRuleContexts<HuTaoParser::ArgumentContext>();
}

HuTaoParser::ArgumentContext* HuTaoParser::Argument_listContext::argument(size_t i) {
  return getRuleContext<HuTaoParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Argument_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Argument_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Argument_listContext::getRuleIndex() const {
  return HuTaoParser::RuleArgument_list;
}

void HuTaoParser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void HuTaoParser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}

HuTaoParser::Argument_listContext* HuTaoParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 24, HuTaoParser::RuleArgument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    argument();
    setState(512);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(508);
      match(HuTaoParser::COMMA);
      setState(509);
      argument();
      setState(514);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

HuTaoParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::ArgumentContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::ArgumentContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::ArgumentContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

tree::TerminalNode* HuTaoParser::ArgumentContext::VAR() {
  return getToken(HuTaoParser::VAR, 0);
}

HuTaoParser::Type_Context* HuTaoParser::ArgumentContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::ArgumentContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::ArgumentContext::OUT() {
  return getToken(HuTaoParser::OUT, 0);
}

tree::TerminalNode* HuTaoParser::ArgumentContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}


size_t HuTaoParser::ArgumentContext::getRuleIndex() const {
  return HuTaoParser::RuleArgument;
}

void HuTaoParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void HuTaoParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}

HuTaoParser::ArgumentContext* HuTaoParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 26, HuTaoParser::RuleArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(515);
      identifier();
      setState(516);
      match(HuTaoParser::COLON);
      break;
    }

    default:
      break;
    }
    setState(521);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(520);
      dynamic_cast<ArgumentContext *>(_localctx)->refout = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 45) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 45)) & ((1ULL << (HuTaoParser::IN - 45))
        | (1ULL << (HuTaoParser::OUT - 45))
        | (1ULL << (HuTaoParser::REF - 45)))) != 0))) {
        dynamic_cast<ArgumentContext *>(_localctx)->refout = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
    setState(525);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(523);
      match(HuTaoParser::VAR);
      break;
    }

    case 2: {
      setState(524);
      type_();
      break;
    }

    default:
      break;
    }
    setState(527);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

HuTaoParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::AssignmentContext* HuTaoParser::ExpressionContext::assignment() {
  return getRuleContext<HuTaoParser::AssignmentContext>(0);
}

HuTaoParser::Non_assignment_expressionContext* HuTaoParser::ExpressionContext::non_assignment_expression() {
  return getRuleContext<HuTaoParser::Non_assignment_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::ExpressionContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}


size_t HuTaoParser::ExpressionContext::getRuleIndex() const {
  return HuTaoParser::RuleExpression;
}

void HuTaoParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void HuTaoParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

HuTaoParser::ExpressionContext* HuTaoParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, HuTaoParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(529);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      non_assignment_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(531);
      match(HuTaoParser::REF);
      setState(532);
      non_assignment_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Non_assignment_expressionContext ------------------------------------------------------------------

HuTaoParser::Non_assignment_expressionContext::Non_assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Lambda_expressionContext* HuTaoParser::Non_assignment_expressionContext::lambda_expression() {
  return getRuleContext<HuTaoParser::Lambda_expressionContext>(0);
}

HuTaoParser::Query_expressionContext* HuTaoParser::Non_assignment_expressionContext::query_expression() {
  return getRuleContext<HuTaoParser::Query_expressionContext>(0);
}

HuTaoParser::Conditional_expressionContext* HuTaoParser::Non_assignment_expressionContext::conditional_expression() {
  return getRuleContext<HuTaoParser::Conditional_expressionContext>(0);
}


size_t HuTaoParser::Non_assignment_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleNon_assignment_expression;
}

void HuTaoParser::Non_assignment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon_assignment_expression(this);
}

void HuTaoParser::Non_assignment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon_assignment_expression(this);
}

HuTaoParser::Non_assignment_expressionContext* HuTaoParser::non_assignment_expression() {
  Non_assignment_expressionContext *_localctx = _tracker.createInstance<Non_assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 30, HuTaoParser::RuleNon_assignment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(535);
      lambda_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(536);
      query_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(537);
      conditional_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

HuTaoParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Unary_expressionContext* HuTaoParser::AssignmentContext::unary_expression() {
  return getRuleContext<HuTaoParser::Unary_expressionContext>(0);
}

HuTaoParser::Assignment_operatorContext* HuTaoParser::AssignmentContext::assignment_operator() {
  return getRuleContext<HuTaoParser::Assignment_operatorContext>(0);
}

HuTaoParser::ExpressionContext* HuTaoParser::AssignmentContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::AssignmentContext::OP_COALESCING_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_COALESCING_ASSIGNMENT, 0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::AssignmentContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}


size_t HuTaoParser::AssignmentContext::getRuleIndex() const {
  return HuTaoParser::RuleAssignment;
}

void HuTaoParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void HuTaoParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

HuTaoParser::AssignmentContext* HuTaoParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 32, HuTaoParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(548);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(540);
      unary_expression();
      setState(541);
      assignment_operator();
      setState(542);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(544);
      unary_expression();
      setState(545);
      match(HuTaoParser::OP_COALESCING_ASSIGNMENT);
      setState(546);
      throwable_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorContext ------------------------------------------------------------------

HuTaoParser::Assignment_operatorContext::Assignment_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_ADD_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_ADD_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_SUB_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_SUB_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_MULT_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_MULT_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_DIV_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_DIV_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_MOD_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_MOD_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_AND_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_AND_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_OR_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_OR_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_XOR_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_XOR_ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Assignment_operatorContext::OP_LEFT_SHIFT_ASSIGNMENT() {
  return getToken(HuTaoParser::OP_LEFT_SHIFT_ASSIGNMENT, 0);
}

HuTaoParser::Right_shift_assignmentContext* HuTaoParser::Assignment_operatorContext::right_shift_assignment() {
  return getRuleContext<HuTaoParser::Right_shift_assignmentContext>(0);
}


size_t HuTaoParser::Assignment_operatorContext::getRuleIndex() const {
  return HuTaoParser::RuleAssignment_operator;
}

void HuTaoParser::Assignment_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_operator(this);
}

void HuTaoParser::Assignment_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_operator(this);
}

HuTaoParser::Assignment_operatorContext* HuTaoParser::assignment_operator() {
  Assignment_operatorContext *_localctx = _tracker.createInstance<Assignment_operatorContext>(_ctx, getState());
  enterRule(_localctx, 34, HuTaoParser::RuleAssignment_operator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(561);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 1);
        setState(550);
        match(HuTaoParser::ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_ADD_ASSIGNMENT: {
        enterOuterAlt(_localctx, 2);
        setState(551);
        match(HuTaoParser::OP_ADD_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_SUB_ASSIGNMENT: {
        enterOuterAlt(_localctx, 3);
        setState(552);
        match(HuTaoParser::OP_SUB_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_MULT_ASSIGNMENT: {
        enterOuterAlt(_localctx, 4);
        setState(553);
        match(HuTaoParser::OP_MULT_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_DIV_ASSIGNMENT: {
        enterOuterAlt(_localctx, 5);
        setState(554);
        match(HuTaoParser::OP_DIV_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_MOD_ASSIGNMENT: {
        enterOuterAlt(_localctx, 6);
        setState(555);
        match(HuTaoParser::OP_MOD_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_AND_ASSIGNMENT: {
        enterOuterAlt(_localctx, 7);
        setState(556);
        match(HuTaoParser::OP_AND_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_OR_ASSIGNMENT: {
        enterOuterAlt(_localctx, 8);
        setState(557);
        match(HuTaoParser::OP_OR_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_XOR_ASSIGNMENT: {
        enterOuterAlt(_localctx, 9);
        setState(558);
        match(HuTaoParser::OP_XOR_ASSIGNMENT);
        break;
      }

      case HuTaoParser::OP_LEFT_SHIFT_ASSIGNMENT: {
        enterOuterAlt(_localctx, 10);
        setState(559);
        match(HuTaoParser::OP_LEFT_SHIFT_ASSIGNMENT);
        break;
      }

      case HuTaoParser::GT: {
        enterOuterAlt(_localctx, 11);
        setState(560);
        right_shift_assignment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_expressionContext ------------------------------------------------------------------

HuTaoParser::Conditional_expressionContext::Conditional_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Null_coalescing_expressionContext* HuTaoParser::Conditional_expressionContext::null_coalescing_expression() {
  return getRuleContext<HuTaoParser::Null_coalescing_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Conditional_expressionContext::INTERR() {
  return getToken(HuTaoParser::INTERR, 0);
}

std::vector<HuTaoParser::Throwable_expressionContext *> HuTaoParser::Conditional_expressionContext::throwable_expression() {
  return getRuleContexts<HuTaoParser::Throwable_expressionContext>();
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Conditional_expressionContext::throwable_expression(size_t i) {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(i);
}

tree::TerminalNode* HuTaoParser::Conditional_expressionContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}


size_t HuTaoParser::Conditional_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleConditional_expression;
}

void HuTaoParser::Conditional_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_expression(this);
}

void HuTaoParser::Conditional_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_expression(this);
}

HuTaoParser::Conditional_expressionContext* HuTaoParser::conditional_expression() {
  Conditional_expressionContext *_localctx = _tracker.createInstance<Conditional_expressionContext>(_ctx, getState());
  enterRule(_localctx, 36, HuTaoParser::RuleConditional_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    null_coalescing_expression();
    setState(569);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(564);
      match(HuTaoParser::INTERR);
      setState(565);
      throwable_expression();
      setState(566);
      match(HuTaoParser::COLON);
      setState(567);
      throwable_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Null_coalescing_expressionContext ------------------------------------------------------------------

HuTaoParser::Null_coalescing_expressionContext::Null_coalescing_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Conditional_or_expressionContext* HuTaoParser::Null_coalescing_expressionContext::conditional_or_expression() {
  return getRuleContext<HuTaoParser::Conditional_or_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Null_coalescing_expressionContext::OP_COALESCING() {
  return getToken(HuTaoParser::OP_COALESCING, 0);
}

HuTaoParser::Null_coalescing_expressionContext* HuTaoParser::Null_coalescing_expressionContext::null_coalescing_expression() {
  return getRuleContext<HuTaoParser::Null_coalescing_expressionContext>(0);
}

HuTaoParser::Throw_expressionContext* HuTaoParser::Null_coalescing_expressionContext::throw_expression() {
  return getRuleContext<HuTaoParser::Throw_expressionContext>(0);
}


size_t HuTaoParser::Null_coalescing_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleNull_coalescing_expression;
}

void HuTaoParser::Null_coalescing_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNull_coalescing_expression(this);
}

void HuTaoParser::Null_coalescing_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNull_coalescing_expression(this);
}

HuTaoParser::Null_coalescing_expressionContext* HuTaoParser::null_coalescing_expression() {
  Null_coalescing_expressionContext *_localctx = _tracker.createInstance<Null_coalescing_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, HuTaoParser::RuleNull_coalescing_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    conditional_or_expression();
    setState(577);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OP_COALESCING) {
      setState(572);
      match(HuTaoParser::OP_COALESCING);
      setState(575);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::ADD:
        case HuTaoParser::ALIAS:
        case HuTaoParser::ASCENDING:
        case HuTaoParser::ASYNC:
        case HuTaoParser::AWAIT:
        case HuTaoParser::BASE:
        case HuTaoParser::BOOL:
        case HuTaoParser::BY:
        case HuTaoParser::CHECKED:
        case HuTaoParser::DEFAULT:
        case HuTaoParser::DELEGATE:
        case HuTaoParser::EQUALS:
        case HuTaoParser::FALSE:
        case HuTaoParser::FROM:
        case HuTaoParser::GET:
        case HuTaoParser::GROUP:
        case HuTaoParser::INTO:
        case HuTaoParser::JOIN:
        case HuTaoParser::LET:
        case HuTaoParser::NAMEOF:
        case HuTaoParser::NEW:
        case HuTaoParser::NULL_:
        case HuTaoParser::OBJECT:
        case HuTaoParser::ON:
        case HuTaoParser::ORDERBY:
        case HuTaoParser::PARTIAL:
        case HuTaoParser::REMOVE:
        case HuTaoParser::SELECT:
        case HuTaoParser::SET:
        case HuTaoParser::SIZEOF:
        case HuTaoParser::STRING:
        case HuTaoParser::THIS:
        case HuTaoParser::TRUE:
        case HuTaoParser::TYPEOF:
        case HuTaoParser::UNCHECKED:
        case HuTaoParser::UNMANAGED:
        case HuTaoParser::VAR:
        case HuTaoParser::WHEN:
        case HuTaoParser::WHERE:
        case HuTaoParser::YIELD:
        case HuTaoParser::IDENTIFIER:
        case HuTaoParser::LITERAL_ACCESS:
        case HuTaoParser::INTEGER_LITERAL:
        case HuTaoParser::HEX_INTEGER_LITERAL:
        case HuTaoParser::BIN_INTEGER_LITERAL:
        case HuTaoParser::REAL_LITERAL:
        case HuTaoParser::CHARACTER_LITERAL:
        case HuTaoParser::REGULAR_STRING:
        case HuTaoParser::VERBATIUM_STRING:
        case HuTaoParser::U8:
        case HuTaoParser::I8:
        case HuTaoParser::U16:
        case HuTaoParser::I16:
        case HuTaoParser::U32:
        case HuTaoParser::I32:
        case HuTaoParser::U64:
        case HuTaoParser::I64:
        case HuTaoParser::F32:
        case HuTaoParser::F64:
        case HuTaoParser::OPEN_PARENS:
        case HuTaoParser::PLUS:
        case HuTaoParser::MINUS:
        case HuTaoParser::STAR:
        case HuTaoParser::AMP:
        case HuTaoParser::CARET:
        case HuTaoParser::BANG:
        case HuTaoParser::TILDE:
        case HuTaoParser::OP_INC:
        case HuTaoParser::OP_DEC:
        case HuTaoParser::OP_RANGE: {
          setState(573);
          null_coalescing_expression();
          break;
        }

        case HuTaoParser::THROW: {
          setState(574);
          throw_expression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_or_expressionContext ------------------------------------------------------------------

HuTaoParser::Conditional_or_expressionContext::Conditional_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Conditional_and_expressionContext *> HuTaoParser::Conditional_or_expressionContext::conditional_and_expression() {
  return getRuleContexts<HuTaoParser::Conditional_and_expressionContext>();
}

HuTaoParser::Conditional_and_expressionContext* HuTaoParser::Conditional_or_expressionContext::conditional_and_expression(size_t i) {
  return getRuleContext<HuTaoParser::Conditional_and_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Conditional_or_expressionContext::OP_OR() {
  return getTokens(HuTaoParser::OP_OR);
}

tree::TerminalNode* HuTaoParser::Conditional_or_expressionContext::OP_OR(size_t i) {
  return getToken(HuTaoParser::OP_OR, i);
}


size_t HuTaoParser::Conditional_or_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleConditional_or_expression;
}

void HuTaoParser::Conditional_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_or_expression(this);
}

void HuTaoParser::Conditional_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_or_expression(this);
}

HuTaoParser::Conditional_or_expressionContext* HuTaoParser::conditional_or_expression() {
  Conditional_or_expressionContext *_localctx = _tracker.createInstance<Conditional_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 40, HuTaoParser::RuleConditional_or_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    conditional_and_expression();
    setState(584);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::OP_OR) {
      setState(580);
      match(HuTaoParser::OP_OR);
      setState(581);
      conditional_and_expression();
      setState(586);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_and_expressionContext ------------------------------------------------------------------

HuTaoParser::Conditional_and_expressionContext::Conditional_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Inclusive_or_expressionContext *> HuTaoParser::Conditional_and_expressionContext::inclusive_or_expression() {
  return getRuleContexts<HuTaoParser::Inclusive_or_expressionContext>();
}

HuTaoParser::Inclusive_or_expressionContext* HuTaoParser::Conditional_and_expressionContext::inclusive_or_expression(size_t i) {
  return getRuleContext<HuTaoParser::Inclusive_or_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Conditional_and_expressionContext::OP_AND() {
  return getTokens(HuTaoParser::OP_AND);
}

tree::TerminalNode* HuTaoParser::Conditional_and_expressionContext::OP_AND(size_t i) {
  return getToken(HuTaoParser::OP_AND, i);
}


size_t HuTaoParser::Conditional_and_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleConditional_and_expression;
}

void HuTaoParser::Conditional_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_and_expression(this);
}

void HuTaoParser::Conditional_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_and_expression(this);
}

HuTaoParser::Conditional_and_expressionContext* HuTaoParser::conditional_and_expression() {
  Conditional_and_expressionContext *_localctx = _tracker.createInstance<Conditional_and_expressionContext>(_ctx, getState());
  enterRule(_localctx, 42, HuTaoParser::RuleConditional_and_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    inclusive_or_expression();
    setState(592);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::OP_AND) {
      setState(588);
      match(HuTaoParser::OP_AND);
      setState(589);
      inclusive_or_expression();
      setState(594);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inclusive_or_expressionContext ------------------------------------------------------------------

HuTaoParser::Inclusive_or_expressionContext::Inclusive_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Exclusive_or_expressionContext *> HuTaoParser::Inclusive_or_expressionContext::exclusive_or_expression() {
  return getRuleContexts<HuTaoParser::Exclusive_or_expressionContext>();
}

HuTaoParser::Exclusive_or_expressionContext* HuTaoParser::Inclusive_or_expressionContext::exclusive_or_expression(size_t i) {
  return getRuleContext<HuTaoParser::Exclusive_or_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Inclusive_or_expressionContext::BITWISE_OR() {
  return getTokens(HuTaoParser::BITWISE_OR);
}

tree::TerminalNode* HuTaoParser::Inclusive_or_expressionContext::BITWISE_OR(size_t i) {
  return getToken(HuTaoParser::BITWISE_OR, i);
}


size_t HuTaoParser::Inclusive_or_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleInclusive_or_expression;
}

void HuTaoParser::Inclusive_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusive_or_expression(this);
}

void HuTaoParser::Inclusive_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusive_or_expression(this);
}

HuTaoParser::Inclusive_or_expressionContext* HuTaoParser::inclusive_or_expression() {
  Inclusive_or_expressionContext *_localctx = _tracker.createInstance<Inclusive_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 44, HuTaoParser::RuleInclusive_or_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
    exclusive_or_expression();
    setState(600);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::BITWISE_OR) {
      setState(596);
      match(HuTaoParser::BITWISE_OR);
      setState(597);
      exclusive_or_expression();
      setState(602);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exclusive_or_expressionContext ------------------------------------------------------------------

HuTaoParser::Exclusive_or_expressionContext::Exclusive_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::And_expressionContext *> HuTaoParser::Exclusive_or_expressionContext::and_expression() {
  return getRuleContexts<HuTaoParser::And_expressionContext>();
}

HuTaoParser::And_expressionContext* HuTaoParser::Exclusive_or_expressionContext::and_expression(size_t i) {
  return getRuleContext<HuTaoParser::And_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Exclusive_or_expressionContext::CARET() {
  return getTokens(HuTaoParser::CARET);
}

tree::TerminalNode* HuTaoParser::Exclusive_or_expressionContext::CARET(size_t i) {
  return getToken(HuTaoParser::CARET, i);
}


size_t HuTaoParser::Exclusive_or_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleExclusive_or_expression;
}

void HuTaoParser::Exclusive_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusive_or_expression(this);
}

void HuTaoParser::Exclusive_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusive_or_expression(this);
}

HuTaoParser::Exclusive_or_expressionContext* HuTaoParser::exclusive_or_expression() {
  Exclusive_or_expressionContext *_localctx = _tracker.createInstance<Exclusive_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 46, HuTaoParser::RuleExclusive_or_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    and_expression();
    setState(608);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::CARET) {
      setState(604);
      match(HuTaoParser::CARET);
      setState(605);
      and_expression();
      setState(610);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_expressionContext ------------------------------------------------------------------

HuTaoParser::And_expressionContext::And_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Equality_expressionContext *> HuTaoParser::And_expressionContext::equality_expression() {
  return getRuleContexts<HuTaoParser::Equality_expressionContext>();
}

HuTaoParser::Equality_expressionContext* HuTaoParser::And_expressionContext::equality_expression(size_t i) {
  return getRuleContext<HuTaoParser::Equality_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::And_expressionContext::AMP() {
  return getTokens(HuTaoParser::AMP);
}

tree::TerminalNode* HuTaoParser::And_expressionContext::AMP(size_t i) {
  return getToken(HuTaoParser::AMP, i);
}


size_t HuTaoParser::And_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleAnd_expression;
}

void HuTaoParser::And_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expression(this);
}

void HuTaoParser::And_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expression(this);
}

HuTaoParser::And_expressionContext* HuTaoParser::and_expression() {
  And_expressionContext *_localctx = _tracker.createInstance<And_expressionContext>(_ctx, getState());
  enterRule(_localctx, 48, HuTaoParser::RuleAnd_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    equality_expression();
    setState(616);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::AMP) {
      setState(612);
      match(HuTaoParser::AMP);
      setState(613);
      equality_expression();
      setState(618);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equality_expressionContext ------------------------------------------------------------------

HuTaoParser::Equality_expressionContext::Equality_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Relational_expressionContext *> HuTaoParser::Equality_expressionContext::relational_expression() {
  return getRuleContexts<HuTaoParser::Relational_expressionContext>();
}

HuTaoParser::Relational_expressionContext* HuTaoParser::Equality_expressionContext::relational_expression(size_t i) {
  return getRuleContext<HuTaoParser::Relational_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Equality_expressionContext::OP_EQ() {
  return getTokens(HuTaoParser::OP_EQ);
}

tree::TerminalNode* HuTaoParser::Equality_expressionContext::OP_EQ(size_t i) {
  return getToken(HuTaoParser::OP_EQ, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Equality_expressionContext::OP_NE() {
  return getTokens(HuTaoParser::OP_NE);
}

tree::TerminalNode* HuTaoParser::Equality_expressionContext::OP_NE(size_t i) {
  return getToken(HuTaoParser::OP_NE, i);
}


size_t HuTaoParser::Equality_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleEquality_expression;
}

void HuTaoParser::Equality_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expression(this);
}

void HuTaoParser::Equality_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expression(this);
}

HuTaoParser::Equality_expressionContext* HuTaoParser::equality_expression() {
  Equality_expressionContext *_localctx = _tracker.createInstance<Equality_expressionContext>(_ctx, getState());
  enterRule(_localctx, 50, HuTaoParser::RuleEquality_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    relational_expression();
    setState(624);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::OP_EQ

    || _la == HuTaoParser::OP_NE) {
      setState(620);
      _la = _input->LA(1);
      if (!(_la == HuTaoParser::OP_EQ

      || _la == HuTaoParser::OP_NE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(621);
      relational_expression();
      setState(626);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

HuTaoParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Shift_expressionContext *> HuTaoParser::Relational_expressionContext::shift_expression() {
  return getRuleContexts<HuTaoParser::Shift_expressionContext>();
}

HuTaoParser::Shift_expressionContext* HuTaoParser::Relational_expressionContext::shift_expression(size_t i) {
  return getRuleContext<HuTaoParser::Shift_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::IS() {
  return getTokens(HuTaoParser::IS);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::IS(size_t i) {
  return getToken(HuTaoParser::IS, i);
}

std::vector<HuTaoParser::IsTypeContext *> HuTaoParser::Relational_expressionContext::isType() {
  return getRuleContexts<HuTaoParser::IsTypeContext>();
}

HuTaoParser::IsTypeContext* HuTaoParser::Relational_expressionContext::isType(size_t i) {
  return getRuleContext<HuTaoParser::IsTypeContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::AS() {
  return getTokens(HuTaoParser::AS);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::AS(size_t i) {
  return getToken(HuTaoParser::AS, i);
}

std::vector<HuTaoParser::Type_Context *> HuTaoParser::Relational_expressionContext::type_() {
  return getRuleContexts<HuTaoParser::Type_Context>();
}

HuTaoParser::Type_Context* HuTaoParser::Relational_expressionContext::type_(size_t i) {
  return getRuleContext<HuTaoParser::Type_Context>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::LT() {
  return getTokens(HuTaoParser::LT);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::LT(size_t i) {
  return getToken(HuTaoParser::LT, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::GT() {
  return getTokens(HuTaoParser::GT);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::GT(size_t i) {
  return getToken(HuTaoParser::GT, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::OP_LE() {
  return getTokens(HuTaoParser::OP_LE);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::OP_LE(size_t i) {
  return getToken(HuTaoParser::OP_LE, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Relational_expressionContext::OP_GE() {
  return getTokens(HuTaoParser::OP_GE);
}

tree::TerminalNode* HuTaoParser::Relational_expressionContext::OP_GE(size_t i) {
  return getToken(HuTaoParser::OP_GE, i);
}


size_t HuTaoParser::Relational_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleRelational_expression;
}

void HuTaoParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void HuTaoParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}

HuTaoParser::Relational_expressionContext* HuTaoParser::relational_expression() {
  Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, getState());
  enterRule(_localctx, 52, HuTaoParser::RuleRelational_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    shift_expression();
    setState(636);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::AS

    || _la == HuTaoParser::IS || ((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (HuTaoParser::LT - 139))
      | (1ULL << (HuTaoParser::GT - 139))
      | (1ULL << (HuTaoParser::OP_LE - 139))
      | (1ULL << (HuTaoParser::OP_GE - 139)))) != 0)) {
      setState(634);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::LT:
        case HuTaoParser::GT:
        case HuTaoParser::OP_LE:
        case HuTaoParser::OP_GE: {
          setState(628);
          _la = _input->LA(1);
          if (!(((((_la - 139) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 139)) & ((1ULL << (HuTaoParser::LT - 139))
            | (1ULL << (HuTaoParser::GT - 139))
            | (1ULL << (HuTaoParser::OP_LE - 139))
            | (1ULL << (HuTaoParser::OP_GE - 139)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(629);
          shift_expression();
          break;
        }

        case HuTaoParser::IS: {
          setState(630);
          match(HuTaoParser::IS);
          setState(631);
          isType();
          break;
        }

        case HuTaoParser::AS: {
          setState(632);
          match(HuTaoParser::AS);
          setState(633);
          type_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(638);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_expressionContext ------------------------------------------------------------------

HuTaoParser::Shift_expressionContext::Shift_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Additive_expressionContext *> HuTaoParser::Shift_expressionContext::additive_expression() {
  return getRuleContexts<HuTaoParser::Additive_expressionContext>();
}

HuTaoParser::Additive_expressionContext* HuTaoParser::Shift_expressionContext::additive_expression(size_t i) {
  return getRuleContext<HuTaoParser::Additive_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Shift_expressionContext::OP_LEFT_SHIFT() {
  return getTokens(HuTaoParser::OP_LEFT_SHIFT);
}

tree::TerminalNode* HuTaoParser::Shift_expressionContext::OP_LEFT_SHIFT(size_t i) {
  return getToken(HuTaoParser::OP_LEFT_SHIFT, i);
}

std::vector<HuTaoParser::Right_shiftContext *> HuTaoParser::Shift_expressionContext::right_shift() {
  return getRuleContexts<HuTaoParser::Right_shiftContext>();
}

HuTaoParser::Right_shiftContext* HuTaoParser::Shift_expressionContext::right_shift(size_t i) {
  return getRuleContext<HuTaoParser::Right_shiftContext>(i);
}


size_t HuTaoParser::Shift_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleShift_expression;
}

void HuTaoParser::Shift_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_expression(this);
}

void HuTaoParser::Shift_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_expression(this);
}

HuTaoParser::Shift_expressionContext* HuTaoParser::shift_expression() {
  Shift_expressionContext *_localctx = _tracker.createInstance<Shift_expressionContext>(_ctx, getState());
  enterRule(_localctx, 54, HuTaoParser::RuleShift_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(639);
    additive_expression();
    setState(647);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(642);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case HuTaoParser::OP_LEFT_SHIFT: {
            setState(640);
            match(HuTaoParser::OP_LEFT_SHIFT);
            break;
          }

          case HuTaoParser::GT: {
            setState(641);
            right_shift();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(644);
        additive_expression(); 
      }
      setState(649);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

HuTaoParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Multiplicative_expressionContext *> HuTaoParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContexts<HuTaoParser::Multiplicative_expressionContext>();
}

HuTaoParser::Multiplicative_expressionContext* HuTaoParser::Additive_expressionContext::multiplicative_expression(size_t i) {
  return getRuleContext<HuTaoParser::Multiplicative_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Additive_expressionContext::PLUS() {
  return getTokens(HuTaoParser::PLUS);
}

tree::TerminalNode* HuTaoParser::Additive_expressionContext::PLUS(size_t i) {
  return getToken(HuTaoParser::PLUS, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Additive_expressionContext::MINUS() {
  return getTokens(HuTaoParser::MINUS);
}

tree::TerminalNode* HuTaoParser::Additive_expressionContext::MINUS(size_t i) {
  return getToken(HuTaoParser::MINUS, i);
}


size_t HuTaoParser::Additive_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleAdditive_expression;
}

void HuTaoParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void HuTaoParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}

HuTaoParser::Additive_expressionContext* HuTaoParser::additive_expression() {
  Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, getState());
  enterRule(_localctx, 56, HuTaoParser::RuleAdditive_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    multiplicative_expression();
    setState(655);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::PLUS

    || _la == HuTaoParser::MINUS) {
      setState(651);
      _la = _input->LA(1);
      if (!(_la == HuTaoParser::PLUS

      || _la == HuTaoParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(652);
      multiplicative_expression();
      setState(657);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

HuTaoParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Switch_expressionContext *> HuTaoParser::Multiplicative_expressionContext::switch_expression() {
  return getRuleContexts<HuTaoParser::Switch_expressionContext>();
}

HuTaoParser::Switch_expressionContext* HuTaoParser::Multiplicative_expressionContext::switch_expression(size_t i) {
  return getRuleContext<HuTaoParser::Switch_expressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Multiplicative_expressionContext::STAR() {
  return getTokens(HuTaoParser::STAR);
}

tree::TerminalNode* HuTaoParser::Multiplicative_expressionContext::STAR(size_t i) {
  return getToken(HuTaoParser::STAR, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Multiplicative_expressionContext::DIV() {
  return getTokens(HuTaoParser::DIV);
}

tree::TerminalNode* HuTaoParser::Multiplicative_expressionContext::DIV(size_t i) {
  return getToken(HuTaoParser::DIV, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Multiplicative_expressionContext::PERCENT() {
  return getTokens(HuTaoParser::PERCENT);
}

tree::TerminalNode* HuTaoParser::Multiplicative_expressionContext::PERCENT(size_t i) {
  return getToken(HuTaoParser::PERCENT, i);
}


size_t HuTaoParser::Multiplicative_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleMultiplicative_expression;
}

void HuTaoParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void HuTaoParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}

HuTaoParser::Multiplicative_expressionContext* HuTaoParser::multiplicative_expression() {
  Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, getState());
  enterRule(_localctx, 58, HuTaoParser::RuleMultiplicative_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    switch_expression();
    setState(663);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (HuTaoParser::STAR - 130))
      | (1ULL << (HuTaoParser::DIV - 130))
      | (1ULL << (HuTaoParser::PERCENT - 130)))) != 0)) {
      setState(659);
      _la = _input->LA(1);
      if (!(((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (HuTaoParser::STAR - 130))
        | (1ULL << (HuTaoParser::DIV - 130))
        | (1ULL << (HuTaoParser::PERCENT - 130)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(660);
      switch_expression();
      setState(665);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_expressionContext ------------------------------------------------------------------

HuTaoParser::Switch_expressionContext::Switch_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Range_expressionContext* HuTaoParser::Switch_expressionContext::range_expression() {
  return getRuleContext<HuTaoParser::Range_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Switch_expressionContext::SWITCH() {
  return getToken(HuTaoParser::SWITCH, 0);
}

tree::TerminalNode* HuTaoParser::Switch_expressionContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Switch_expressionContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Switch_expression_armsContext* HuTaoParser::Switch_expressionContext::switch_expression_arms() {
  return getRuleContext<HuTaoParser::Switch_expression_armsContext>(0);
}

tree::TerminalNode* HuTaoParser::Switch_expressionContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Switch_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleSwitch_expression;
}

void HuTaoParser::Switch_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_expression(this);
}

void HuTaoParser::Switch_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_expression(this);
}

HuTaoParser::Switch_expressionContext* HuTaoParser::switch_expression() {
  Switch_expressionContext *_localctx = _tracker.createInstance<Switch_expressionContext>(_ctx, getState());
  enterRule(_localctx, 60, HuTaoParser::RuleSwitch_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(666);
    range_expression();
    setState(676);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SWITCH) {
      setState(667);
      match(HuTaoParser::SWITCH);
      setState(668);
      match(HuTaoParser::OPEN_BRACE);
      setState(673);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(669);
        switch_expression_arms();
        setState(671);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::COMMA) {
          setState(670);
          match(HuTaoParser::COMMA);
        }
      }
      setState(675);
      match(HuTaoParser::CLOSE_BRACE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_expression_armsContext ------------------------------------------------------------------

HuTaoParser::Switch_expression_armsContext::Switch_expression_armsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Switch_expression_armContext *> HuTaoParser::Switch_expression_armsContext::switch_expression_arm() {
  return getRuleContexts<HuTaoParser::Switch_expression_armContext>();
}

HuTaoParser::Switch_expression_armContext* HuTaoParser::Switch_expression_armsContext::switch_expression_arm(size_t i) {
  return getRuleContext<HuTaoParser::Switch_expression_armContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Switch_expression_armsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Switch_expression_armsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Switch_expression_armsContext::getRuleIndex() const {
  return HuTaoParser::RuleSwitch_expression_arms;
}

void HuTaoParser::Switch_expression_armsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_expression_arms(this);
}

void HuTaoParser::Switch_expression_armsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_expression_arms(this);
}

HuTaoParser::Switch_expression_armsContext* HuTaoParser::switch_expression_arms() {
  Switch_expression_armsContext *_localctx = _tracker.createInstance<Switch_expression_armsContext>(_ctx, getState());
  enterRule(_localctx, 62, HuTaoParser::RuleSwitch_expression_arms);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(678);
    switch_expression_arm();
    setState(683);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(679);
        match(HuTaoParser::COMMA);
        setState(680);
        switch_expression_arm(); 
      }
      setState(685);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_expression_armContext ------------------------------------------------------------------

HuTaoParser::Switch_expression_armContext::Switch_expression_armContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Switch_expression_armContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Switch_expression_armContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Switch_expression_armContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

HuTaoParser::Case_guardContext* HuTaoParser::Switch_expression_armContext::case_guard() {
  return getRuleContext<HuTaoParser::Case_guardContext>(0);
}


size_t HuTaoParser::Switch_expression_armContext::getRuleIndex() const {
  return HuTaoParser::RuleSwitch_expression_arm;
}

void HuTaoParser::Switch_expression_armContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_expression_arm(this);
}

void HuTaoParser::Switch_expression_armContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_expression_arm(this);
}

HuTaoParser::Switch_expression_armContext* HuTaoParser::switch_expression_arm() {
  Switch_expression_armContext *_localctx = _tracker.createInstance<Switch_expression_armContext>(_ctx, getState());
  enterRule(_localctx, 64, HuTaoParser::RuleSwitch_expression_arm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(686);
    expression();
    setState(688);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHEN) {
      setState(687);
      case_guard();
    }
    setState(690);
    right_arrow();
    setState(691);
    throwable_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Range_expressionContext ------------------------------------------------------------------

HuTaoParser::Range_expressionContext::Range_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Unary_expressionContext *> HuTaoParser::Range_expressionContext::unary_expression() {
  return getRuleContexts<HuTaoParser::Unary_expressionContext>();
}

HuTaoParser::Unary_expressionContext* HuTaoParser::Range_expressionContext::unary_expression(size_t i) {
  return getRuleContext<HuTaoParser::Unary_expressionContext>(i);
}

tree::TerminalNode* HuTaoParser::Range_expressionContext::OP_RANGE() {
  return getToken(HuTaoParser::OP_RANGE, 0);
}


size_t HuTaoParser::Range_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleRange_expression;
}

void HuTaoParser::Range_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange_expression(this);
}

void HuTaoParser::Range_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange_expression(this);
}

HuTaoParser::Range_expressionContext* HuTaoParser::range_expression() {
  Range_expressionContext *_localctx = _tracker.createInstance<Range_expressionContext>(_ctx, getState());
  enterRule(_localctx, 66, HuTaoParser::RuleRange_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(701);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(693);
      unary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(695);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128)))) != 0)) {
        setState(694);
        unary_expression();
      }
      setState(697);
      match(HuTaoParser::OP_RANGE);
      setState(699);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
      case 1: {
        setState(698);
        unary_expression();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

HuTaoParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Primary_expressionContext* HuTaoParser::Unary_expressionContext::primary_expression() {
  return getRuleContext<HuTaoParser::Primary_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::PLUS() {
  return getToken(HuTaoParser::PLUS, 0);
}

HuTaoParser::Unary_expressionContext* HuTaoParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<HuTaoParser::Unary_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::MINUS() {
  return getToken(HuTaoParser::MINUS, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::BANG() {
  return getToken(HuTaoParser::BANG, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::TILDE() {
  return getToken(HuTaoParser::TILDE, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::OP_INC() {
  return getToken(HuTaoParser::OP_INC, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::OP_DEC() {
  return getToken(HuTaoParser::OP_DEC, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Unary_expressionContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::AWAIT() {
  return getToken(HuTaoParser::AWAIT, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::AMP() {
  return getToken(HuTaoParser::AMP, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::STAR() {
  return getToken(HuTaoParser::STAR, 0);
}

tree::TerminalNode* HuTaoParser::Unary_expressionContext::CARET() {
  return getToken(HuTaoParser::CARET, 0);
}


size_t HuTaoParser::Unary_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleUnary_expression;
}

void HuTaoParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void HuTaoParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}

HuTaoParser::Unary_expressionContext* HuTaoParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 68, HuTaoParser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(729);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(703);
      primary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(704);
      match(HuTaoParser::PLUS);
      setState(705);
      unary_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(706);
      match(HuTaoParser::MINUS);
      setState(707);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(708);
      match(HuTaoParser::BANG);
      setState(709);
      unary_expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(710);
      match(HuTaoParser::TILDE);
      setState(711);
      unary_expression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(712);
      match(HuTaoParser::OP_INC);
      setState(713);
      unary_expression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(714);
      match(HuTaoParser::OP_DEC);
      setState(715);
      unary_expression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(716);
      match(HuTaoParser::OPEN_PARENS);
      setState(717);
      type_();
      setState(718);
      match(HuTaoParser::CLOSE_PARENS);
      setState(719);
      unary_expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(721);
      match(HuTaoParser::AWAIT);
      setState(722);
      unary_expression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(723);
      match(HuTaoParser::AMP);
      setState(724);
      unary_expression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(725);
      match(HuTaoParser::STAR);
      setState(726);
      unary_expression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(727);
      match(HuTaoParser::CARET);
      setState(728);
      unary_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

HuTaoParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Primary_expression_startContext* HuTaoParser::Primary_expressionContext::primary_expression_start() {
  return getRuleContext<HuTaoParser::Primary_expression_startContext>(0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Primary_expressionContext::BANG() {
  return getTokens(HuTaoParser::BANG);
}

tree::TerminalNode* HuTaoParser::Primary_expressionContext::BANG(size_t i) {
  return getToken(HuTaoParser::BANG, i);
}

std::vector<HuTaoParser::Bracket_expressionContext *> HuTaoParser::Primary_expressionContext::bracket_expression() {
  return getRuleContexts<HuTaoParser::Bracket_expressionContext>();
}

HuTaoParser::Bracket_expressionContext* HuTaoParser::Primary_expressionContext::bracket_expression(size_t i) {
  return getRuleContext<HuTaoParser::Bracket_expressionContext>(i);
}

std::vector<HuTaoParser::Member_accessContext *> HuTaoParser::Primary_expressionContext::member_access() {
  return getRuleContexts<HuTaoParser::Member_accessContext>();
}

HuTaoParser::Member_accessContext* HuTaoParser::Primary_expressionContext::member_access(size_t i) {
  return getRuleContext<HuTaoParser::Member_accessContext>(i);
}

std::vector<HuTaoParser::Method_invocationContext *> HuTaoParser::Primary_expressionContext::method_invocation() {
  return getRuleContexts<HuTaoParser::Method_invocationContext>();
}

HuTaoParser::Method_invocationContext* HuTaoParser::Primary_expressionContext::method_invocation(size_t i) {
  return getRuleContext<HuTaoParser::Method_invocationContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Primary_expressionContext::OP_INC() {
  return getTokens(HuTaoParser::OP_INC);
}

tree::TerminalNode* HuTaoParser::Primary_expressionContext::OP_INC(size_t i) {
  return getToken(HuTaoParser::OP_INC, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Primary_expressionContext::OP_DEC() {
  return getTokens(HuTaoParser::OP_DEC);
}

tree::TerminalNode* HuTaoParser::Primary_expressionContext::OP_DEC(size_t i) {
  return getToken(HuTaoParser::OP_DEC, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Primary_expressionContext::OP_PTR() {
  return getTokens(HuTaoParser::OP_PTR);
}

tree::TerminalNode* HuTaoParser::Primary_expressionContext::OP_PTR(size_t i) {
  return getToken(HuTaoParser::OP_PTR, i);
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Primary_expressionContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Primary_expressionContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}


size_t HuTaoParser::Primary_expressionContext::getRuleIndex() const {
  return HuTaoParser::RulePrimary_expression;
}

void HuTaoParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void HuTaoParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}

HuTaoParser::Primary_expressionContext* HuTaoParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 70, HuTaoParser::RulePrimary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(731);
    dynamic_cast<Primary_expressionContext *>(_localctx)->pe = primary_expression_start();
    setState(733);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(732);
      match(HuTaoParser::BANG);
      break;
    }

    default:
      break;
    }
    setState(738);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(735);
        bracket_expression(); 
      }
      setState(740);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
    setState(742);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::BANG) {
      setState(741);
      match(HuTaoParser::BANG);
    }
    setState(766);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(750);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case HuTaoParser::DOT:
          case HuTaoParser::INTERR: {
            setState(744);
            member_access();
            break;
          }

          case HuTaoParser::OPEN_PARENS: {
            setState(745);
            method_invocation();
            break;
          }

          case HuTaoParser::OP_INC: {
            setState(746);
            match(HuTaoParser::OP_INC);
            break;
          }

          case HuTaoParser::OP_DEC: {
            setState(747);
            match(HuTaoParser::OP_DEC);
            break;
          }

          case HuTaoParser::OP_PTR: {
            setState(748);
            match(HuTaoParser::OP_PTR);
            setState(749);
            identifier();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(753);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
        case 1: {
          setState(752);
          match(HuTaoParser::BANG);
          break;
        }

        default:
          break;
        }
        setState(758);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(755);
            bracket_expression(); 
          }
          setState(760);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        }
        setState(762);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::BANG) {
          setState(761);
          match(HuTaoParser::BANG);
        } 
      }
      setState(768);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expression_startContext ------------------------------------------------------------------

HuTaoParser::Primary_expression_startContext::Primary_expression_startContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuTaoParser::Primary_expression_startContext::getRuleIndex() const {
  return HuTaoParser::RulePrimary_expression_start;
}

void HuTaoParser::Primary_expression_startContext::copyFrom(Primary_expression_startContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LiteralAccessExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::LiteralAccessExpressionContext::LITERAL_ACCESS() {
  return getToken(HuTaoParser::LITERAL_ACCESS, 0);
}

HuTaoParser::LiteralAccessExpressionContext::LiteralAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::LiteralAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralAccessExpression(this);
}
void HuTaoParser::LiteralAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralAccessExpression(this);
}
//----------------- DefaultValueExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::DefaultValueExpressionContext::DEFAULT() {
  return getToken(HuTaoParser::DEFAULT, 0);
}

tree::TerminalNode* HuTaoParser::DefaultValueExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Type_Context* HuTaoParser::DefaultValueExpressionContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::DefaultValueExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::DefaultValueExpressionContext::DefaultValueExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::DefaultValueExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValueExpression(this);
}
void HuTaoParser::DefaultValueExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValueExpression(this);
}
//----------------- BaseAccessExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::BaseAccessExpressionContext::BASE() {
  return getToken(HuTaoParser::BASE, 0);
}

tree::TerminalNode* HuTaoParser::BaseAccessExpressionContext::DOT() {
  return getToken(HuTaoParser::DOT, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::BaseAccessExpressionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::BaseAccessExpressionContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Expression_listContext* HuTaoParser::BaseAccessExpressionContext::expression_list() {
  return getRuleContext<HuTaoParser::Expression_listContext>(0);
}

tree::TerminalNode* HuTaoParser::BaseAccessExpressionContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

HuTaoParser::Type_argument_listContext* HuTaoParser::BaseAccessExpressionContext::type_argument_list() {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(0);
}

HuTaoParser::BaseAccessExpressionContext::BaseAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::BaseAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseAccessExpression(this);
}
void HuTaoParser::BaseAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseAccessExpression(this);
}
//----------------- SizeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::SizeofExpressionContext::SIZEOF() {
  return getToken(HuTaoParser::SIZEOF, 0);
}

tree::TerminalNode* HuTaoParser::SizeofExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Type_Context* HuTaoParser::SizeofExpressionContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::SizeofExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::SizeofExpressionContext::SizeofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::SizeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSizeofExpression(this);
}
void HuTaoParser::SizeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSizeofExpression(this);
}
//----------------- ParenthesisExpressionsContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ParenthesisExpressionsContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::ParenthesisExpressionsContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::ParenthesisExpressionsContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::ParenthesisExpressionsContext::ParenthesisExpressionsContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ParenthesisExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisExpressions(this);
}
void HuTaoParser::ParenthesisExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisExpressions(this);
}
//----------------- ThisReferenceExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ThisReferenceExpressionContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}

HuTaoParser::ThisReferenceExpressionContext::ThisReferenceExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ThisReferenceExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisReferenceExpression(this);
}
void HuTaoParser::ThisReferenceExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisReferenceExpression(this);
}
//----------------- ObjectCreationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ObjectCreationExpressionContext::NEW() {
  return getToken(HuTaoParser::NEW, 0);
}

HuTaoParser::Type_Context* HuTaoParser::ObjectCreationExpressionContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::Anonymous_object_initializerContext* HuTaoParser::ObjectCreationExpressionContext::anonymous_object_initializer() {
  return getRuleContext<HuTaoParser::Anonymous_object_initializerContext>(0);
}

std::vector<HuTaoParser::Rank_specifierContext *> HuTaoParser::ObjectCreationExpressionContext::rank_specifier() {
  return getRuleContexts<HuTaoParser::Rank_specifierContext>();
}

HuTaoParser::Rank_specifierContext* HuTaoParser::ObjectCreationExpressionContext::rank_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Rank_specifierContext>(i);
}

HuTaoParser::Array_initializerContext* HuTaoParser::ObjectCreationExpressionContext::array_initializer() {
  return getRuleContext<HuTaoParser::Array_initializerContext>(0);
}

HuTaoParser::Object_creation_expressionContext* HuTaoParser::ObjectCreationExpressionContext::object_creation_expression() {
  return getRuleContext<HuTaoParser::Object_creation_expressionContext>(0);
}

HuTaoParser::Object_or_collection_initializerContext* HuTaoParser::ObjectCreationExpressionContext::object_or_collection_initializer() {
  return getRuleContext<HuTaoParser::Object_or_collection_initializerContext>(0);
}

tree::TerminalNode* HuTaoParser::ObjectCreationExpressionContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Expression_listContext* HuTaoParser::ObjectCreationExpressionContext::expression_list() {
  return getRuleContext<HuTaoParser::Expression_listContext>(0);
}

tree::TerminalNode* HuTaoParser::ObjectCreationExpressionContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

HuTaoParser::ObjectCreationExpressionContext::ObjectCreationExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ObjectCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectCreationExpression(this);
}
void HuTaoParser::ObjectCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectCreationExpression(this);
}
//----------------- AnonymousMethodExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::AnonymousMethodExpressionContext::DELEGATE() {
  return getToken(HuTaoParser::DELEGATE, 0);
}

HuTaoParser::BlockContext* HuTaoParser::AnonymousMethodExpressionContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

tree::TerminalNode* HuTaoParser::AnonymousMethodExpressionContext::ASYNC() {
  return getToken(HuTaoParser::ASYNC, 0);
}

tree::TerminalNode* HuTaoParser::AnonymousMethodExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::AnonymousMethodExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Explicit_anonymous_function_parameter_listContext* HuTaoParser::AnonymousMethodExpressionContext::explicit_anonymous_function_parameter_list() {
  return getRuleContext<HuTaoParser::Explicit_anonymous_function_parameter_listContext>(0);
}

HuTaoParser::AnonymousMethodExpressionContext::AnonymousMethodExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::AnonymousMethodExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousMethodExpression(this);
}
void HuTaoParser::AnonymousMethodExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousMethodExpression(this);
}
//----------------- TypeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::TypeofExpressionContext::TYPEOF() {
  return getToken(HuTaoParser::TYPEOF, 0);
}

tree::TerminalNode* HuTaoParser::TypeofExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::TypeofExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Unbound_type_nameContext* HuTaoParser::TypeofExpressionContext::unbound_type_name() {
  return getRuleContext<HuTaoParser::Unbound_type_nameContext>(0);
}

HuTaoParser::Type_Context* HuTaoParser::TypeofExpressionContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::TypeofExpressionContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}

HuTaoParser::TypeofExpressionContext::TypeofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}
void HuTaoParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}
//----------------- TupleExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::TupleExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

std::vector<HuTaoParser::ArgumentContext *> HuTaoParser::TupleExpressionContext::argument() {
  return getRuleContexts<HuTaoParser::ArgumentContext>();
}

HuTaoParser::ArgumentContext* HuTaoParser::TupleExpressionContext::argument(size_t i) {
  return getRuleContext<HuTaoParser::ArgumentContext>(i);
}

tree::TerminalNode* HuTaoParser::TupleExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::TupleExpressionContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::TupleExpressionContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}

HuTaoParser::TupleExpressionContext::TupleExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::TupleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleExpression(this);
}
void HuTaoParser::TupleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleExpression(this);
}
//----------------- UncheckedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::UncheckedExpressionContext::UNCHECKED() {
  return getToken(HuTaoParser::UNCHECKED, 0);
}

tree::TerminalNode* HuTaoParser::UncheckedExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::UncheckedExpressionContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::UncheckedExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::UncheckedExpressionContext::UncheckedExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::UncheckedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUncheckedExpression(this);
}
void HuTaoParser::UncheckedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUncheckedExpression(this);
}
//----------------- SimpleNameExpressionContext ------------------------------------------------------------------

HuTaoParser::IdentifierContext* HuTaoParser::SimpleNameExpressionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Type_argument_listContext* HuTaoParser::SimpleNameExpressionContext::type_argument_list() {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(0);
}

HuTaoParser::SimpleNameExpressionContext::SimpleNameExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::SimpleNameExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleNameExpression(this);
}
void HuTaoParser::SimpleNameExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleNameExpression(this);
}
//----------------- MemberAccessExpressionContext ------------------------------------------------------------------

HuTaoParser::Predefined_typeContext* HuTaoParser::MemberAccessExpressionContext::predefined_type() {
  return getRuleContext<HuTaoParser::Predefined_typeContext>(0);
}

HuTaoParser::Qualified_alias_memberContext* HuTaoParser::MemberAccessExpressionContext::qualified_alias_member() {
  return getRuleContext<HuTaoParser::Qualified_alias_memberContext>(0);
}

HuTaoParser::MemberAccessExpressionContext::MemberAccessExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::MemberAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpression(this);
}
void HuTaoParser::MemberAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpression(this);
}
//----------------- CheckedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::CheckedExpressionContext::CHECKED() {
  return getToken(HuTaoParser::CHECKED, 0);
}

tree::TerminalNode* HuTaoParser::CheckedExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::CheckedExpressionContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::CheckedExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::CheckedExpressionContext::CheckedExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::CheckedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckedExpression(this);
}
void HuTaoParser::CheckedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckedExpression(this);
}
//----------------- LiteralExpressionContext ------------------------------------------------------------------

HuTaoParser::LiteralContext* HuTaoParser::LiteralExpressionContext::literal() {
  return getRuleContext<HuTaoParser::LiteralContext>(0);
}

HuTaoParser::LiteralExpressionContext::LiteralExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}
void HuTaoParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}
//----------------- NameofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::NameofExpressionContext::NAMEOF() {
  return getToken(HuTaoParser::NAMEOF, 0);
}

tree::TerminalNode* HuTaoParser::NameofExpressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::NameofExpressionContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::NameofExpressionContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

tree::TerminalNode* HuTaoParser::NameofExpressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::NameofExpressionContext::DOT() {
  return getTokens(HuTaoParser::DOT);
}

tree::TerminalNode* HuTaoParser::NameofExpressionContext::DOT(size_t i) {
  return getToken(HuTaoParser::DOT, i);
}

HuTaoParser::NameofExpressionContext::NameofExpressionContext(Primary_expression_startContext *ctx) { copyFrom(ctx); }

void HuTaoParser::NameofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameofExpression(this);
}
void HuTaoParser::NameofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameofExpression(this);
}
HuTaoParser::Primary_expression_startContext* HuTaoParser::primary_expression_start() {
  Primary_expression_startContext *_localctx = _tracker.createInstance<Primary_expression_startContext>(_ctx, getState());
  enterRule(_localctx, 72, HuTaoParser::RulePrimary_expression_start);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(890);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::LiteralExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(769);
      literal();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::SimpleNameExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(770);
      identifier();
      setState(772);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
      case 1: {
        setState(771);
        type_argument_list();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::ParenthesisExpressionsContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(774);
      match(HuTaoParser::OPEN_PARENS);
      setState(775);
      expression();
      setState(776);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::MemberAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(778);
      predefined_type();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::MemberAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(779);
      qualified_alias_member();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::LiteralAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(780);
      match(HuTaoParser::LITERAL_ACCESS);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::ThisReferenceExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(781);
      match(HuTaoParser::THIS);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::BaseAccessExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(782);
      match(HuTaoParser::BASE);
      setState(792);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::DOT: {
          setState(783);
          match(HuTaoParser::DOT);
          setState(784);
          identifier();
          setState(786);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
          case 1: {
            setState(785);
            type_argument_list();
            break;
          }

          default:
            break;
          }
          break;
        }

        case HuTaoParser::OPEN_BRACKET: {
          setState(788);
          match(HuTaoParser::OPEN_BRACKET);
          setState(789);
          expression_list();
          setState(790);
          match(HuTaoParser::CLOSE_BRACKET);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 9: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::ObjectCreationExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(794);
      match(HuTaoParser::NEW);
      setState(823);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::ADD:
        case HuTaoParser::ALIAS:
        case HuTaoParser::ASCENDING:
        case HuTaoParser::ASYNC:
        case HuTaoParser::AWAIT:
        case HuTaoParser::BOOL:
        case HuTaoParser::BY:
        case HuTaoParser::EQUALS:
        case HuTaoParser::FROM:
        case HuTaoParser::GET:
        case HuTaoParser::GROUP:
        case HuTaoParser::INTO:
        case HuTaoParser::JOIN:
        case HuTaoParser::LET:
        case HuTaoParser::NAMEOF:
        case HuTaoParser::OBJECT:
        case HuTaoParser::ON:
        case HuTaoParser::ORDERBY:
        case HuTaoParser::PARTIAL:
        case HuTaoParser::REMOVE:
        case HuTaoParser::SELECT:
        case HuTaoParser::SET:
        case HuTaoParser::STRING:
        case HuTaoParser::UNMANAGED:
        case HuTaoParser::VAR:
        case HuTaoParser::VOID:
        case HuTaoParser::WHEN:
        case HuTaoParser::WHERE:
        case HuTaoParser::YIELD:
        case HuTaoParser::IDENTIFIER:
        case HuTaoParser::U8:
        case HuTaoParser::I8:
        case HuTaoParser::U16:
        case HuTaoParser::I16:
        case HuTaoParser::U32:
        case HuTaoParser::I32:
        case HuTaoParser::U64:
        case HuTaoParser::I64:
        case HuTaoParser::F32:
        case HuTaoParser::F64:
        case HuTaoParser::OPEN_PARENS: {
          setState(795);
          type_();
          setState(817);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
          case 1: {
            setState(796);
            object_creation_expression();
            break;
          }

          case 2: {
            setState(797);
            object_or_collection_initializer();
            break;
          }

          case 3: {
            setState(798);
            match(HuTaoParser::OPEN_BRACKET);
            setState(799);
            expression_list();
            setState(800);
            match(HuTaoParser::CLOSE_BRACKET);
            setState(804);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(801);
                rank_specifier(); 
              }
              setState(806);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
            }
            setState(808);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == HuTaoParser::OPEN_BRACE) {
              setState(807);
              array_initializer();
            }
            break;
          }

          case 4: {
            setState(811); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(810);
              rank_specifier();
              setState(813); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while (_la == HuTaoParser::OPEN_BRACKET);
            setState(815);
            array_initializer();
            break;
          }

          default:
            break;
          }
          break;
        }

        case HuTaoParser::OPEN_BRACE: {
          setState(819);
          anonymous_object_initializer();
          break;
        }

        case HuTaoParser::OPEN_BRACKET: {
          setState(820);
          rank_specifier();
          setState(821);
          array_initializer();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 10: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::TupleExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(825);
      match(HuTaoParser::OPEN_PARENS);
      setState(826);
      argument();
      setState(829); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(827);
        match(HuTaoParser::COMMA);
        setState(828);
        argument();
        setState(831); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HuTaoParser::COMMA);
      setState(833);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::TypeofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(835);
      match(HuTaoParser::TYPEOF);
      setState(836);
      match(HuTaoParser::OPEN_PARENS);
      setState(840);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
      case 1: {
        setState(837);
        unbound_type_name();
        break;
      }

      case 2: {
        setState(838);
        type_();
        break;
      }

      case 3: {
        setState(839);
        match(HuTaoParser::VOID);
        break;
      }

      default:
        break;
      }
      setState(842);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::CheckedExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(843);
      match(HuTaoParser::CHECKED);
      setState(844);
      match(HuTaoParser::OPEN_PARENS);
      setState(845);
      expression();
      setState(846);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::UncheckedExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(848);
      match(HuTaoParser::UNCHECKED);
      setState(849);
      match(HuTaoParser::OPEN_PARENS);
      setState(850);
      expression();
      setState(851);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::DefaultValueExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(853);
      match(HuTaoParser::DEFAULT);
      setState(858);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
      case 1: {
        setState(854);
        match(HuTaoParser::OPEN_PARENS);
        setState(855);
        type_();
        setState(856);
        match(HuTaoParser::CLOSE_PARENS);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 15: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::AnonymousMethodExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(861);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::ASYNC) {
        setState(860);
        match(HuTaoParser::ASYNC);
      }
      setState(863);
      match(HuTaoParser::DELEGATE);
      setState(869);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::OPEN_PARENS) {
        setState(864);
        match(HuTaoParser::OPEN_PARENS);
        setState(866);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
          | (1ULL << HuTaoParser::ALIAS)
          | (1ULL << HuTaoParser::ASCENDING)
          | (1ULL << HuTaoParser::ASYNC)
          | (1ULL << HuTaoParser::AWAIT)
          | (1ULL << HuTaoParser::BOOL)
          | (1ULL << HuTaoParser::BY)
          | (1ULL << HuTaoParser::EQUALS)
          | (1ULL << HuTaoParser::FROM)
          | (1ULL << HuTaoParser::GET)
          | (1ULL << HuTaoParser::GROUP)
          | (1ULL << HuTaoParser::IN)
          | (1ULL << HuTaoParser::INTO)
          | (1ULL << HuTaoParser::JOIN)
          | (1ULL << HuTaoParser::LET)
          | (1ULL << HuTaoParser::NAMEOF)
          | (1ULL << HuTaoParser::OBJECT)
          | (1ULL << HuTaoParser::ON)
          | (1ULL << HuTaoParser::ORDERBY)
          | (1ULL << HuTaoParser::OUT))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
          | (1ULL << (HuTaoParser::REF - 64))
          | (1ULL << (HuTaoParser::REMOVE - 64))
          | (1ULL << (HuTaoParser::SELECT - 64))
          | (1ULL << (HuTaoParser::SET - 64))
          | (1ULL << (HuTaoParser::STRING - 64))
          | (1ULL << (HuTaoParser::UNMANAGED - 64))
          | (1ULL << (HuTaoParser::VAR - 64))
          | (1ULL << (HuTaoParser::VOID - 64))
          | (1ULL << (HuTaoParser::WHEN - 64))
          | (1ULL << (HuTaoParser::WHERE - 64))
          | (1ULL << (HuTaoParser::YIELD - 64))
          | (1ULL << (HuTaoParser::IDENTIFIER - 64))
          | (1ULL << (HuTaoParser::U8 - 64))
          | (1ULL << (HuTaoParser::I8 - 64))
          | (1ULL << (HuTaoParser::U16 - 64))
          | (1ULL << (HuTaoParser::I16 - 64))
          | (1ULL << (HuTaoParser::U32 - 64))
          | (1ULL << (HuTaoParser::I32 - 64))
          | (1ULL << (HuTaoParser::U64 - 64))
          | (1ULL << (HuTaoParser::I64 - 64))
          | (1ULL << (HuTaoParser::F32 - 64))
          | (1ULL << (HuTaoParser::F64 - 64))
          | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
          setState(865);
          explicit_anonymous_function_parameter_list();
        }
        setState(868);
        match(HuTaoParser::CLOSE_PARENS);
      }
      setState(871);
      block();
      break;
    }

    case 16: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::SizeofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(872);
      match(HuTaoParser::SIZEOF);
      setState(873);
      match(HuTaoParser::OPEN_PARENS);
      setState(874);
      type_();
      setState(875);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<Primary_expression_startContext *>(_tracker.createInstance<HuTaoParser::NameofExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(877);
      match(HuTaoParser::NAMEOF);
      setState(878);
      match(HuTaoParser::OPEN_PARENS);
      setState(884);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(879);
          identifier();
          setState(880);
          match(HuTaoParser::DOT); 
        }
        setState(886);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
      }
      setState(887);
      identifier();
      setState(888);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throwable_expressionContext ------------------------------------------------------------------

HuTaoParser::Throwable_expressionContext::Throwable_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Throwable_expressionContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Throw_expressionContext* HuTaoParser::Throwable_expressionContext::throw_expression() {
  return getRuleContext<HuTaoParser::Throw_expressionContext>(0);
}


size_t HuTaoParser::Throwable_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleThrowable_expression;
}

void HuTaoParser::Throwable_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowable_expression(this);
}

void HuTaoParser::Throwable_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowable_expression(this);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::throwable_expression() {
  Throwable_expressionContext *_localctx = _tracker.createInstance<Throwable_expressionContext>(_ctx, getState());
  enterRule(_localctx, 74, HuTaoParser::RuleThrowable_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(894);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(892);
        expression();
        break;
      }

      case HuTaoParser::THROW: {
        enterOuterAlt(_localctx, 2);
        setState(893);
        throw_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throw_expressionContext ------------------------------------------------------------------

HuTaoParser::Throw_expressionContext::Throw_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Throw_expressionContext::THROW() {
  return getToken(HuTaoParser::THROW, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Throw_expressionContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Throw_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleThrow_expression;
}

void HuTaoParser::Throw_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrow_expression(this);
}

void HuTaoParser::Throw_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrow_expression(this);
}

HuTaoParser::Throw_expressionContext* HuTaoParser::throw_expression() {
  Throw_expressionContext *_localctx = _tracker.createInstance<Throw_expressionContext>(_ctx, getState());
  enterRule(_localctx, 76, HuTaoParser::RuleThrow_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(896);
    match(HuTaoParser::THROW);
    setState(897);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_accessContext ------------------------------------------------------------------

HuTaoParser::Member_accessContext::Member_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Member_accessContext::DOT() {
  return getToken(HuTaoParser::DOT, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Member_accessContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Member_accessContext::INTERR() {
  return getToken(HuTaoParser::INTERR, 0);
}

HuTaoParser::Type_argument_listContext* HuTaoParser::Member_accessContext::type_argument_list() {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(0);
}


size_t HuTaoParser::Member_accessContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_access;
}

void HuTaoParser::Member_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_access(this);
}

void HuTaoParser::Member_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_access(this);
}

HuTaoParser::Member_accessContext* HuTaoParser::member_access() {
  Member_accessContext *_localctx = _tracker.createInstance<Member_accessContext>(_ctx, getState());
  enterRule(_localctx, 78, HuTaoParser::RuleMember_access);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(900);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::INTERR) {
      setState(899);
      match(HuTaoParser::INTERR);
    }
    setState(902);
    match(HuTaoParser::DOT);
    setState(903);
    identifier();
    setState(905);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      setState(904);
      type_argument_list();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bracket_expressionContext ------------------------------------------------------------------

HuTaoParser::Bracket_expressionContext::Bracket_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Bracket_expressionContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

std::vector<HuTaoParser::Indexer_argumentContext *> HuTaoParser::Bracket_expressionContext::indexer_argument() {
  return getRuleContexts<HuTaoParser::Indexer_argumentContext>();
}

HuTaoParser::Indexer_argumentContext* HuTaoParser::Bracket_expressionContext::indexer_argument(size_t i) {
  return getRuleContext<HuTaoParser::Indexer_argumentContext>(i);
}

tree::TerminalNode* HuTaoParser::Bracket_expressionContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Bracket_expressionContext::INTERR() {
  return getToken(HuTaoParser::INTERR, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Bracket_expressionContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Bracket_expressionContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Bracket_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleBracket_expression;
}

void HuTaoParser::Bracket_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracket_expression(this);
}

void HuTaoParser::Bracket_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracket_expression(this);
}

HuTaoParser::Bracket_expressionContext* HuTaoParser::bracket_expression() {
  Bracket_expressionContext *_localctx = _tracker.createInstance<Bracket_expressionContext>(_ctx, getState());
  enterRule(_localctx, 80, HuTaoParser::RuleBracket_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(908);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::INTERR) {
      setState(907);
      match(HuTaoParser::INTERR);
    }
    setState(910);
    match(HuTaoParser::OPEN_BRACKET);
    setState(911);
    indexer_argument();
    setState(916);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(912);
      match(HuTaoParser::COMMA);
      setState(913);
      indexer_argument();
      setState(918);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(919);
    match(HuTaoParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexer_argumentContext ------------------------------------------------------------------

HuTaoParser::Indexer_argumentContext::Indexer_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Indexer_argumentContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Indexer_argumentContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Indexer_argumentContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}


size_t HuTaoParser::Indexer_argumentContext::getRuleIndex() const {
  return HuTaoParser::RuleIndexer_argument;
}

void HuTaoParser::Indexer_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexer_argument(this);
}

void HuTaoParser::Indexer_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexer_argument(this);
}

HuTaoParser::Indexer_argumentContext* HuTaoParser::indexer_argument() {
  Indexer_argumentContext *_localctx = _tracker.createInstance<Indexer_argumentContext>(_ctx, getState());
  enterRule(_localctx, 82, HuTaoParser::RuleIndexer_argument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(924);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      setState(921);
      identifier();
      setState(922);
      match(HuTaoParser::COLON);
      break;
    }

    default:
      break;
    }
    setState(926);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predefined_typeContext ------------------------------------------------------------------

HuTaoParser::Predefined_typeContext::Predefined_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::BOOL() {
  return getToken(HuTaoParser::BOOL, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::U8() {
  return getToken(HuTaoParser::U8, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::I8() {
  return getToken(HuTaoParser::I8, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::U16() {
  return getToken(HuTaoParser::U16, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::I16() {
  return getToken(HuTaoParser::I16, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::U32() {
  return getToken(HuTaoParser::U32, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::I32() {
  return getToken(HuTaoParser::I32, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::OBJECT() {
  return getToken(HuTaoParser::OBJECT, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::U64() {
  return getToken(HuTaoParser::U64, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::I64() {
  return getToken(HuTaoParser::I64, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::STRING() {
  return getToken(HuTaoParser::STRING, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::F32() {
  return getToken(HuTaoParser::F32, 0);
}

tree::TerminalNode* HuTaoParser::Predefined_typeContext::F64() {
  return getToken(HuTaoParser::F64, 0);
}


size_t HuTaoParser::Predefined_typeContext::getRuleIndex() const {
  return HuTaoParser::RulePredefined_type;
}

void HuTaoParser::Predefined_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefined_type(this);
}

void HuTaoParser::Predefined_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefined_type(this);
}

HuTaoParser::Predefined_typeContext* HuTaoParser::predefined_type() {
  Predefined_typeContext *_localctx = _tracker.createInstance<Predefined_typeContext>(_ctx, getState());
  enterRule(_localctx, 84, HuTaoParser::RulePredefined_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::BOOL

    || _la == HuTaoParser::OBJECT || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (HuTaoParser::STRING - 78))
      | (1ULL << (HuTaoParser::U8 - 78))
      | (1ULL << (HuTaoParser::I8 - 78))
      | (1ULL << (HuTaoParser::U16 - 78))
      | (1ULL << (HuTaoParser::I16 - 78))
      | (1ULL << (HuTaoParser::U32 - 78))
      | (1ULL << (HuTaoParser::I32 - 78))
      | (1ULL << (HuTaoParser::U64 - 78))
      | (1ULL << (HuTaoParser::I64 - 78))
      | (1ULL << (HuTaoParser::F32 - 78))
      | (1ULL << (HuTaoParser::F64 - 78)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

HuTaoParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::Expression_listContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Expression_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Expression_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Expression_listContext::getRuleIndex() const {
  return HuTaoParser::RuleExpression_list;
}

void HuTaoParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void HuTaoParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}

HuTaoParser::Expression_listContext* HuTaoParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 86, HuTaoParser::RuleExpression_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    expression();
    setState(935);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(931);
      match(HuTaoParser::COMMA);
      setState(932);
      expression();
      setState(937);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_or_collection_initializerContext ------------------------------------------------------------------

HuTaoParser::Object_or_collection_initializerContext::Object_or_collection_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Object_initializerContext* HuTaoParser::Object_or_collection_initializerContext::object_initializer() {
  return getRuleContext<HuTaoParser::Object_initializerContext>(0);
}

HuTaoParser::Collection_initializerContext* HuTaoParser::Object_or_collection_initializerContext::collection_initializer() {
  return getRuleContext<HuTaoParser::Collection_initializerContext>(0);
}


size_t HuTaoParser::Object_or_collection_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleObject_or_collection_initializer;
}

void HuTaoParser::Object_or_collection_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_or_collection_initializer(this);
}

void HuTaoParser::Object_or_collection_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_or_collection_initializer(this);
}

HuTaoParser::Object_or_collection_initializerContext* HuTaoParser::object_or_collection_initializer() {
  Object_or_collection_initializerContext *_localctx = _tracker.createInstance<Object_or_collection_initializerContext>(_ctx, getState());
  enterRule(_localctx, 88, HuTaoParser::RuleObject_or_collection_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(940);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(938);
      object_initializer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(939);
      collection_initializer();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_initializerContext ------------------------------------------------------------------

HuTaoParser::Object_initializerContext::Object_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Object_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Object_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Member_initializer_listContext* HuTaoParser::Object_initializerContext::member_initializer_list() {
  return getRuleContext<HuTaoParser::Member_initializer_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Object_initializerContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Object_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleObject_initializer;
}

void HuTaoParser::Object_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_initializer(this);
}

void HuTaoParser::Object_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_initializer(this);
}

HuTaoParser::Object_initializerContext* HuTaoParser::object_initializer() {
  Object_initializerContext *_localctx = _tracker.createInstance<Object_initializerContext>(_ctx, getState());
  enterRule(_localctx, 90, HuTaoParser::RuleObject_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(942);
    match(HuTaoParser::OPEN_BRACE);
    setState(947);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64)))) != 0)) {
      setState(943);
      member_initializer_list();
      setState(945);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(944);
        match(HuTaoParser::COMMA);
      }
    }
    setState(949);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_initializer_listContext ------------------------------------------------------------------

HuTaoParser::Member_initializer_listContext::Member_initializer_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Member_initializerContext *> HuTaoParser::Member_initializer_listContext::member_initializer() {
  return getRuleContexts<HuTaoParser::Member_initializerContext>();
}

HuTaoParser::Member_initializerContext* HuTaoParser::Member_initializer_listContext::member_initializer(size_t i) {
  return getRuleContext<HuTaoParser::Member_initializerContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Member_initializer_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Member_initializer_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Member_initializer_listContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_initializer_list;
}

void HuTaoParser::Member_initializer_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_initializer_list(this);
}

void HuTaoParser::Member_initializer_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_initializer_list(this);
}

HuTaoParser::Member_initializer_listContext* HuTaoParser::member_initializer_list() {
  Member_initializer_listContext *_localctx = _tracker.createInstance<Member_initializer_listContext>(_ctx, getState());
  enterRule(_localctx, 92, HuTaoParser::RuleMember_initializer_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(951);
    member_initializer();
    setState(956);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(952);
        match(HuTaoParser::COMMA);
        setState(953);
        member_initializer(); 
      }
      setState(958);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_initializerContext ------------------------------------------------------------------

HuTaoParser::Member_initializerContext::Member_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Member_initializerContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Initializer_valueContext* HuTaoParser::Member_initializerContext::initializer_value() {
  return getRuleContext<HuTaoParser::Initializer_valueContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Member_initializerContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Member_initializerContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Member_initializerContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Member_initializerContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}


size_t HuTaoParser::Member_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_initializer;
}

void HuTaoParser::Member_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_initializer(this);
}

void HuTaoParser::Member_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_initializer(this);
}

HuTaoParser::Member_initializerContext* HuTaoParser::member_initializer() {
  Member_initializerContext *_localctx = _tracker.createInstance<Member_initializerContext>(_ctx, getState());
  enterRule(_localctx, 94, HuTaoParser::RuleMember_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(964);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BY:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER: {
        setState(959);
        identifier();
        break;
      }

      case HuTaoParser::OPEN_BRACKET: {
        setState(960);
        match(HuTaoParser::OPEN_BRACKET);
        setState(961);
        expression();
        setState(962);
        match(HuTaoParser::CLOSE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(966);
    match(HuTaoParser::ASSIGNMENT);
    setState(967);
    initializer_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_valueContext ------------------------------------------------------------------

HuTaoParser::Initializer_valueContext::Initializer_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Initializer_valueContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Object_or_collection_initializerContext* HuTaoParser::Initializer_valueContext::object_or_collection_initializer() {
  return getRuleContext<HuTaoParser::Object_or_collection_initializerContext>(0);
}


size_t HuTaoParser::Initializer_valueContext::getRuleIndex() const {
  return HuTaoParser::RuleInitializer_value;
}

void HuTaoParser::Initializer_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_value(this);
}

void HuTaoParser::Initializer_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_value(this);
}

HuTaoParser::Initializer_valueContext* HuTaoParser::initializer_value() {
  Initializer_valueContext *_localctx = _tracker.createInstance<Initializer_valueContext>(_ctx, getState());
  enterRule(_localctx, 96, HuTaoParser::RuleInitializer_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(971);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(969);
        expression();
        break;
      }

      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(970);
        object_or_collection_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Collection_initializerContext ------------------------------------------------------------------

HuTaoParser::Collection_initializerContext::Collection_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Collection_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

std::vector<HuTaoParser::Element_initializerContext *> HuTaoParser::Collection_initializerContext::element_initializer() {
  return getRuleContexts<HuTaoParser::Element_initializerContext>();
}

HuTaoParser::Element_initializerContext* HuTaoParser::Collection_initializerContext::element_initializer(size_t i) {
  return getRuleContext<HuTaoParser::Element_initializerContext>(i);
}

tree::TerminalNode* HuTaoParser::Collection_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Collection_initializerContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Collection_initializerContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Collection_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleCollection_initializer;
}

void HuTaoParser::Collection_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollection_initializer(this);
}

void HuTaoParser::Collection_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollection_initializer(this);
}

HuTaoParser::Collection_initializerContext* HuTaoParser::collection_initializer() {
  Collection_initializerContext *_localctx = _tracker.createInstance<Collection_initializerContext>(_ctx, getState());
  enterRule(_localctx, 98, HuTaoParser::RuleCollection_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(973);
    match(HuTaoParser::OPEN_BRACE);
    setState(974);
    element_initializer();
    setState(979);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(975);
        match(HuTaoParser::COMMA);
        setState(976);
        element_initializer(); 
      }
      setState(981);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
    }
    setState(983);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COMMA) {
      setState(982);
      match(HuTaoParser::COMMA);
    }
    setState(985);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Element_initializerContext ------------------------------------------------------------------

HuTaoParser::Element_initializerContext::Element_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Non_assignment_expressionContext* HuTaoParser::Element_initializerContext::non_assignment_expression() {
  return getRuleContext<HuTaoParser::Non_assignment_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Element_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

HuTaoParser::Expression_listContext* HuTaoParser::Element_initializerContext::expression_list() {
  return getRuleContext<HuTaoParser::Expression_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Element_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}


size_t HuTaoParser::Element_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleElement_initializer;
}

void HuTaoParser::Element_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement_initializer(this);
}

void HuTaoParser::Element_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement_initializer(this);
}

HuTaoParser::Element_initializerContext* HuTaoParser::element_initializer() {
  Element_initializerContext *_localctx = _tracker.createInstance<Element_initializerContext>(_ctx, getState());
  enterRule(_localctx, 100, HuTaoParser::RuleElement_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(992);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(987);
        non_assignment_expression();
        break;
      }

      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(988);
        match(HuTaoParser::OPEN_BRACE);
        setState(989);
        expression_list();
        setState(990);
        match(HuTaoParser::CLOSE_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_object_initializerContext ------------------------------------------------------------------

HuTaoParser::Anonymous_object_initializerContext::Anonymous_object_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Anonymous_object_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Anonymous_object_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Member_declarator_listContext* HuTaoParser::Anonymous_object_initializerContext::member_declarator_list() {
  return getRuleContext<HuTaoParser::Member_declarator_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Anonymous_object_initializerContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Anonymous_object_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleAnonymous_object_initializer;
}

void HuTaoParser::Anonymous_object_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_object_initializer(this);
}

void HuTaoParser::Anonymous_object_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_object_initializer(this);
}

HuTaoParser::Anonymous_object_initializerContext* HuTaoParser::anonymous_object_initializer() {
  Anonymous_object_initializerContext *_localctx = _tracker.createInstance<Anonymous_object_initializerContext>(_ctx, getState());
  enterRule(_localctx, 102, HuTaoParser::RuleAnonymous_object_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(994);
    match(HuTaoParser::OPEN_BRACE);
    setState(999);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(995);
      member_declarator_list();
      setState(997);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(996);
        match(HuTaoParser::COMMA);
      }
    }
    setState(1001);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_declarator_listContext ------------------------------------------------------------------

HuTaoParser::Member_declarator_listContext::Member_declarator_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Member_declaratorContext *> HuTaoParser::Member_declarator_listContext::member_declarator() {
  return getRuleContexts<HuTaoParser::Member_declaratorContext>();
}

HuTaoParser::Member_declaratorContext* HuTaoParser::Member_declarator_listContext::member_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Member_declaratorContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Member_declarator_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Member_declarator_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Member_declarator_listContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_declarator_list;
}

void HuTaoParser::Member_declarator_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_declarator_list(this);
}

void HuTaoParser::Member_declarator_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_declarator_list(this);
}

HuTaoParser::Member_declarator_listContext* HuTaoParser::member_declarator_list() {
  Member_declarator_listContext *_localctx = _tracker.createInstance<Member_declarator_listContext>(_ctx, getState());
  enterRule(_localctx, 104, HuTaoParser::RuleMember_declarator_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1003);
    member_declarator();
    setState(1008);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1004);
        match(HuTaoParser::COMMA);
        setState(1005);
        member_declarator(); 
      }
      setState(1010);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_declaratorContext ------------------------------------------------------------------

HuTaoParser::Member_declaratorContext::Member_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Primary_expressionContext* HuTaoParser::Member_declaratorContext::primary_expression() {
  return getRuleContext<HuTaoParser::Primary_expressionContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Member_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Member_declaratorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Member_declaratorContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Member_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_declarator;
}

void HuTaoParser::Member_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_declarator(this);
}

void HuTaoParser::Member_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_declarator(this);
}

HuTaoParser::Member_declaratorContext* HuTaoParser::member_declarator() {
  Member_declaratorContext *_localctx = _tracker.createInstance<Member_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 106, HuTaoParser::RuleMember_declarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1016);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1011);
      primary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1012);
      identifier();
      setState(1013);
      match(HuTaoParser::ASSIGNMENT);
      setState(1014);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unbound_type_nameContext ------------------------------------------------------------------

HuTaoParser::Unbound_type_nameContext::Unbound_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Unbound_type_nameContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Unbound_type_nameContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

tree::TerminalNode* HuTaoParser::Unbound_type_nameContext::DOUBLE_COLON() {
  return getToken(HuTaoParser::DOUBLE_COLON, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Unbound_type_nameContext::DOT() {
  return getTokens(HuTaoParser::DOT);
}

tree::TerminalNode* HuTaoParser::Unbound_type_nameContext::DOT(size_t i) {
  return getToken(HuTaoParser::DOT, i);
}

std::vector<HuTaoParser::Generic_dimension_specifierContext *> HuTaoParser::Unbound_type_nameContext::generic_dimension_specifier() {
  return getRuleContexts<HuTaoParser::Generic_dimension_specifierContext>();
}

HuTaoParser::Generic_dimension_specifierContext* HuTaoParser::Unbound_type_nameContext::generic_dimension_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Generic_dimension_specifierContext>(i);
}


size_t HuTaoParser::Unbound_type_nameContext::getRuleIndex() const {
  return HuTaoParser::RuleUnbound_type_name;
}

void HuTaoParser::Unbound_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnbound_type_name(this);
}

void HuTaoParser::Unbound_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnbound_type_name(this);
}

HuTaoParser::Unbound_type_nameContext* HuTaoParser::unbound_type_name() {
  Unbound_type_nameContext *_localctx = _tracker.createInstance<Unbound_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 108, HuTaoParser::RuleUnbound_type_name);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1018);
    identifier();
    setState(1027);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::CLOSE_PARENS:
      case HuTaoParser::DOT:
      case HuTaoParser::LT: {
        setState(1020);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::LT) {
          setState(1019);
          generic_dimension_specifier();
        }
        break;
      }

      case HuTaoParser::DOUBLE_COLON: {
        setState(1022);
        match(HuTaoParser::DOUBLE_COLON);
        setState(1023);
        identifier();
        setState(1025);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::LT) {
          setState(1024);
          generic_dimension_specifier();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1036);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::DOT) {
      setState(1029);
      match(HuTaoParser::DOT);
      setState(1030);
      identifier();
      setState(1032);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::LT) {
        setState(1031);
        generic_dimension_specifier();
      }
      setState(1038);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Generic_dimension_specifierContext ------------------------------------------------------------------

HuTaoParser::Generic_dimension_specifierContext::Generic_dimension_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Generic_dimension_specifierContext::LT() {
  return getToken(HuTaoParser::LT, 0);
}

tree::TerminalNode* HuTaoParser::Generic_dimension_specifierContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Generic_dimension_specifierContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Generic_dimension_specifierContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Generic_dimension_specifierContext::getRuleIndex() const {
  return HuTaoParser::RuleGeneric_dimension_specifier;
}

void HuTaoParser::Generic_dimension_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneric_dimension_specifier(this);
}

void HuTaoParser::Generic_dimension_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneric_dimension_specifier(this);
}

HuTaoParser::Generic_dimension_specifierContext* HuTaoParser::generic_dimension_specifier() {
  Generic_dimension_specifierContext *_localctx = _tracker.createInstance<Generic_dimension_specifierContext>(_ctx, getState());
  enterRule(_localctx, 110, HuTaoParser::RuleGeneric_dimension_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1039);
    match(HuTaoParser::LT);
    setState(1043);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1040);
      match(HuTaoParser::COMMA);
      setState(1045);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1046);
    match(HuTaoParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsTypeContext ------------------------------------------------------------------

HuTaoParser::IsTypeContext::IsTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Base_typeContext* HuTaoParser::IsTypeContext::base_type() {
  return getRuleContext<HuTaoParser::Base_typeContext>(0);
}

std::vector<HuTaoParser::Rank_specifierContext *> HuTaoParser::IsTypeContext::rank_specifier() {
  return getRuleContexts<HuTaoParser::Rank_specifierContext>();
}

HuTaoParser::Rank_specifierContext* HuTaoParser::IsTypeContext::rank_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Rank_specifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::IsTypeContext::STAR() {
  return getTokens(HuTaoParser::STAR);
}

tree::TerminalNode* HuTaoParser::IsTypeContext::STAR(size_t i) {
  return getToken(HuTaoParser::STAR, i);
}

tree::TerminalNode* HuTaoParser::IsTypeContext::INTERR() {
  return getToken(HuTaoParser::INTERR, 0);
}

HuTaoParser::IsTypePatternArmsContext* HuTaoParser::IsTypeContext::isTypePatternArms() {
  return getRuleContext<HuTaoParser::IsTypePatternArmsContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::IsTypeContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}


size_t HuTaoParser::IsTypeContext::getRuleIndex() const {
  return HuTaoParser::RuleIsType;
}

void HuTaoParser::IsTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsType(this);
}

void HuTaoParser::IsTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsType(this);
}

HuTaoParser::IsTypeContext* HuTaoParser::isType() {
  IsTypeContext *_localctx = _tracker.createInstance<IsTypeContext>(_ctx, getState());
  enterRule(_localctx, 112, HuTaoParser::RuleIsType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    base_type();
    setState(1053);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::OPEN_BRACKET

    || _la == HuTaoParser::STAR) {
      setState(1051);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::OPEN_BRACKET: {
          setState(1049);
          rank_specifier();
          break;
        }

        case HuTaoParser::STAR: {
          setState(1050);
          match(HuTaoParser::STAR);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1055);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1057);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      setState(1056);
      match(HuTaoParser::INTERR);
      break;
    }

    default:
      break;
    }
    setState(1060);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACE) {
      setState(1059);
      isTypePatternArms();
    }
    setState(1063);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      setState(1062);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsTypePatternArmsContext ------------------------------------------------------------------

HuTaoParser::IsTypePatternArmsContext::IsTypePatternArmsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::IsTypePatternArmsContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

std::vector<HuTaoParser::IsTypePatternArmContext *> HuTaoParser::IsTypePatternArmsContext::isTypePatternArm() {
  return getRuleContexts<HuTaoParser::IsTypePatternArmContext>();
}

HuTaoParser::IsTypePatternArmContext* HuTaoParser::IsTypePatternArmsContext::isTypePatternArm(size_t i) {
  return getRuleContext<HuTaoParser::IsTypePatternArmContext>(i);
}

tree::TerminalNode* HuTaoParser::IsTypePatternArmsContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::IsTypePatternArmsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::IsTypePatternArmsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::IsTypePatternArmsContext::getRuleIndex() const {
  return HuTaoParser::RuleIsTypePatternArms;
}

void HuTaoParser::IsTypePatternArmsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsTypePatternArms(this);
}

void HuTaoParser::IsTypePatternArmsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsTypePatternArms(this);
}

HuTaoParser::IsTypePatternArmsContext* HuTaoParser::isTypePatternArms() {
  IsTypePatternArmsContext *_localctx = _tracker.createInstance<IsTypePatternArmsContext>(_ctx, getState());
  enterRule(_localctx, 114, HuTaoParser::RuleIsTypePatternArms);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1065);
    match(HuTaoParser::OPEN_BRACE);
    setState(1066);
    isTypePatternArm();
    setState(1071);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1067);
      match(HuTaoParser::COMMA);
      setState(1068);
      isTypePatternArm();
      setState(1073);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1074);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsTypePatternArmContext ------------------------------------------------------------------

HuTaoParser::IsTypePatternArmContext::IsTypePatternArmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::IsTypePatternArmContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::IsTypePatternArmContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::IsTypePatternArmContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::IsTypePatternArmContext::getRuleIndex() const {
  return HuTaoParser::RuleIsTypePatternArm;
}

void HuTaoParser::IsTypePatternArmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsTypePatternArm(this);
}

void HuTaoParser::IsTypePatternArmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsTypePatternArm(this);
}

HuTaoParser::IsTypePatternArmContext* HuTaoParser::isTypePatternArm() {
  IsTypePatternArmContext *_localctx = _tracker.createInstance<IsTypePatternArmContext>(_ctx, getState());
  enterRule(_localctx, 116, HuTaoParser::RuleIsTypePatternArm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1076);
    identifier();
    setState(1077);
    match(HuTaoParser::COLON);
    setState(1078);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_expressionContext ------------------------------------------------------------------

HuTaoParser::Lambda_expressionContext::Lambda_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Anonymous_function_signatureContext* HuTaoParser::Lambda_expressionContext::anonymous_function_signature() {
  return getRuleContext<HuTaoParser::Anonymous_function_signatureContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Lambda_expressionContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Anonymous_function_bodyContext* HuTaoParser::Lambda_expressionContext::anonymous_function_body() {
  return getRuleContext<HuTaoParser::Anonymous_function_bodyContext>(0);
}

tree::TerminalNode* HuTaoParser::Lambda_expressionContext::ASYNC() {
  return getToken(HuTaoParser::ASYNC, 0);
}


size_t HuTaoParser::Lambda_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleLambda_expression;
}

void HuTaoParser::Lambda_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda_expression(this);
}

void HuTaoParser::Lambda_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda_expression(this);
}

HuTaoParser::Lambda_expressionContext* HuTaoParser::lambda_expression() {
  Lambda_expressionContext *_localctx = _tracker.createInstance<Lambda_expressionContext>(_ctx, getState());
  enterRule(_localctx, 118, HuTaoParser::RuleLambda_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1081);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(1080);
      match(HuTaoParser::ASYNC);
      break;
    }

    default:
      break;
    }
    setState(1083);
    anonymous_function_signature();
    setState(1084);
    right_arrow();
    setState(1085);
    anonymous_function_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_function_signatureContext ------------------------------------------------------------------

HuTaoParser::Anonymous_function_signatureContext::Anonymous_function_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Anonymous_function_signatureContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Anonymous_function_signatureContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Explicit_anonymous_function_parameter_listContext* HuTaoParser::Anonymous_function_signatureContext::explicit_anonymous_function_parameter_list() {
  return getRuleContext<HuTaoParser::Explicit_anonymous_function_parameter_listContext>(0);
}

HuTaoParser::Implicit_anonymous_function_parameter_listContext* HuTaoParser::Anonymous_function_signatureContext::implicit_anonymous_function_parameter_list() {
  return getRuleContext<HuTaoParser::Implicit_anonymous_function_parameter_listContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Anonymous_function_signatureContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}


size_t HuTaoParser::Anonymous_function_signatureContext::getRuleIndex() const {
  return HuTaoParser::RuleAnonymous_function_signature;
}

void HuTaoParser::Anonymous_function_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_function_signature(this);
}

void HuTaoParser::Anonymous_function_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_function_signature(this);
}

HuTaoParser::Anonymous_function_signatureContext* HuTaoParser::anonymous_function_signature() {
  Anonymous_function_signatureContext *_localctx = _tracker.createInstance<Anonymous_function_signatureContext>(_ctx, getState());
  enterRule(_localctx, 120, HuTaoParser::RuleAnonymous_function_signature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1098);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1087);
      match(HuTaoParser::OPEN_PARENS);
      setState(1088);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1089);
      match(HuTaoParser::OPEN_PARENS);
      setState(1090);
      explicit_anonymous_function_parameter_list();
      setState(1091);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1093);
      match(HuTaoParser::OPEN_PARENS);
      setState(1094);
      implicit_anonymous_function_parameter_list();
      setState(1095);
      match(HuTaoParser::CLOSE_PARENS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1097);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Explicit_anonymous_function_parameter_listContext ------------------------------------------------------------------

HuTaoParser::Explicit_anonymous_function_parameter_listContext::Explicit_anonymous_function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Explicit_anonymous_function_parameterContext *> HuTaoParser::Explicit_anonymous_function_parameter_listContext::explicit_anonymous_function_parameter() {
  return getRuleContexts<HuTaoParser::Explicit_anonymous_function_parameterContext>();
}

HuTaoParser::Explicit_anonymous_function_parameterContext* HuTaoParser::Explicit_anonymous_function_parameter_listContext::explicit_anonymous_function_parameter(size_t i) {
  return getRuleContext<HuTaoParser::Explicit_anonymous_function_parameterContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Explicit_anonymous_function_parameter_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Explicit_anonymous_function_parameter_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Explicit_anonymous_function_parameter_listContext::getRuleIndex() const {
  return HuTaoParser::RuleExplicit_anonymous_function_parameter_list;
}

void HuTaoParser::Explicit_anonymous_function_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicit_anonymous_function_parameter_list(this);
}

void HuTaoParser::Explicit_anonymous_function_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicit_anonymous_function_parameter_list(this);
}

HuTaoParser::Explicit_anonymous_function_parameter_listContext* HuTaoParser::explicit_anonymous_function_parameter_list() {
  Explicit_anonymous_function_parameter_listContext *_localctx = _tracker.createInstance<Explicit_anonymous_function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 122, HuTaoParser::RuleExplicit_anonymous_function_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    explicit_anonymous_function_parameter();
    setState(1105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1101);
      match(HuTaoParser::COMMA);
      setState(1102);
      explicit_anonymous_function_parameter();
      setState(1107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Explicit_anonymous_function_parameterContext ------------------------------------------------------------------

HuTaoParser::Explicit_anonymous_function_parameterContext::Explicit_anonymous_function_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Explicit_anonymous_function_parameterContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Explicit_anonymous_function_parameterContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Explicit_anonymous_function_parameterContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::Explicit_anonymous_function_parameterContext::OUT() {
  return getToken(HuTaoParser::OUT, 0);
}

tree::TerminalNode* HuTaoParser::Explicit_anonymous_function_parameterContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}


size_t HuTaoParser::Explicit_anonymous_function_parameterContext::getRuleIndex() const {
  return HuTaoParser::RuleExplicit_anonymous_function_parameter;
}

void HuTaoParser::Explicit_anonymous_function_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicit_anonymous_function_parameter(this);
}

void HuTaoParser::Explicit_anonymous_function_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicit_anonymous_function_parameter(this);
}

HuTaoParser::Explicit_anonymous_function_parameterContext* HuTaoParser::explicit_anonymous_function_parameter() {
  Explicit_anonymous_function_parameterContext *_localctx = _tracker.createInstance<Explicit_anonymous_function_parameterContext>(_ctx, getState());
  enterRule(_localctx, 124, HuTaoParser::RuleExplicit_anonymous_function_parameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 45) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 45)) & ((1ULL << (HuTaoParser::IN - 45))
      | (1ULL << (HuTaoParser::OUT - 45))
      | (1ULL << (HuTaoParser::REF - 45)))) != 0)) {
      setState(1108);
      dynamic_cast<Explicit_anonymous_function_parameterContext *>(_localctx)->refout = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 45) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 45)) & ((1ULL << (HuTaoParser::IN - 45))
        | (1ULL << (HuTaoParser::OUT - 45))
        | (1ULL << (HuTaoParser::REF - 45)))) != 0))) {
        dynamic_cast<Explicit_anonymous_function_parameterContext *>(_localctx)->refout = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1111);
    type_();
    setState(1112);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implicit_anonymous_function_parameter_listContext ------------------------------------------------------------------

HuTaoParser::Implicit_anonymous_function_parameter_listContext::Implicit_anonymous_function_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Implicit_anonymous_function_parameter_listContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Implicit_anonymous_function_parameter_listContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Implicit_anonymous_function_parameter_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Implicit_anonymous_function_parameter_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Implicit_anonymous_function_parameter_listContext::getRuleIndex() const {
  return HuTaoParser::RuleImplicit_anonymous_function_parameter_list;
}

void HuTaoParser::Implicit_anonymous_function_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplicit_anonymous_function_parameter_list(this);
}

void HuTaoParser::Implicit_anonymous_function_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplicit_anonymous_function_parameter_list(this);
}

HuTaoParser::Implicit_anonymous_function_parameter_listContext* HuTaoParser::implicit_anonymous_function_parameter_list() {
  Implicit_anonymous_function_parameter_listContext *_localctx = _tracker.createInstance<Implicit_anonymous_function_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 126, HuTaoParser::RuleImplicit_anonymous_function_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1114);
    identifier();
    setState(1119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1115);
      match(HuTaoParser::COMMA);
      setState(1116);
      identifier();
      setState(1121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Anonymous_function_bodyContext ------------------------------------------------------------------

HuTaoParser::Anonymous_function_bodyContext::Anonymous_function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Anonymous_function_bodyContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

HuTaoParser::BlockContext* HuTaoParser::Anonymous_function_bodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}


size_t HuTaoParser::Anonymous_function_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleAnonymous_function_body;
}

void HuTaoParser::Anonymous_function_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_function_body(this);
}

void HuTaoParser::Anonymous_function_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_function_body(this);
}

HuTaoParser::Anonymous_function_bodyContext* HuTaoParser::anonymous_function_body() {
  Anonymous_function_bodyContext *_localctx = _tracker.createInstance<Anonymous_function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 128, HuTaoParser::RuleAnonymous_function_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::THROW:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(1122);
        throwable_expression();
        break;
      }

      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1123);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_expressionContext ------------------------------------------------------------------

HuTaoParser::Query_expressionContext::Query_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::From_clauseContext* HuTaoParser::Query_expressionContext::from_clause() {
  return getRuleContext<HuTaoParser::From_clauseContext>(0);
}

HuTaoParser::Query_bodyContext* HuTaoParser::Query_expressionContext::query_body() {
  return getRuleContext<HuTaoParser::Query_bodyContext>(0);
}


size_t HuTaoParser::Query_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleQuery_expression;
}

void HuTaoParser::Query_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_expression(this);
}

void HuTaoParser::Query_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_expression(this);
}

HuTaoParser::Query_expressionContext* HuTaoParser::query_expression() {
  Query_expressionContext *_localctx = _tracker.createInstance<Query_expressionContext>(_ctx, getState());
  enterRule(_localctx, 130, HuTaoParser::RuleQuery_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1126);
    from_clause();
    setState(1127);
    query_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- From_clauseContext ------------------------------------------------------------------

HuTaoParser::From_clauseContext::From_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::From_clauseContext::FROM() {
  return getToken(HuTaoParser::FROM, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::From_clauseContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::From_clauseContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::From_clauseContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Type_Context* HuTaoParser::From_clauseContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}


size_t HuTaoParser::From_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleFrom_clause;
}

void HuTaoParser::From_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrom_clause(this);
}

void HuTaoParser::From_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrom_clause(this);
}

HuTaoParser::From_clauseContext* HuTaoParser::from_clause() {
  From_clauseContext *_localctx = _tracker.createInstance<From_clauseContext>(_ctx, getState());
  enterRule(_localctx, 132, HuTaoParser::RuleFrom_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1129);
    match(HuTaoParser::FROM);
    setState(1131);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      setState(1130);
      type_();
      break;
    }

    default:
      break;
    }
    setState(1133);
    identifier();
    setState(1134);
    match(HuTaoParser::IN);
    setState(1135);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_bodyContext ------------------------------------------------------------------

HuTaoParser::Query_bodyContext::Query_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Select_or_group_clauseContext* HuTaoParser::Query_bodyContext::select_or_group_clause() {
  return getRuleContext<HuTaoParser::Select_or_group_clauseContext>(0);
}

std::vector<HuTaoParser::Query_body_clauseContext *> HuTaoParser::Query_bodyContext::query_body_clause() {
  return getRuleContexts<HuTaoParser::Query_body_clauseContext>();
}

HuTaoParser::Query_body_clauseContext* HuTaoParser::Query_bodyContext::query_body_clause(size_t i) {
  return getRuleContext<HuTaoParser::Query_body_clauseContext>(i);
}

HuTaoParser::Query_continuationContext* HuTaoParser::Query_bodyContext::query_continuation() {
  return getRuleContext<HuTaoParser::Query_continuationContext>(0);
}


size_t HuTaoParser::Query_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleQuery_body;
}

void HuTaoParser::Query_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_body(this);
}

void HuTaoParser::Query_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_body(this);
}

HuTaoParser::Query_bodyContext* HuTaoParser::query_body() {
  Query_bodyContext *_localctx = _tracker.createInstance<Query_bodyContext>(_ctx, getState());
  enterRule(_localctx, 134, HuTaoParser::RuleQuery_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & ((1ULL << (HuTaoParser::FROM - 39))
      | (1ULL << (HuTaoParser::JOIN - 39))
      | (1ULL << (HuTaoParser::LET - 39))
      | (1ULL << (HuTaoParser::ORDERBY - 39))
      | (1ULL << (HuTaoParser::WHERE - 39)))) != 0)) {
      setState(1137);
      query_body_clause();
      setState(1142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1143);
    select_or_group_clause();
    setState(1145);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      setState(1144);
      query_continuation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_body_clauseContext ------------------------------------------------------------------

HuTaoParser::Query_body_clauseContext::Query_body_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::From_clauseContext* HuTaoParser::Query_body_clauseContext::from_clause() {
  return getRuleContext<HuTaoParser::From_clauseContext>(0);
}

HuTaoParser::Let_clauseContext* HuTaoParser::Query_body_clauseContext::let_clause() {
  return getRuleContext<HuTaoParser::Let_clauseContext>(0);
}

HuTaoParser::Where_clauseContext* HuTaoParser::Query_body_clauseContext::where_clause() {
  return getRuleContext<HuTaoParser::Where_clauseContext>(0);
}

HuTaoParser::Combined_join_clauseContext* HuTaoParser::Query_body_clauseContext::combined_join_clause() {
  return getRuleContext<HuTaoParser::Combined_join_clauseContext>(0);
}

HuTaoParser::Orderby_clauseContext* HuTaoParser::Query_body_clauseContext::orderby_clause() {
  return getRuleContext<HuTaoParser::Orderby_clauseContext>(0);
}


size_t HuTaoParser::Query_body_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleQuery_body_clause;
}

void HuTaoParser::Query_body_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_body_clause(this);
}

void HuTaoParser::Query_body_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_body_clause(this);
}

HuTaoParser::Query_body_clauseContext* HuTaoParser::query_body_clause() {
  Query_body_clauseContext *_localctx = _tracker.createInstance<Query_body_clauseContext>(_ctx, getState());
  enterRule(_localctx, 136, HuTaoParser::RuleQuery_body_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::FROM: {
        enterOuterAlt(_localctx, 1);
        setState(1147);
        from_clause();
        break;
      }

      case HuTaoParser::LET: {
        enterOuterAlt(_localctx, 2);
        setState(1148);
        let_clause();
        break;
      }

      case HuTaoParser::WHERE: {
        enterOuterAlt(_localctx, 3);
        setState(1149);
        where_clause();
        break;
      }

      case HuTaoParser::JOIN: {
        enterOuterAlt(_localctx, 4);
        setState(1150);
        combined_join_clause();
        break;
      }

      case HuTaoParser::ORDERBY: {
        enterOuterAlt(_localctx, 5);
        setState(1151);
        orderby_clause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Let_clauseContext ------------------------------------------------------------------

HuTaoParser::Let_clauseContext::Let_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Let_clauseContext::LET() {
  return getToken(HuTaoParser::LET, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Let_clauseContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Let_clauseContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Let_clauseContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Let_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleLet_clause;
}

void HuTaoParser::Let_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLet_clause(this);
}

void HuTaoParser::Let_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLet_clause(this);
}

HuTaoParser::Let_clauseContext* HuTaoParser::let_clause() {
  Let_clauseContext *_localctx = _tracker.createInstance<Let_clauseContext>(_ctx, getState());
  enterRule(_localctx, 138, HuTaoParser::RuleLet_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1154);
    match(HuTaoParser::LET);
    setState(1155);
    identifier();
    setState(1156);
    match(HuTaoParser::ASSIGNMENT);
    setState(1157);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Where_clauseContext ------------------------------------------------------------------

HuTaoParser::Where_clauseContext::Where_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Where_clauseContext::WHERE() {
  return getToken(HuTaoParser::WHERE, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Where_clauseContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Where_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleWhere_clause;
}

void HuTaoParser::Where_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhere_clause(this);
}

void HuTaoParser::Where_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhere_clause(this);
}

HuTaoParser::Where_clauseContext* HuTaoParser::where_clause() {
  Where_clauseContext *_localctx = _tracker.createInstance<Where_clauseContext>(_ctx, getState());
  enterRule(_localctx, 140, HuTaoParser::RuleWhere_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1159);
    match(HuTaoParser::WHERE);
    setState(1160);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Combined_join_clauseContext ------------------------------------------------------------------

HuTaoParser::Combined_join_clauseContext::Combined_join_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Combined_join_clauseContext::JOIN() {
  return getToken(HuTaoParser::JOIN, 0);
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Combined_join_clauseContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Combined_join_clauseContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

tree::TerminalNode* HuTaoParser::Combined_join_clauseContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::Combined_join_clauseContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::Combined_join_clauseContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

tree::TerminalNode* HuTaoParser::Combined_join_clauseContext::ON() {
  return getToken(HuTaoParser::ON, 0);
}

tree::TerminalNode* HuTaoParser::Combined_join_clauseContext::EQUALS() {
  return getToken(HuTaoParser::EQUALS, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Combined_join_clauseContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Combined_join_clauseContext::INTO() {
  return getToken(HuTaoParser::INTO, 0);
}


size_t HuTaoParser::Combined_join_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleCombined_join_clause;
}

void HuTaoParser::Combined_join_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombined_join_clause(this);
}

void HuTaoParser::Combined_join_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombined_join_clause(this);
}

HuTaoParser::Combined_join_clauseContext* HuTaoParser::combined_join_clause() {
  Combined_join_clauseContext *_localctx = _tracker.createInstance<Combined_join_clauseContext>(_ctx, getState());
  enterRule(_localctx, 142, HuTaoParser::RuleCombined_join_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1162);
    match(HuTaoParser::JOIN);
    setState(1164);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(1163);
      type_();
      break;
    }

    default:
      break;
    }
    setState(1166);
    identifier();
    setState(1167);
    match(HuTaoParser::IN);
    setState(1168);
    expression();
    setState(1169);
    match(HuTaoParser::ON);
    setState(1170);
    expression();
    setState(1171);
    match(HuTaoParser::EQUALS);
    setState(1172);
    expression();
    setState(1175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::INTO) {
      setState(1173);
      match(HuTaoParser::INTO);
      setState(1174);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Orderby_clauseContext ------------------------------------------------------------------

HuTaoParser::Orderby_clauseContext::Orderby_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Orderby_clauseContext::ORDERBY() {
  return getToken(HuTaoParser::ORDERBY, 0);
}

std::vector<HuTaoParser::OrderingContext *> HuTaoParser::Orderby_clauseContext::ordering() {
  return getRuleContexts<HuTaoParser::OrderingContext>();
}

HuTaoParser::OrderingContext* HuTaoParser::Orderby_clauseContext::ordering(size_t i) {
  return getRuleContext<HuTaoParser::OrderingContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Orderby_clauseContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Orderby_clauseContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Orderby_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleOrderby_clause;
}

void HuTaoParser::Orderby_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderby_clause(this);
}

void HuTaoParser::Orderby_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderby_clause(this);
}

HuTaoParser::Orderby_clauseContext* HuTaoParser::orderby_clause() {
  Orderby_clauseContext *_localctx = _tracker.createInstance<Orderby_clauseContext>(_ctx, getState());
  enterRule(_localctx, 144, HuTaoParser::RuleOrderby_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1177);
    match(HuTaoParser::ORDERBY);
    setState(1178);
    ordering();
    setState(1183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1179);
      match(HuTaoParser::COMMA);
      setState(1180);
      ordering();
      setState(1185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderingContext ------------------------------------------------------------------

HuTaoParser::OrderingContext::OrderingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::OrderingContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::OrderingContext::ASCENDING() {
  return getToken(HuTaoParser::ASCENDING, 0);
}

tree::TerminalNode* HuTaoParser::OrderingContext::DESCENDING() {
  return getToken(HuTaoParser::DESCENDING, 0);
}


size_t HuTaoParser::OrderingContext::getRuleIndex() const {
  return HuTaoParser::RuleOrdering;
}

void HuTaoParser::OrderingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrdering(this);
}

void HuTaoParser::OrderingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrdering(this);
}

HuTaoParser::OrderingContext* HuTaoParser::ordering() {
  OrderingContext *_localctx = _tracker.createInstance<OrderingContext>(_ctx, getState());
  enterRule(_localctx, 146, HuTaoParser::RuleOrdering);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1186);
    expression();
    setState(1188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::ASCENDING

    || _la == HuTaoParser::DESCENDING) {
      setState(1187);
      dynamic_cast<OrderingContext *>(_localctx)->dir = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == HuTaoParser::ASCENDING

      || _la == HuTaoParser::DESCENDING)) {
        dynamic_cast<OrderingContext *>(_localctx)->dir = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_or_group_clauseContext ------------------------------------------------------------------

HuTaoParser::Select_or_group_clauseContext::Select_or_group_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Select_or_group_clauseContext::SELECT() {
  return getToken(HuTaoParser::SELECT, 0);
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::Select_or_group_clauseContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::Select_or_group_clauseContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

tree::TerminalNode* HuTaoParser::Select_or_group_clauseContext::GROUP() {
  return getToken(HuTaoParser::GROUP, 0);
}

tree::TerminalNode* HuTaoParser::Select_or_group_clauseContext::BY() {
  return getToken(HuTaoParser::BY, 0);
}


size_t HuTaoParser::Select_or_group_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleSelect_or_group_clause;
}

void HuTaoParser::Select_or_group_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_or_group_clause(this);
}

void HuTaoParser::Select_or_group_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_or_group_clause(this);
}

HuTaoParser::Select_or_group_clauseContext* HuTaoParser::select_or_group_clause() {
  Select_or_group_clauseContext *_localctx = _tracker.createInstance<Select_or_group_clauseContext>(_ctx, getState());
  enterRule(_localctx, 148, HuTaoParser::RuleSelect_or_group_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(1190);
        match(HuTaoParser::SELECT);
        setState(1191);
        expression();
        break;
      }

      case HuTaoParser::GROUP: {
        enterOuterAlt(_localctx, 2);
        setState(1192);
        match(HuTaoParser::GROUP);
        setState(1193);
        expression();
        setState(1194);
        match(HuTaoParser::BY);
        setState(1195);
        expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_continuationContext ------------------------------------------------------------------

HuTaoParser::Query_continuationContext::Query_continuationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Query_continuationContext::INTO() {
  return getToken(HuTaoParser::INTO, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Query_continuationContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Query_bodyContext* HuTaoParser::Query_continuationContext::query_body() {
  return getRuleContext<HuTaoParser::Query_bodyContext>(0);
}


size_t HuTaoParser::Query_continuationContext::getRuleIndex() const {
  return HuTaoParser::RuleQuery_continuation;
}

void HuTaoParser::Query_continuationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_continuation(this);
}

void HuTaoParser::Query_continuationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_continuation(this);
}

HuTaoParser::Query_continuationContext* HuTaoParser::query_continuation() {
  Query_continuationContext *_localctx = _tracker.createInstance<Query_continuationContext>(_ctx, getState());
  enterRule(_localctx, 150, HuTaoParser::RuleQuery_continuation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(HuTaoParser::INTO);
    setState(1200);
    identifier();
    setState(1201);
    query_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

HuTaoParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Labeled_StatementContext* HuTaoParser::StatementContext::labeled_Statement() {
  return getRuleContext<HuTaoParser::Labeled_StatementContext>(0);
}

HuTaoParser::DeclarationStatementContext* HuTaoParser::StatementContext::declarationStatement() {
  return getRuleContext<HuTaoParser::DeclarationStatementContext>(0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::StatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}


size_t HuTaoParser::StatementContext::getRuleIndex() const {
  return HuTaoParser::RuleStatement;
}

void HuTaoParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void HuTaoParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

HuTaoParser::StatementContext* HuTaoParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 152, HuTaoParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1203);
      labeled_Statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1204);
      declarationStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1205);
      embedded_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

HuTaoParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Local_variable_declarationContext* HuTaoParser::DeclarationStatementContext::local_variable_declaration() {
  return getRuleContext<HuTaoParser::Local_variable_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::DeclarationStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::Local_constant_declarationContext* HuTaoParser::DeclarationStatementContext::local_constant_declaration() {
  return getRuleContext<HuTaoParser::Local_constant_declarationContext>(0);
}

HuTaoParser::Local_function_declarationContext* HuTaoParser::DeclarationStatementContext::local_function_declaration() {
  return getRuleContext<HuTaoParser::Local_function_declarationContext>(0);
}


size_t HuTaoParser::DeclarationStatementContext::getRuleIndex() const {
  return HuTaoParser::RuleDeclarationStatement;
}

void HuTaoParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void HuTaoParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}

HuTaoParser::DeclarationStatementContext* HuTaoParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, HuTaoParser::RuleDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1208);
      local_variable_declaration();
      setState(1209);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1211);
      local_constant_declaration();
      setState(1212);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1214);
      local_function_declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_function_declarationContext ------------------------------------------------------------------

HuTaoParser::Local_function_declarationContext::Local_function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Local_function_headerContext* HuTaoParser::Local_function_declarationContext::local_function_header() {
  return getRuleContext<HuTaoParser::Local_function_headerContext>(0);
}

HuTaoParser::Local_function_bodyContext* HuTaoParser::Local_function_declarationContext::local_function_body() {
  return getRuleContext<HuTaoParser::Local_function_bodyContext>(0);
}


size_t HuTaoParser::Local_function_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_function_declaration;
}

void HuTaoParser::Local_function_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_function_declaration(this);
}

void HuTaoParser::Local_function_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_function_declaration(this);
}

HuTaoParser::Local_function_declarationContext* HuTaoParser::local_function_declaration() {
  Local_function_declarationContext *_localctx = _tracker.createInstance<Local_function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 156, HuTaoParser::RuleLocal_function_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1217);
    local_function_header();
    setState(1218);
    local_function_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_function_headerContext ------------------------------------------------------------------

HuTaoParser::Local_function_headerContext::Local_function_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Return_typeContext* HuTaoParser::Local_function_headerContext::return_type() {
  return getRuleContext<HuTaoParser::Return_typeContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Local_function_headerContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Local_function_headerContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Local_function_headerContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Local_function_modifiersContext* HuTaoParser::Local_function_headerContext::local_function_modifiers() {
  return getRuleContext<HuTaoParser::Local_function_modifiersContext>(0);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::Local_function_headerContext::type_parameter_list() {
  return getRuleContext<HuTaoParser::Type_parameter_listContext>(0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Local_function_headerContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Local_function_headerContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}


size_t HuTaoParser::Local_function_headerContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_function_header;
}

void HuTaoParser::Local_function_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_function_header(this);
}

void HuTaoParser::Local_function_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_function_header(this);
}

HuTaoParser::Local_function_headerContext* HuTaoParser::local_function_header() {
  Local_function_headerContext *_localctx = _tracker.createInstance<Local_function_headerContext>(_ctx, getState());
  enterRule(_localctx, 158, HuTaoParser::RuleLocal_function_header);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1221);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      setState(1220);
      local_function_modifiers();
      break;
    }

    default:
      break;
    }
    setState(1223);
    return_type();
    setState(1224);
    identifier();
    setState(1226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(1225);
      type_parameter_list();
    }
    setState(1228);
    match(HuTaoParser::OPEN_PARENS);
    setState(1230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT)
      | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(1229);
      formal_parameter_list();
    }
    setState(1232);
    match(HuTaoParser::CLOSE_PARENS);
    setState(1234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(1233);
      type_parameter_constraints_clauses();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_function_modifiersContext ------------------------------------------------------------------

HuTaoParser::Local_function_modifiersContext::Local_function_modifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Local_function_modifiersContext::ASYNC() {
  return getToken(HuTaoParser::ASYNC, 0);
}

tree::TerminalNode* HuTaoParser::Local_function_modifiersContext::UNSAFE() {
  return getToken(HuTaoParser::UNSAFE, 0);
}

tree::TerminalNode* HuTaoParser::Local_function_modifiersContext::STATIC() {
  return getToken(HuTaoParser::STATIC, 0);
}


size_t HuTaoParser::Local_function_modifiersContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_function_modifiers;
}

void HuTaoParser::Local_function_modifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_function_modifiers(this);
}

void HuTaoParser::Local_function_modifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_function_modifiers(this);
}

HuTaoParser::Local_function_modifiersContext* HuTaoParser::local_function_modifiers() {
  Local_function_modifiersContext *_localctx = _tracker.createInstance<Local_function_modifiersContext>(_ctx, getState());
  enterRule(_localctx, 160, HuTaoParser::RuleLocal_function_modifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ASYNC:
      case HuTaoParser::UNSAFE: {
        enterOuterAlt(_localctx, 1);
        setState(1236);
        _la = _input->LA(1);
        if (!(_la == HuTaoParser::ASYNC || _la == HuTaoParser::UNSAFE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1238);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::STATIC) {
          setState(1237);
          match(HuTaoParser::STATIC);
        }
        break;
      }

      case HuTaoParser::STATIC: {
        enterOuterAlt(_localctx, 2);
        setState(1240);
        match(HuTaoParser::STATIC);
        setState(1241);
        _la = _input->LA(1);
        if (!(_la == HuTaoParser::ASYNC || _la == HuTaoParser::UNSAFE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_function_bodyContext ------------------------------------------------------------------

HuTaoParser::Local_function_bodyContext::Local_function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::Local_function_bodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Local_function_bodyContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Local_function_bodyContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Local_function_bodyContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Local_function_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_function_body;
}

void HuTaoParser::Local_function_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_function_body(this);
}

void HuTaoParser::Local_function_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_function_body(this);
}

HuTaoParser::Local_function_bodyContext* HuTaoParser::local_function_body() {
  Local_function_bodyContext *_localctx = _tracker.createInstance<Local_function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 162, HuTaoParser::RuleLocal_function_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1249);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1244);
        block();
        break;
      }

      case HuTaoParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 2);
        setState(1245);
        right_arrow();
        setState(1246);
        throwable_expression();
        setState(1247);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Labeled_StatementContext ------------------------------------------------------------------

HuTaoParser::Labeled_StatementContext::Labeled_StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Labeled_StatementContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Labeled_StatementContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::StatementContext* HuTaoParser::Labeled_StatementContext::statement() {
  return getRuleContext<HuTaoParser::StatementContext>(0);
}


size_t HuTaoParser::Labeled_StatementContext::getRuleIndex() const {
  return HuTaoParser::RuleLabeled_Statement;
}

void HuTaoParser::Labeled_StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeled_Statement(this);
}

void HuTaoParser::Labeled_StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeled_Statement(this);
}

HuTaoParser::Labeled_StatementContext* HuTaoParser::labeled_Statement() {
  Labeled_StatementContext *_localctx = _tracker.createInstance<Labeled_StatementContext>(_ctx, getState());
  enterRule(_localctx, 164, HuTaoParser::RuleLabeled_Statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1251);
    identifier();
    setState(1252);
    match(HuTaoParser::COLON);
    setState(1253);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Embedded_statementContext ------------------------------------------------------------------

HuTaoParser::Embedded_statementContext::Embedded_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::Embedded_statementContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Simple_embedded_statementContext* HuTaoParser::Embedded_statementContext::simple_embedded_statement() {
  return getRuleContext<HuTaoParser::Simple_embedded_statementContext>(0);
}


size_t HuTaoParser::Embedded_statementContext::getRuleIndex() const {
  return HuTaoParser::RuleEmbedded_statement;
}

void HuTaoParser::Embedded_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmbedded_statement(this);
}

void HuTaoParser::Embedded_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmbedded_statement(this);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::embedded_statement() {
  Embedded_statementContext *_localctx = _tracker.createInstance<Embedded_statementContext>(_ctx, getState());
  enterRule(_localctx, 166, HuTaoParser::RuleEmbedded_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1255);
        block();
        break;
      }

      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BREAK:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::CONTINUE:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::DO:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FIXED:
      case HuTaoParser::FOR:
      case HuTaoParser::FOREACH:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GOTO:
      case HuTaoParser::GROUP:
      case HuTaoParser::IF:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::LOCK:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::RETURN:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::SWITCH:
      case HuTaoParser::THIS:
      case HuTaoParser::THROW:
      case HuTaoParser::TRUE:
      case HuTaoParser::TRY:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::UNSAFE:
      case HuTaoParser::USING:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::WHILE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::SEMICOLON:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 2);
        setState(1256);
        simple_embedded_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_embedded_statementContext ------------------------------------------------------------------

HuTaoParser::Simple_embedded_statementContext::Simple_embedded_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuTaoParser::Simple_embedded_statementContext::getRuleIndex() const {
  return HuTaoParser::RuleSimple_embedded_statement;
}

void HuTaoParser::Simple_embedded_statementContext::copyFrom(Simple_embedded_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TryStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::TryStatementContext::TRY() {
  return getToken(HuTaoParser::TRY, 0);
}

HuTaoParser::BlockContext* HuTaoParser::TryStatementContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Catch_clausesContext* HuTaoParser::TryStatementContext::catch_clauses() {
  return getRuleContext<HuTaoParser::Catch_clausesContext>(0);
}

HuTaoParser::Finally_clauseContext* HuTaoParser::TryStatementContext::finally_clause() {
  return getRuleContext<HuTaoParser::Finally_clauseContext>(0);
}

HuTaoParser::TryStatementContext::TryStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}
void HuTaoParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}
//----------------- CheckedStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::CheckedStatementContext::CHECKED() {
  return getToken(HuTaoParser::CHECKED, 0);
}

HuTaoParser::BlockContext* HuTaoParser::CheckedStatementContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::CheckedStatementContext::CheckedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::CheckedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckedStatement(this);
}
void HuTaoParser::CheckedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckedStatement(this);
}
//----------------- ThrowStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ThrowStatementContext::THROW() {
  return getToken(HuTaoParser::THROW, 0);
}

tree::TerminalNode* HuTaoParser::ThrowStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::ThrowStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::ThrowStatementContext::ThrowStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}
void HuTaoParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}
//----------------- TheEmptyStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::TheEmptyStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::TheEmptyStatementContext::TheEmptyStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::TheEmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheEmptyStatement(this);
}
void HuTaoParser::TheEmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheEmptyStatement(this);
}
//----------------- UnsafeStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::UnsafeStatementContext::UNSAFE() {
  return getToken(HuTaoParser::UNSAFE, 0);
}

HuTaoParser::BlockContext* HuTaoParser::UnsafeStatementContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::UnsafeStatementContext::UnsafeStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::UnsafeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsafeStatement(this);
}
void HuTaoParser::UnsafeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsafeStatement(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ForStatementContext::FOR() {
  return getToken(HuTaoParser::FOR, 0);
}

tree::TerminalNode* HuTaoParser::ForStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::ForStatementContext::SEMICOLON() {
  return getTokens(HuTaoParser::SEMICOLON);
}

tree::TerminalNode* HuTaoParser::ForStatementContext::SEMICOLON(size_t i) {
  return getToken(HuTaoParser::SEMICOLON, i);
}

tree::TerminalNode* HuTaoParser::ForStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::ForStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

HuTaoParser::For_initializerContext* HuTaoParser::ForStatementContext::for_initializer() {
  return getRuleContext<HuTaoParser::For_initializerContext>(0);
}

HuTaoParser::ExpressionContext* HuTaoParser::ForStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::For_iteratorContext* HuTaoParser::ForStatementContext::for_iterator() {
  return getRuleContext<HuTaoParser::For_iteratorContext>(0);
}

HuTaoParser::ForStatementContext::ForStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void HuTaoParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::BreakStatementContext::BREAK() {
  return getToken(HuTaoParser::BREAK, 0);
}

tree::TerminalNode* HuTaoParser::BreakStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::BreakStatementContext::BreakStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}
void HuTaoParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::IfStatementContext::IF() {
  return getToken(HuTaoParser::IF, 0);
}

tree::TerminalNode* HuTaoParser::IfStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::IfStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::IfStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

std::vector<HuTaoParser::If_bodyContext *> HuTaoParser::IfStatementContext::if_body() {
  return getRuleContexts<HuTaoParser::If_bodyContext>();
}

HuTaoParser::If_bodyContext* HuTaoParser::IfStatementContext::if_body(size_t i) {
  return getRuleContext<HuTaoParser::If_bodyContext>(i);
}

tree::TerminalNode* HuTaoParser::IfStatementContext::ELSE() {
  return getToken(HuTaoParser::ELSE, 0);
}

HuTaoParser::IfStatementContext::IfStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void HuTaoParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ReturnStatementContext::RETURN() {
  return getToken(HuTaoParser::RETURN, 0);
}

tree::TerminalNode* HuTaoParser::ReturnStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::ReturnStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::ReturnStatementContext::ReturnStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void HuTaoParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}
//----------------- GotoStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::GotoStatementContext::GOTO() {
  return getToken(HuTaoParser::GOTO, 0);
}

tree::TerminalNode* HuTaoParser::GotoStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::GotoStatementContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::GotoStatementContext::CASE() {
  return getToken(HuTaoParser::CASE, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::GotoStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::GotoStatementContext::DEFAULT() {
  return getToken(HuTaoParser::DEFAULT, 0);
}

HuTaoParser::GotoStatementContext::GotoStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}
void HuTaoParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}
//----------------- SwitchStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::SwitchStatementContext::SWITCH() {
  return getToken(HuTaoParser::SWITCH, 0);
}

tree::TerminalNode* HuTaoParser::SwitchStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::SwitchStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::SwitchStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::SwitchStatementContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::SwitchStatementContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<HuTaoParser::Switch_sectionContext *> HuTaoParser::SwitchStatementContext::switch_section() {
  return getRuleContexts<HuTaoParser::Switch_sectionContext>();
}

HuTaoParser::Switch_sectionContext* HuTaoParser::SwitchStatementContext::switch_section(size_t i) {
  return getRuleContext<HuTaoParser::Switch_sectionContext>(i);
}

HuTaoParser::SwitchStatementContext::SwitchStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}
void HuTaoParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}
//----------------- FixedStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::FixedStatementContext::FIXED() {
  return getToken(HuTaoParser::FIXED, 0);
}

tree::TerminalNode* HuTaoParser::FixedStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Pointer_typeContext* HuTaoParser::FixedStatementContext::pointer_type() {
  return getRuleContext<HuTaoParser::Pointer_typeContext>(0);
}

HuTaoParser::Fixed_pointer_declaratorsContext* HuTaoParser::FixedStatementContext::fixed_pointer_declarators() {
  return getRuleContext<HuTaoParser::Fixed_pointer_declaratorsContext>(0);
}

tree::TerminalNode* HuTaoParser::FixedStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::FixedStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

HuTaoParser::FixedStatementContext::FixedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::FixedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedStatement(this);
}
void HuTaoParser::FixedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedStatement(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::WhileStatementContext::WHILE() {
  return getToken(HuTaoParser::WHILE, 0);
}

tree::TerminalNode* HuTaoParser::WhileStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::WhileStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::WhileStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::WhileStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

HuTaoParser::WhileStatementContext::WhileStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void HuTaoParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}
//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::DoStatementContext::DO() {
  return getToken(HuTaoParser::DO, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::DoStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

tree::TerminalNode* HuTaoParser::DoStatementContext::WHILE() {
  return getToken(HuTaoParser::WHILE, 0);
}

tree::TerminalNode* HuTaoParser::DoStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::DoStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::DoStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::DoStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::DoStatementContext::DoStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void HuTaoParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}
//----------------- ForeachStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ForeachStatementContext::FOREACH() {
  return getToken(HuTaoParser::FOREACH, 0);
}

tree::TerminalNode* HuTaoParser::ForeachStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Local_variable_typeContext* HuTaoParser::ForeachStatementContext::local_variable_type() {
  return getRuleContext<HuTaoParser::Local_variable_typeContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::ForeachStatementContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::ForeachStatementContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::ForeachStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::ForeachStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::ForeachStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

tree::TerminalNode* HuTaoParser::ForeachStatementContext::AWAIT() {
  return getToken(HuTaoParser::AWAIT, 0);
}

HuTaoParser::ForeachStatementContext::ForeachStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachStatement(this);
}
void HuTaoParser::ForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachStatement(this);
}
//----------------- UncheckedStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::UncheckedStatementContext::UNCHECKED() {
  return getToken(HuTaoParser::UNCHECKED, 0);
}

HuTaoParser::BlockContext* HuTaoParser::UncheckedStatementContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::UncheckedStatementContext::UncheckedStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::UncheckedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUncheckedStatement(this);
}
void HuTaoParser::UncheckedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUncheckedStatement(this);
}
//----------------- ExpressionStatementContext ------------------------------------------------------------------

HuTaoParser::ExpressionContext* HuTaoParser::ExpressionStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::ExpressionStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::ExpressionStatementContext::ExpressionStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}
void HuTaoParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::ContinueStatementContext::CONTINUE() {
  return getToken(HuTaoParser::CONTINUE, 0);
}

tree::TerminalNode* HuTaoParser::ContinueStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::ContinueStatementContext::ContinueStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}
void HuTaoParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}
//----------------- UsingStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::UsingStatementContext::USING() {
  return getToken(HuTaoParser::USING, 0);
}

tree::TerminalNode* HuTaoParser::UsingStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Resource_acquisitionContext* HuTaoParser::UsingStatementContext::resource_acquisition() {
  return getRuleContext<HuTaoParser::Resource_acquisitionContext>(0);
}

tree::TerminalNode* HuTaoParser::UsingStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::UsingStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

HuTaoParser::UsingStatementContext::UsingStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::UsingStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingStatement(this);
}
void HuTaoParser::UsingStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingStatement(this);
}
//----------------- LockStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::LockStatementContext::LOCK() {
  return getToken(HuTaoParser::LOCK, 0);
}

tree::TerminalNode* HuTaoParser::LockStatementContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::LockStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::LockStatementContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Embedded_statementContext* HuTaoParser::LockStatementContext::embedded_statement() {
  return getRuleContext<HuTaoParser::Embedded_statementContext>(0);
}

HuTaoParser::LockStatementContext::LockStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::LockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLockStatement(this);
}
void HuTaoParser::LockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLockStatement(this);
}
//----------------- YieldStatementContext ------------------------------------------------------------------

tree::TerminalNode* HuTaoParser::YieldStatementContext::YIELD() {
  return getToken(HuTaoParser::YIELD, 0);
}

tree::TerminalNode* HuTaoParser::YieldStatementContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

tree::TerminalNode* HuTaoParser::YieldStatementContext::RETURN() {
  return getToken(HuTaoParser::RETURN, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::YieldStatementContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::YieldStatementContext::BREAK() {
  return getToken(HuTaoParser::BREAK, 0);
}

HuTaoParser::YieldStatementContext::YieldStatementContext(Simple_embedded_statementContext *ctx) { copyFrom(ctx); }

void HuTaoParser::YieldStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldStatement(this);
}
void HuTaoParser::YieldStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldStatement(this);
}
HuTaoParser::Simple_embedded_statementContext* HuTaoParser::simple_embedded_statement() {
  Simple_embedded_statementContext *_localctx = _tracker.createInstance<Simple_embedded_statementContext>(_ctx, getState());
  enterRule(_localctx, 168, HuTaoParser::RuleSimple_embedded_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::TheEmptyStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1259);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ExpressionStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1260);
      expression();
      setState(1261);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::IfStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1263);
      match(HuTaoParser::IF);
      setState(1264);
      match(HuTaoParser::OPEN_PARENS);
      setState(1265);
      expression();
      setState(1266);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1267);
      if_body();
      setState(1270);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
      case 1: {
        setState(1268);
        match(HuTaoParser::ELSE);
        setState(1269);
        if_body();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::SwitchStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1272);
      match(HuTaoParser::SWITCH);
      setState(1273);
      match(HuTaoParser::OPEN_PARENS);
      setState(1274);
      expression();
      setState(1275);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1276);
      match(HuTaoParser::OPEN_BRACE);
      setState(1280);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HuTaoParser::CASE

      || _la == HuTaoParser::DEFAULT) {
        setState(1277);
        switch_section();
        setState(1282);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1283);
      match(HuTaoParser::CLOSE_BRACE);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::WhileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1285);
      match(HuTaoParser::WHILE);
      setState(1286);
      match(HuTaoParser::OPEN_PARENS);
      setState(1287);
      expression();
      setState(1288);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1289);
      embedded_statement();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::DoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1291);
      match(HuTaoParser::DO);
      setState(1292);
      embedded_statement();
      setState(1293);
      match(HuTaoParser::WHILE);
      setState(1294);
      match(HuTaoParser::OPEN_PARENS);
      setState(1295);
      expression();
      setState(1296);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1297);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ForStatementContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1299);
      match(HuTaoParser::FOR);
      setState(1300);
      match(HuTaoParser::OPEN_PARENS);
      setState(1302);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FIXED)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::USING - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::VOID - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(1301);
        for_initializer();
      }
      setState(1304);
      match(HuTaoParser::SEMICOLON);
      setState(1306);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(1305);
        expression();
      }
      setState(1308);
      match(HuTaoParser::SEMICOLON);
      setState(1310);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(1309);
        for_iterator();
      }
      setState(1312);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1313);
      embedded_statement();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ForeachStatementContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1315);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::AWAIT) {
        setState(1314);
        match(HuTaoParser::AWAIT);
      }
      setState(1317);
      match(HuTaoParser::FOREACH);
      setState(1318);
      match(HuTaoParser::OPEN_PARENS);
      setState(1319);
      local_variable_type();
      setState(1320);
      identifier();
      setState(1321);
      match(HuTaoParser::IN);
      setState(1322);
      expression();
      setState(1323);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1324);
      embedded_statement();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::BreakStatementContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1326);
      match(HuTaoParser::BREAK);
      setState(1327);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ContinueStatementContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1328);
      match(HuTaoParser::CONTINUE);
      setState(1329);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::GotoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(1330);
      match(HuTaoParser::GOTO);
      setState(1335);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::ADD:
        case HuTaoParser::ALIAS:
        case HuTaoParser::ASCENDING:
        case HuTaoParser::ASYNC:
        case HuTaoParser::AWAIT:
        case HuTaoParser::BY:
        case HuTaoParser::EQUALS:
        case HuTaoParser::FROM:
        case HuTaoParser::GET:
        case HuTaoParser::GROUP:
        case HuTaoParser::INTO:
        case HuTaoParser::JOIN:
        case HuTaoParser::LET:
        case HuTaoParser::NAMEOF:
        case HuTaoParser::ON:
        case HuTaoParser::ORDERBY:
        case HuTaoParser::PARTIAL:
        case HuTaoParser::REMOVE:
        case HuTaoParser::SELECT:
        case HuTaoParser::SET:
        case HuTaoParser::UNMANAGED:
        case HuTaoParser::VAR:
        case HuTaoParser::WHEN:
        case HuTaoParser::WHERE:
        case HuTaoParser::YIELD:
        case HuTaoParser::IDENTIFIER: {
          setState(1331);
          identifier();
          break;
        }

        case HuTaoParser::CASE: {
          setState(1332);
          match(HuTaoParser::CASE);
          setState(1333);
          expression();
          break;
        }

        case HuTaoParser::DEFAULT: {
          setState(1334);
          match(HuTaoParser::DEFAULT);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1337);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ReturnStatementContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(1338);
      match(HuTaoParser::RETURN);
      setState(1340);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(1339);
        expression();
      }
      setState(1342);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::ThrowStatementContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(1343);
      match(HuTaoParser::THROW);
      setState(1345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(1344);
        expression();
      }
      setState(1347);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::TryStatementContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(1348);
      match(HuTaoParser::TRY);
      setState(1349);
      block();
      setState(1355);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::CATCH: {
          setState(1350);
          catch_clauses();
          setState(1352);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == HuTaoParser::FINALLY) {
            setState(1351);
            finally_clause();
          }
          break;
        }

        case HuTaoParser::FINALLY: {
          setState(1354);
          finally_clause();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 15: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::CheckedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(1357);
      match(HuTaoParser::CHECKED);
      setState(1358);
      block();
      break;
    }

    case 16: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::UncheckedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(1359);
      match(HuTaoParser::UNCHECKED);
      setState(1360);
      block();
      break;
    }

    case 17: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::LockStatementContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(1361);
      match(HuTaoParser::LOCK);
      setState(1362);
      match(HuTaoParser::OPEN_PARENS);
      setState(1363);
      expression();
      setState(1364);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1365);
      embedded_statement();
      break;
    }

    case 18: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::UsingStatementContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(1367);
      match(HuTaoParser::USING);
      setState(1368);
      match(HuTaoParser::OPEN_PARENS);
      setState(1369);
      resource_acquisition();
      setState(1370);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1371);
      embedded_statement();
      break;
    }

    case 19: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::YieldStatementContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(1373);
      match(HuTaoParser::YIELD);
      setState(1377);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::RETURN: {
          setState(1374);
          match(HuTaoParser::RETURN);
          setState(1375);
          expression();
          break;
        }

        case HuTaoParser::BREAK: {
          setState(1376);
          match(HuTaoParser::BREAK);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1379);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::UnsafeStatementContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(1380);
      match(HuTaoParser::UNSAFE);
      setState(1381);
      block();
      break;
    }

    case 21: {
      _localctx = dynamic_cast<Simple_embedded_statementContext *>(_tracker.createInstance<HuTaoParser::FixedStatementContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(1382);
      match(HuTaoParser::FIXED);
      setState(1383);
      match(HuTaoParser::OPEN_PARENS);
      setState(1384);
      pointer_type();
      setState(1385);
      fixed_pointer_declarators();
      setState(1386);
      match(HuTaoParser::CLOSE_PARENS);
      setState(1387);
      embedded_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

HuTaoParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::BlockContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::BlockContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Statement_listContext* HuTaoParser::BlockContext::statement_list() {
  return getRuleContext<HuTaoParser::Statement_listContext>(0);
}


size_t HuTaoParser::BlockContext::getRuleIndex() const {
  return HuTaoParser::RuleBlock;
}

void HuTaoParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void HuTaoParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

HuTaoParser::BlockContext* HuTaoParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 170, HuTaoParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1391);
    match(HuTaoParser::OPEN_BRACE);
    setState(1393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BREAK)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::CONST)
      | (1ULL << HuTaoParser::CONTINUE)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::DO)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FIXED)
      | (1ULL << HuTaoParser::FOR)
      | (1ULL << HuTaoParser::FOREACH)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GOTO)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IF)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::LOCK)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::RETURN - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::SWITCH - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::THROW - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TRY - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::USING - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::WHILE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACE - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64))
      | (1ULL << (HuTaoParser::SEMICOLON - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
      | (1ULL << (HuTaoParser::MINUS - 128))
      | (1ULL << (HuTaoParser::STAR - 128))
      | (1ULL << (HuTaoParser::AMP - 128))
      | (1ULL << (HuTaoParser::CARET - 128))
      | (1ULL << (HuTaoParser::BANG - 128))
      | (1ULL << (HuTaoParser::TILDE - 128))
      | (1ULL << (HuTaoParser::OP_INC - 128))
      | (1ULL << (HuTaoParser::OP_DEC - 128))
      | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
      setState(1392);
      statement_list();
    }
    setState(1395);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_declarationContext ------------------------------------------------------------------

HuTaoParser::Local_variable_declarationContext::Local_variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Local_variable_typeContext* HuTaoParser::Local_variable_declarationContext::local_variable_type() {
  return getRuleContext<HuTaoParser::Local_variable_typeContext>(0);
}

std::vector<HuTaoParser::Local_variable_declaratorContext *> HuTaoParser::Local_variable_declarationContext::local_variable_declarator() {
  return getRuleContexts<HuTaoParser::Local_variable_declaratorContext>();
}

HuTaoParser::Local_variable_declaratorContext* HuTaoParser::Local_variable_declarationContext::local_variable_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Local_variable_declaratorContext>(i);
}

tree::TerminalNode* HuTaoParser::Local_variable_declarationContext::USING() {
  return getToken(HuTaoParser::USING, 0);
}

tree::TerminalNode* HuTaoParser::Local_variable_declarationContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::Local_variable_declarationContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Local_variable_declarationContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Local_variable_declarationContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}

tree::TerminalNode* HuTaoParser::Local_variable_declarationContext::FIXED() {
  return getToken(HuTaoParser::FIXED, 0);
}

HuTaoParser::Pointer_typeContext* HuTaoParser::Local_variable_declarationContext::pointer_type() {
  return getRuleContext<HuTaoParser::Pointer_typeContext>(0);
}

HuTaoParser::Fixed_pointer_declaratorsContext* HuTaoParser::Local_variable_declarationContext::fixed_pointer_declarators() {
  return getRuleContext<HuTaoParser::Fixed_pointer_declaratorsContext>(0);
}


size_t HuTaoParser::Local_variable_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_variable_declaration;
}

void HuTaoParser::Local_variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_declaration(this);
}

void HuTaoParser::Local_variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_declaration(this);
}

HuTaoParser::Local_variable_declarationContext* HuTaoParser::local_variable_declaration() {
  Local_variable_declarationContext *_localctx = _tracker.createInstance<Local_variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 172, HuTaoParser::RuleLocal_variable_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::USING:
      case HuTaoParser::VAR:
      case HuTaoParser::VOID:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS: {
        enterOuterAlt(_localctx, 1);
        setState(1401);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
        case 1: {
          setState(1397);
          match(HuTaoParser::USING);
          break;
        }

        case 2: {
          setState(1398);
          match(HuTaoParser::REF);
          break;
        }

        case 3: {
          setState(1399);
          match(HuTaoParser::REF);
          setState(1400);
          match(HuTaoParser::READONLY);
          break;
        }

        default:
          break;
        }
        setState(1403);
        local_variable_type();
        setState(1404);
        local_variable_declarator();
        setState(1409);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == HuTaoParser::COMMA) {
          setState(1405);
          match(HuTaoParser::COMMA);
          setState(1406);
          local_variable_declarator();
          setState(1411);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case HuTaoParser::FIXED: {
        enterOuterAlt(_localctx, 2);
        setState(1412);
        match(HuTaoParser::FIXED);
        setState(1413);
        pointer_type();
        setState(1414);
        fixed_pointer_declarators();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_typeContext ------------------------------------------------------------------

HuTaoParser::Local_variable_typeContext::Local_variable_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Local_variable_typeContext::VAR() {
  return getToken(HuTaoParser::VAR, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Local_variable_typeContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}


size_t HuTaoParser::Local_variable_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_variable_type;
}

void HuTaoParser::Local_variable_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_type(this);
}

void HuTaoParser::Local_variable_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_type(this);
}

HuTaoParser::Local_variable_typeContext* HuTaoParser::local_variable_type() {
  Local_variable_typeContext *_localctx = _tracker.createInstance<Local_variable_typeContext>(_ctx, getState());
  enterRule(_localctx, 174, HuTaoParser::RuleLocal_variable_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1420);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1418);
      match(HuTaoParser::VAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1419);
      type_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_declaratorContext ------------------------------------------------------------------

HuTaoParser::Local_variable_declaratorContext::Local_variable_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Local_variable_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Local_variable_declaratorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Local_variable_initializerContext* HuTaoParser::Local_variable_declaratorContext::local_variable_initializer() {
  return getRuleContext<HuTaoParser::Local_variable_initializerContext>(0);
}

tree::TerminalNode* HuTaoParser::Local_variable_declaratorContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}


size_t HuTaoParser::Local_variable_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_variable_declarator;
}

void HuTaoParser::Local_variable_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_declarator(this);
}

void HuTaoParser::Local_variable_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_declarator(this);
}

HuTaoParser::Local_variable_declaratorContext* HuTaoParser::local_variable_declarator() {
  Local_variable_declaratorContext *_localctx = _tracker.createInstance<Local_variable_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 176, HuTaoParser::RuleLocal_variable_declarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1422);
    identifier();
    setState(1428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::ASSIGNMENT) {
      setState(1423);
      match(HuTaoParser::ASSIGNMENT);
      setState(1425);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
      case 1: {
        setState(1424);
        match(HuTaoParser::REF);
        break;
      }

      default:
        break;
      }
      setState(1427);
      local_variable_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_variable_initializerContext ------------------------------------------------------------------

HuTaoParser::Local_variable_initializerContext::Local_variable_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Local_variable_initializerContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Array_initializerContext* HuTaoParser::Local_variable_initializerContext::array_initializer() {
  return getRuleContext<HuTaoParser::Array_initializerContext>(0);
}

HuTaoParser::Stackalloc_initializerContext* HuTaoParser::Local_variable_initializerContext::stackalloc_initializer() {
  return getRuleContext<HuTaoParser::Stackalloc_initializerContext>(0);
}


size_t HuTaoParser::Local_variable_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_variable_initializer;
}

void HuTaoParser::Local_variable_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_variable_initializer(this);
}

void HuTaoParser::Local_variable_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_variable_initializer(this);
}

HuTaoParser::Local_variable_initializerContext* HuTaoParser::local_variable_initializer() {
  Local_variable_initializerContext *_localctx = _tracker.createInstance<Local_variable_initializerContext>(_ctx, getState());
  enterRule(_localctx, 178, HuTaoParser::RuleLocal_variable_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(1430);
        expression();
        break;
      }

      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1431);
        array_initializer();
        break;
      }

      case HuTaoParser::STACKALLOC: {
        enterOuterAlt(_localctx, 3);
        setState(1432);
        stackalloc_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_constant_declarationContext ------------------------------------------------------------------

HuTaoParser::Local_constant_declarationContext::Local_constant_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Local_constant_declarationContext::CONST() {
  return getToken(HuTaoParser::CONST, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Local_constant_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::Constant_declaratorsContext* HuTaoParser::Local_constant_declarationContext::constant_declarators() {
  return getRuleContext<HuTaoParser::Constant_declaratorsContext>(0);
}


size_t HuTaoParser::Local_constant_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleLocal_constant_declaration;
}

void HuTaoParser::Local_constant_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_constant_declaration(this);
}

void HuTaoParser::Local_constant_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_constant_declaration(this);
}

HuTaoParser::Local_constant_declarationContext* HuTaoParser::local_constant_declaration() {
  Local_constant_declarationContext *_localctx = _tracker.createInstance<Local_constant_declarationContext>(_ctx, getState());
  enterRule(_localctx, 180, HuTaoParser::RuleLocal_constant_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1435);
    match(HuTaoParser::CONST);
    setState(1436);
    type_();
    setState(1437);
    constant_declarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_bodyContext ------------------------------------------------------------------

HuTaoParser::If_bodyContext::If_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::If_bodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Simple_embedded_statementContext* HuTaoParser::If_bodyContext::simple_embedded_statement() {
  return getRuleContext<HuTaoParser::Simple_embedded_statementContext>(0);
}


size_t HuTaoParser::If_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleIf_body;
}

void HuTaoParser::If_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_body(this);
}

void HuTaoParser::If_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_body(this);
}

HuTaoParser::If_bodyContext* HuTaoParser::if_body() {
  If_bodyContext *_localctx = _tracker.createInstance<If_bodyContext>(_ctx, getState());
  enterRule(_localctx, 182, HuTaoParser::RuleIf_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1439);
        block();
        break;
      }

      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BREAK:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::CONTINUE:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::DO:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FIXED:
      case HuTaoParser::FOR:
      case HuTaoParser::FOREACH:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GOTO:
      case HuTaoParser::GROUP:
      case HuTaoParser::IF:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::LOCK:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::RETURN:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::SWITCH:
      case HuTaoParser::THIS:
      case HuTaoParser::THROW:
      case HuTaoParser::TRUE:
      case HuTaoParser::TRY:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::UNSAFE:
      case HuTaoParser::USING:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::WHILE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::SEMICOLON:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 2);
        setState(1440);
        simple_embedded_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_sectionContext ------------------------------------------------------------------

HuTaoParser::Switch_sectionContext::Switch_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Statement_listContext* HuTaoParser::Switch_sectionContext::statement_list() {
  return getRuleContext<HuTaoParser::Statement_listContext>(0);
}

std::vector<HuTaoParser::Switch_labelContext *> HuTaoParser::Switch_sectionContext::switch_label() {
  return getRuleContexts<HuTaoParser::Switch_labelContext>();
}

HuTaoParser::Switch_labelContext* HuTaoParser::Switch_sectionContext::switch_label(size_t i) {
  return getRuleContext<HuTaoParser::Switch_labelContext>(i);
}


size_t HuTaoParser::Switch_sectionContext::getRuleIndex() const {
  return HuTaoParser::RuleSwitch_section;
}

void HuTaoParser::Switch_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_section(this);
}

void HuTaoParser::Switch_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_section(this);
}

HuTaoParser::Switch_sectionContext* HuTaoParser::switch_section() {
  Switch_sectionContext *_localctx = _tracker.createInstance<Switch_sectionContext>(_ctx, getState());
  enterRule(_localctx, 184, HuTaoParser::RuleSwitch_section);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1444); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1443);
              switch_label();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1446); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1448);
    statement_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_labelContext ------------------------------------------------------------------

HuTaoParser::Switch_labelContext::Switch_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Switch_labelContext::CASE() {
  return getToken(HuTaoParser::CASE, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Switch_labelContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Switch_labelContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Case_guardContext* HuTaoParser::Switch_labelContext::case_guard() {
  return getRuleContext<HuTaoParser::Case_guardContext>(0);
}

tree::TerminalNode* HuTaoParser::Switch_labelContext::DEFAULT() {
  return getToken(HuTaoParser::DEFAULT, 0);
}


size_t HuTaoParser::Switch_labelContext::getRuleIndex() const {
  return HuTaoParser::RuleSwitch_label;
}

void HuTaoParser::Switch_labelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_label(this);
}

void HuTaoParser::Switch_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_label(this);
}

HuTaoParser::Switch_labelContext* HuTaoParser::switch_label() {
  Switch_labelContext *_localctx = _tracker.createInstance<Switch_labelContext>(_ctx, getState());
  enterRule(_localctx, 186, HuTaoParser::RuleSwitch_label);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1459);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(1450);
        match(HuTaoParser::CASE);
        setState(1451);
        expression();
        setState(1453);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::WHEN) {
          setState(1452);
          case_guard();
        }
        setState(1455);
        match(HuTaoParser::COLON);
        break;
      }

      case HuTaoParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(1457);
        match(HuTaoParser::DEFAULT);
        setState(1458);
        match(HuTaoParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_guardContext ------------------------------------------------------------------

HuTaoParser::Case_guardContext::Case_guardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Case_guardContext::WHEN() {
  return getToken(HuTaoParser::WHEN, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Case_guardContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Case_guardContext::getRuleIndex() const {
  return HuTaoParser::RuleCase_guard;
}

void HuTaoParser::Case_guardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_guard(this);
}

void HuTaoParser::Case_guardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_guard(this);
}

HuTaoParser::Case_guardContext* HuTaoParser::case_guard() {
  Case_guardContext *_localctx = _tracker.createInstance<Case_guardContext>(_ctx, getState());
  enterRule(_localctx, 188, HuTaoParser::RuleCase_guard);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1461);
    match(HuTaoParser::WHEN);
    setState(1462);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

HuTaoParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::StatementContext *> HuTaoParser::Statement_listContext::statement() {
  return getRuleContexts<HuTaoParser::StatementContext>();
}

HuTaoParser::StatementContext* HuTaoParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<HuTaoParser::StatementContext>(i);
}


size_t HuTaoParser::Statement_listContext::getRuleIndex() const {
  return HuTaoParser::RuleStatement_list;
}

void HuTaoParser::Statement_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_list(this);
}

void HuTaoParser::Statement_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_list(this);
}

HuTaoParser::Statement_listContext* HuTaoParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 190, HuTaoParser::RuleStatement_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1465); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1464);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1467); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_initializerContext ------------------------------------------------------------------

HuTaoParser::For_initializerContext::For_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Local_variable_declarationContext* HuTaoParser::For_initializerContext::local_variable_declaration() {
  return getRuleContext<HuTaoParser::Local_variable_declarationContext>(0);
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::For_initializerContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::For_initializerContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::For_initializerContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::For_initializerContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::For_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleFor_initializer;
}

void HuTaoParser::For_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_initializer(this);
}

void HuTaoParser::For_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_initializer(this);
}

HuTaoParser::For_initializerContext* HuTaoParser::for_initializer() {
  For_initializerContext *_localctx = _tracker.createInstance<For_initializerContext>(_ctx, getState());
  enterRule(_localctx, 192, HuTaoParser::RuleFor_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1469);
      local_variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1470);
      expression();
      setState(1475);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HuTaoParser::COMMA) {
        setState(1471);
        match(HuTaoParser::COMMA);
        setState(1472);
        expression();
        setState(1477);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_iteratorContext ------------------------------------------------------------------

HuTaoParser::For_iteratorContext::For_iteratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::For_iteratorContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::For_iteratorContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::For_iteratorContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::For_iteratorContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::For_iteratorContext::getRuleIndex() const {
  return HuTaoParser::RuleFor_iterator;
}

void HuTaoParser::For_iteratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_iterator(this);
}

void HuTaoParser::For_iteratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_iterator(this);
}

HuTaoParser::For_iteratorContext* HuTaoParser::for_iterator() {
  For_iteratorContext *_localctx = _tracker.createInstance<For_iteratorContext>(_ctx, getState());
  enterRule(_localctx, 194, HuTaoParser::RuleFor_iterator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1480);
    expression();
    setState(1485);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1481);
      match(HuTaoParser::COMMA);
      setState(1482);
      expression();
      setState(1487);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Catch_clausesContext ------------------------------------------------------------------

HuTaoParser::Catch_clausesContext::Catch_clausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Specific_catch_clauseContext *> HuTaoParser::Catch_clausesContext::specific_catch_clause() {
  return getRuleContexts<HuTaoParser::Specific_catch_clauseContext>();
}

HuTaoParser::Specific_catch_clauseContext* HuTaoParser::Catch_clausesContext::specific_catch_clause(size_t i) {
  return getRuleContext<HuTaoParser::Specific_catch_clauseContext>(i);
}

HuTaoParser::General_catch_clauseContext* HuTaoParser::Catch_clausesContext::general_catch_clause() {
  return getRuleContext<HuTaoParser::General_catch_clauseContext>(0);
}


size_t HuTaoParser::Catch_clausesContext::getRuleIndex() const {
  return HuTaoParser::RuleCatch_clauses;
}

void HuTaoParser::Catch_clausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatch_clauses(this);
}

void HuTaoParser::Catch_clausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatch_clauses(this);
}

HuTaoParser::Catch_clausesContext* HuTaoParser::catch_clauses() {
  Catch_clausesContext *_localctx = _tracker.createInstance<Catch_clausesContext>(_ctx, getState());
  enterRule(_localctx, 196, HuTaoParser::RuleCatch_clauses);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(1499);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1488);
      specific_catch_clause();
      setState(1492);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1489);
          specific_catch_clause(); 
        }
        setState(1494);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
      }
      setState(1496);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::CATCH) {
        setState(1495);
        general_catch_clause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1498);
      general_catch_clause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Specific_catch_clauseContext ------------------------------------------------------------------

HuTaoParser::Specific_catch_clauseContext::Specific_catch_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Specific_catch_clauseContext::CATCH() {
  return getToken(HuTaoParser::CATCH, 0);
}

tree::TerminalNode* HuTaoParser::Specific_catch_clauseContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Class_typeContext* HuTaoParser::Specific_catch_clauseContext::class_type() {
  return getRuleContext<HuTaoParser::Class_typeContext>(0);
}

tree::TerminalNode* HuTaoParser::Specific_catch_clauseContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::BlockContext* HuTaoParser::Specific_catch_clauseContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Specific_catch_clauseContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Exception_filterContext* HuTaoParser::Specific_catch_clauseContext::exception_filter() {
  return getRuleContext<HuTaoParser::Exception_filterContext>(0);
}


size_t HuTaoParser::Specific_catch_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleSpecific_catch_clause;
}

void HuTaoParser::Specific_catch_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecific_catch_clause(this);
}

void HuTaoParser::Specific_catch_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecific_catch_clause(this);
}

HuTaoParser::Specific_catch_clauseContext* HuTaoParser::specific_catch_clause() {
  Specific_catch_clauseContext *_localctx = _tracker.createInstance<Specific_catch_clauseContext>(_ctx, getState());
  enterRule(_localctx, 198, HuTaoParser::RuleSpecific_catch_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1501);
    match(HuTaoParser::CATCH);
    setState(1502);
    match(HuTaoParser::OPEN_PARENS);
    setState(1503);
    class_type();
    setState(1505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64)))) != 0)) {
      setState(1504);
      identifier();
    }
    setState(1507);
    match(HuTaoParser::CLOSE_PARENS);
    setState(1509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHEN) {
      setState(1508);
      exception_filter();
    }
    setState(1511);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- General_catch_clauseContext ------------------------------------------------------------------

HuTaoParser::General_catch_clauseContext::General_catch_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::General_catch_clauseContext::CATCH() {
  return getToken(HuTaoParser::CATCH, 0);
}

HuTaoParser::BlockContext* HuTaoParser::General_catch_clauseContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Exception_filterContext* HuTaoParser::General_catch_clauseContext::exception_filter() {
  return getRuleContext<HuTaoParser::Exception_filterContext>(0);
}


size_t HuTaoParser::General_catch_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleGeneral_catch_clause;
}

void HuTaoParser::General_catch_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneral_catch_clause(this);
}

void HuTaoParser::General_catch_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneral_catch_clause(this);
}

HuTaoParser::General_catch_clauseContext* HuTaoParser::general_catch_clause() {
  General_catch_clauseContext *_localctx = _tracker.createInstance<General_catch_clauseContext>(_ctx, getState());
  enterRule(_localctx, 200, HuTaoParser::RuleGeneral_catch_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1513);
    match(HuTaoParser::CATCH);
    setState(1515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHEN) {
      setState(1514);
      exception_filter();
    }
    setState(1517);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exception_filterContext ------------------------------------------------------------------

HuTaoParser::Exception_filterContext::Exception_filterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Exception_filterContext::WHEN() {
  return getToken(HuTaoParser::WHEN, 0);
}

tree::TerminalNode* HuTaoParser::Exception_filterContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Exception_filterContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Exception_filterContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}


size_t HuTaoParser::Exception_filterContext::getRuleIndex() const {
  return HuTaoParser::RuleException_filter;
}

void HuTaoParser::Exception_filterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterException_filter(this);
}

void HuTaoParser::Exception_filterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitException_filter(this);
}

HuTaoParser::Exception_filterContext* HuTaoParser::exception_filter() {
  Exception_filterContext *_localctx = _tracker.createInstance<Exception_filterContext>(_ctx, getState());
  enterRule(_localctx, 202, HuTaoParser::RuleException_filter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1519);
    match(HuTaoParser::WHEN);
    setState(1520);
    match(HuTaoParser::OPEN_PARENS);
    setState(1521);
    expression();
    setState(1522);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finally_clauseContext ------------------------------------------------------------------

HuTaoParser::Finally_clauseContext::Finally_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Finally_clauseContext::FINALLY() {
  return getToken(HuTaoParser::FINALLY, 0);
}

HuTaoParser::BlockContext* HuTaoParser::Finally_clauseContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}


size_t HuTaoParser::Finally_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleFinally_clause;
}

void HuTaoParser::Finally_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinally_clause(this);
}

void HuTaoParser::Finally_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinally_clause(this);
}

HuTaoParser::Finally_clauseContext* HuTaoParser::finally_clause() {
  Finally_clauseContext *_localctx = _tracker.createInstance<Finally_clauseContext>(_ctx, getState());
  enterRule(_localctx, 204, HuTaoParser::RuleFinally_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1524);
    match(HuTaoParser::FINALLY);
    setState(1525);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Resource_acquisitionContext ------------------------------------------------------------------

HuTaoParser::Resource_acquisitionContext::Resource_acquisitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Local_variable_declarationContext* HuTaoParser::Resource_acquisitionContext::local_variable_declaration() {
  return getRuleContext<HuTaoParser::Local_variable_declarationContext>(0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Resource_acquisitionContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Resource_acquisitionContext::getRuleIndex() const {
  return HuTaoParser::RuleResource_acquisition;
}

void HuTaoParser::Resource_acquisitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource_acquisition(this);
}

void HuTaoParser::Resource_acquisitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource_acquisition(this);
}

HuTaoParser::Resource_acquisitionContext* HuTaoParser::resource_acquisition() {
  Resource_acquisitionContext *_localctx = _tracker.createInstance<Resource_acquisitionContext>(_ctx, getState());
  enterRule(_localctx, 206, HuTaoParser::RuleResource_acquisition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1527);
      local_variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1528);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declarationContext ------------------------------------------------------------------

HuTaoParser::Namespace_declarationContext::Namespace_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Namespace_declarationContext::NAMESPACE() {
  return getToken(HuTaoParser::NAMESPACE, 0);
}

HuTaoParser::Namespace_bodyContext* HuTaoParser::Namespace_declarationContext::namespace_body() {
  return getRuleContext<HuTaoParser::Namespace_bodyContext>(0);
}

HuTaoParser::Qualified_identifierContext* HuTaoParser::Namespace_declarationContext::qualified_identifier() {
  return getRuleContext<HuTaoParser::Qualified_identifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Namespace_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Namespace_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleNamespace_declaration;
}

void HuTaoParser::Namespace_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_declaration(this);
}

void HuTaoParser::Namespace_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_declaration(this);
}

HuTaoParser::Namespace_declarationContext* HuTaoParser::namespace_declaration() {
  Namespace_declarationContext *_localctx = _tracker.createInstance<Namespace_declarationContext>(_ctx, getState());
  enterRule(_localctx, 208, HuTaoParser::RuleNamespace_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1531);
    match(HuTaoParser::NAMESPACE);
    setState(1532);
    dynamic_cast<Namespace_declarationContext *>(_localctx)->qi = qualified_identifier();
    setState(1533);
    namespace_body();
    setState(1535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SEMICOLON) {
      setState(1534);
      match(HuTaoParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qualified_identifierContext ------------------------------------------------------------------

HuTaoParser::Qualified_identifierContext::Qualified_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Qualified_identifierContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Qualified_identifierContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Qualified_identifierContext::DOT() {
  return getTokens(HuTaoParser::DOT);
}

tree::TerminalNode* HuTaoParser::Qualified_identifierContext::DOT(size_t i) {
  return getToken(HuTaoParser::DOT, i);
}


size_t HuTaoParser::Qualified_identifierContext::getRuleIndex() const {
  return HuTaoParser::RuleQualified_identifier;
}

void HuTaoParser::Qualified_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualified_identifier(this);
}

void HuTaoParser::Qualified_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualified_identifier(this);
}

HuTaoParser::Qualified_identifierContext* HuTaoParser::qualified_identifier() {
  Qualified_identifierContext *_localctx = _tracker.createInstance<Qualified_identifierContext>(_ctx, getState());
  enterRule(_localctx, 210, HuTaoParser::RuleQualified_identifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1537);
    identifier();
    setState(1542);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::DOT) {
      setState(1538);
      match(HuTaoParser::DOT);
      setState(1539);
      identifier();
      setState(1544);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_bodyContext ------------------------------------------------------------------

HuTaoParser::Namespace_bodyContext::Namespace_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Namespace_bodyContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Namespace_bodyContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Using_directivesContext* HuTaoParser::Namespace_bodyContext::using_directives() {
  return getRuleContext<HuTaoParser::Using_directivesContext>(0);
}

HuTaoParser::Namespace_member_declarationsContext* HuTaoParser::Namespace_bodyContext::namespace_member_declarations() {
  return getRuleContext<HuTaoParser::Namespace_member_declarationsContext>(0);
}


size_t HuTaoParser::Namespace_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleNamespace_body;
}

void HuTaoParser::Namespace_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_body(this);
}

void HuTaoParser::Namespace_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_body(this);
}

HuTaoParser::Namespace_bodyContext* HuTaoParser::namespace_body() {
  Namespace_bodyContext *_localctx = _tracker.createInstance<Namespace_bodyContext>(_ctx, getState());
  enterRule(_localctx, 212, HuTaoParser::RuleNamespace_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1545);
    match(HuTaoParser::OPEN_BRACE);
    setState(1547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::USING) {
      setState(1546);
      using_directives();
    }
    setState(1550);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::NAMESPACE)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64)))) != 0)) {
      setState(1549);
      namespace_member_declarations();
    }
    setState(1552);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extern_alias_directiveContext ------------------------------------------------------------------

HuTaoParser::Extern_alias_directiveContext::Extern_alias_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Extern_alias_directiveContext::EXTERN() {
  return getToken(HuTaoParser::EXTERN, 0);
}

tree::TerminalNode* HuTaoParser::Extern_alias_directiveContext::ALIAS() {
  return getToken(HuTaoParser::ALIAS, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Extern_alias_directiveContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Extern_alias_directiveContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Extern_alias_directiveContext::getRuleIndex() const {
  return HuTaoParser::RuleExtern_alias_directive;
}

void HuTaoParser::Extern_alias_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtern_alias_directive(this);
}

void HuTaoParser::Extern_alias_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtern_alias_directive(this);
}

HuTaoParser::Extern_alias_directiveContext* HuTaoParser::extern_alias_directive() {
  Extern_alias_directiveContext *_localctx = _tracker.createInstance<Extern_alias_directiveContext>(_ctx, getState());
  enterRule(_localctx, 214, HuTaoParser::RuleExtern_alias_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1554);
    match(HuTaoParser::EXTERN);
    setState(1555);
    match(HuTaoParser::ALIAS);
    setState(1556);
    identifier();
    setState(1557);
    match(HuTaoParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_directivesContext ------------------------------------------------------------------

HuTaoParser::Using_directivesContext::Using_directivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Using_directiveContext *> HuTaoParser::Using_directivesContext::using_directive() {
  return getRuleContexts<HuTaoParser::Using_directiveContext>();
}

HuTaoParser::Using_directiveContext* HuTaoParser::Using_directivesContext::using_directive(size_t i) {
  return getRuleContext<HuTaoParser::Using_directiveContext>(i);
}


size_t HuTaoParser::Using_directivesContext::getRuleIndex() const {
  return HuTaoParser::RuleUsing_directives;
}

void HuTaoParser::Using_directivesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsing_directives(this);
}

void HuTaoParser::Using_directivesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsing_directives(this);
}

HuTaoParser::Using_directivesContext* HuTaoParser::using_directives() {
  Using_directivesContext *_localctx = _tracker.createInstance<Using_directivesContext>(_ctx, getState());
  enterRule(_localctx, 216, HuTaoParser::RuleUsing_directives);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1560); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1559);
      using_directive();
      setState(1562); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HuTaoParser::USING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_directiveContext ------------------------------------------------------------------

HuTaoParser::Using_directiveContext::Using_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Using_directiveContext::USING() {
  return getToken(HuTaoParser::USING, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Using_directiveContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Using_directiveContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Using_directiveContext::namespace_or_type_name() {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Using_directiveContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Using_directiveContext::getRuleIndex() const {
  return HuTaoParser::RuleUsing_directive;
}

void HuTaoParser::Using_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsing_directive(this);
}

void HuTaoParser::Using_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsing_directive(this);
}

HuTaoParser::Using_directiveContext* HuTaoParser::using_directive() {
  Using_directiveContext *_localctx = _tracker.createInstance<Using_directiveContext>(_ctx, getState());
  enterRule(_localctx, 218, HuTaoParser::RuleUsing_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1574);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1564);
      match(HuTaoParser::USING);
      setState(1565);
      identifier();
      setState(1566);
      match(HuTaoParser::ASSIGNMENT);
      setState(1567);
      namespace_or_type_name();
      setState(1568);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1570);
      match(HuTaoParser::USING);
      setState(1571);
      namespace_or_type_name();
      setState(1572);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_member_declarationsContext ------------------------------------------------------------------

HuTaoParser::Namespace_member_declarationsContext::Namespace_member_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Namespace_member_declarationContext *> HuTaoParser::Namespace_member_declarationsContext::namespace_member_declaration() {
  return getRuleContexts<HuTaoParser::Namespace_member_declarationContext>();
}

HuTaoParser::Namespace_member_declarationContext* HuTaoParser::Namespace_member_declarationsContext::namespace_member_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Namespace_member_declarationContext>(i);
}


size_t HuTaoParser::Namespace_member_declarationsContext::getRuleIndex() const {
  return HuTaoParser::RuleNamespace_member_declarations;
}

void HuTaoParser::Namespace_member_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_member_declarations(this);
}

void HuTaoParser::Namespace_member_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_member_declarations(this);
}

HuTaoParser::Namespace_member_declarationsContext* HuTaoParser::namespace_member_declarations() {
  Namespace_member_declarationsContext *_localctx = _tracker.createInstance<Namespace_member_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 220, HuTaoParser::RuleNamespace_member_declarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1577); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1576);
      namespace_member_declaration();
      setState(1579); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::NAMESPACE)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Namespace_member_declarationContext::Namespace_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Namespace_declarationContext* HuTaoParser::Namespace_member_declarationContext::namespace_declaration() {
  return getRuleContext<HuTaoParser::Namespace_declarationContext>(0);
}

HuTaoParser::Type_declarationContext* HuTaoParser::Namespace_member_declarationContext::type_declaration() {
  return getRuleContext<HuTaoParser::Type_declarationContext>(0);
}


size_t HuTaoParser::Namespace_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleNamespace_member_declaration;
}

void HuTaoParser::Namespace_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_member_declaration(this);
}

void HuTaoParser::Namespace_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_member_declaration(this);
}

HuTaoParser::Namespace_member_declarationContext* HuTaoParser::namespace_member_declaration() {
  Namespace_member_declarationContext *_localctx = _tracker.createInstance<Namespace_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 222, HuTaoParser::RuleNamespace_member_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1583);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::NAMESPACE: {
        enterOuterAlt(_localctx, 1);
        setState(1581);
        namespace_declaration();
        break;
      }

      case HuTaoParser::ABSTRACT:
      case HuTaoParser::ASYNC:
      case HuTaoParser::CLASS:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::ENUM:
      case HuTaoParser::EXTERN:
      case HuTaoParser::INTERFACE:
      case HuTaoParser::INTERNAL:
      case HuTaoParser::NEW:
      case HuTaoParser::OVERRIDE:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::PRIVATE:
      case HuTaoParser::PROTECTED:
      case HuTaoParser::PUBLIC:
      case HuTaoParser::READONLY:
      case HuTaoParser::REF:
      case HuTaoParser::SEALED:
      case HuTaoParser::STATIC:
      case HuTaoParser::STRUCT:
      case HuTaoParser::UNSAFE:
      case HuTaoParser::VIRTUAL:
      case HuTaoParser::VOLATILE:
      case HuTaoParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(1582);
        type_declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declarationContext ------------------------------------------------------------------

HuTaoParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Class_definitionContext* HuTaoParser::Type_declarationContext::class_definition() {
  return getRuleContext<HuTaoParser::Class_definitionContext>(0);
}

HuTaoParser::Struct_definitionContext* HuTaoParser::Type_declarationContext::struct_definition() {
  return getRuleContext<HuTaoParser::Struct_definitionContext>(0);
}

HuTaoParser::Interface_definitionContext* HuTaoParser::Type_declarationContext::interface_definition() {
  return getRuleContext<HuTaoParser::Interface_definitionContext>(0);
}

HuTaoParser::Enum_definitionContext* HuTaoParser::Type_declarationContext::enum_definition() {
  return getRuleContext<HuTaoParser::Enum_definitionContext>(0);
}

HuTaoParser::Delegate_definitionContext* HuTaoParser::Type_declarationContext::delegate_definition() {
  return getRuleContext<HuTaoParser::Delegate_definitionContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Type_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::All_member_modifiersContext* HuTaoParser::Type_declarationContext::all_member_modifiers() {
  return getRuleContext<HuTaoParser::All_member_modifiersContext>(0);
}


size_t HuTaoParser::Type_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleType_declaration;
}

void HuTaoParser::Type_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_declaration(this);
}

void HuTaoParser::Type_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_declaration(this);
}

HuTaoParser::Type_declarationContext* HuTaoParser::type_declaration() {
  Type_declarationContext *_localctx = _tracker.createInstance<Type_declarationContext>(_ctx, getState());
  enterRule(_localctx, 224, HuTaoParser::RuleType_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1586);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1585);
      attributes();
    }
    setState(1589);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
    case 1: {
      setState(1588);
      all_member_modifiers();
      break;
    }

    default:
      break;
    }
    setState(1596);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::CLASS: {
        setState(1591);
        class_definition();
        break;
      }

      case HuTaoParser::READONLY:
      case HuTaoParser::REF:
      case HuTaoParser::STRUCT: {
        setState(1592);
        struct_definition();
        break;
      }

      case HuTaoParser::INTERFACE: {
        setState(1593);
        interface_definition();
        break;
      }

      case HuTaoParser::ENUM: {
        setState(1594);
        enum_definition();
        break;
      }

      case HuTaoParser::DELEGATE: {
        setState(1595);
        delegate_definition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qualified_alias_memberContext ------------------------------------------------------------------

HuTaoParser::Qualified_alias_memberContext::Qualified_alias_memberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Qualified_alias_memberContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Qualified_alias_memberContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

tree::TerminalNode* HuTaoParser::Qualified_alias_memberContext::DOUBLE_COLON() {
  return getToken(HuTaoParser::DOUBLE_COLON, 0);
}

HuTaoParser::Type_argument_listContext* HuTaoParser::Qualified_alias_memberContext::type_argument_list() {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(0);
}


size_t HuTaoParser::Qualified_alias_memberContext::getRuleIndex() const {
  return HuTaoParser::RuleQualified_alias_member;
}

void HuTaoParser::Qualified_alias_memberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualified_alias_member(this);
}

void HuTaoParser::Qualified_alias_memberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualified_alias_member(this);
}

HuTaoParser::Qualified_alias_memberContext* HuTaoParser::qualified_alias_member() {
  Qualified_alias_memberContext *_localctx = _tracker.createInstance<Qualified_alias_memberContext>(_ctx, getState());
  enterRule(_localctx, 226, HuTaoParser::RuleQualified_alias_member);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1598);
    identifier();
    setState(1599);
    match(HuTaoParser::DOUBLE_COLON);
    setState(1600);
    identifier();
    setState(1602);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
    case 1: {
      setState(1601);
      type_argument_list();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_listContext ------------------------------------------------------------------

HuTaoParser::Type_parameter_listContext::Type_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Type_parameter_listContext::LT() {
  return getToken(HuTaoParser::LT, 0);
}

std::vector<HuTaoParser::Type_parameterContext *> HuTaoParser::Type_parameter_listContext::type_parameter() {
  return getRuleContexts<HuTaoParser::Type_parameterContext>();
}

HuTaoParser::Type_parameterContext* HuTaoParser::Type_parameter_listContext::type_parameter(size_t i) {
  return getRuleContext<HuTaoParser::Type_parameterContext>(i);
}

tree::TerminalNode* HuTaoParser::Type_parameter_listContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Type_parameter_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Type_parameter_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Type_parameter_listContext::getRuleIndex() const {
  return HuTaoParser::RuleType_parameter_list;
}

void HuTaoParser::Type_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_list(this);
}

void HuTaoParser::Type_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_list(this);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::type_parameter_list() {
  Type_parameter_listContext *_localctx = _tracker.createInstance<Type_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 228, HuTaoParser::RuleType_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1604);
    match(HuTaoParser::LT);
    setState(1605);
    type_parameter();
    setState(1610);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1606);
      match(HuTaoParser::COMMA);
      setState(1607);
      type_parameter();
      setState(1612);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1613);
    match(HuTaoParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameterContext ------------------------------------------------------------------

HuTaoParser::Type_parameterContext::Type_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Type_parameterContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Type_parameterContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}


size_t HuTaoParser::Type_parameterContext::getRuleIndex() const {
  return HuTaoParser::RuleType_parameter;
}

void HuTaoParser::Type_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter(this);
}

void HuTaoParser::Type_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter(this);
}

HuTaoParser::Type_parameterContext* HuTaoParser::type_parameter() {
  Type_parameterContext *_localctx = _tracker.createInstance<Type_parameterContext>(_ctx, getState());
  enterRule(_localctx, 230, HuTaoParser::RuleType_parameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1616);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1615);
      attributes();
    }
    setState(1618);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_baseContext ------------------------------------------------------------------

HuTaoParser::Class_baseContext::Class_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Class_baseContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Class_typeContext* HuTaoParser::Class_baseContext::class_type() {
  return getRuleContext<HuTaoParser::Class_typeContext>(0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Class_baseContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Class_baseContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}

std::vector<HuTaoParser::Namespace_or_type_nameContext *> HuTaoParser::Class_baseContext::namespace_or_type_name() {
  return getRuleContexts<HuTaoParser::Namespace_or_type_nameContext>();
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Class_baseContext::namespace_or_type_name(size_t i) {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(i);
}


size_t HuTaoParser::Class_baseContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_base;
}

void HuTaoParser::Class_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_base(this);
}

void HuTaoParser::Class_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_base(this);
}

HuTaoParser::Class_baseContext* HuTaoParser::class_base() {
  Class_baseContext *_localctx = _tracker.createInstance<Class_baseContext>(_ctx, getState());
  enterRule(_localctx, 232, HuTaoParser::RuleClass_base);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1620);
    match(HuTaoParser::COLON);
    setState(1621);
    class_type();
    setState(1626);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1622);
      match(HuTaoParser::COMMA);
      setState(1623);
      namespace_or_type_name();
      setState(1628);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_type_listContext ------------------------------------------------------------------

HuTaoParser::Interface_type_listContext::Interface_type_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Namespace_or_type_nameContext *> HuTaoParser::Interface_type_listContext::namespace_or_type_name() {
  return getRuleContexts<HuTaoParser::Namespace_or_type_nameContext>();
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Interface_type_listContext::namespace_or_type_name(size_t i) {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Interface_type_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Interface_type_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Interface_type_listContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_type_list;
}

void HuTaoParser::Interface_type_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_type_list(this);
}

void HuTaoParser::Interface_type_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_type_list(this);
}

HuTaoParser::Interface_type_listContext* HuTaoParser::interface_type_list() {
  Interface_type_listContext *_localctx = _tracker.createInstance<Interface_type_listContext>(_ctx, getState());
  enterRule(_localctx, 234, HuTaoParser::RuleInterface_type_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1629);
    namespace_or_type_name();
    setState(1634);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1630);
      match(HuTaoParser::COMMA);
      setState(1631);
      namespace_or_type_name();
      setState(1636);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraints_clausesContext ------------------------------------------------------------------

HuTaoParser::Type_parameter_constraints_clausesContext::Type_parameter_constraints_clausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Type_parameter_constraints_clauseContext *> HuTaoParser::Type_parameter_constraints_clausesContext::type_parameter_constraints_clause() {
  return getRuleContexts<HuTaoParser::Type_parameter_constraints_clauseContext>();
}

HuTaoParser::Type_parameter_constraints_clauseContext* HuTaoParser::Type_parameter_constraints_clausesContext::type_parameter_constraints_clause(size_t i) {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clauseContext>(i);
}


size_t HuTaoParser::Type_parameter_constraints_clausesContext::getRuleIndex() const {
  return HuTaoParser::RuleType_parameter_constraints_clauses;
}

void HuTaoParser::Type_parameter_constraints_clausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints_clauses(this);
}

void HuTaoParser::Type_parameter_constraints_clausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints_clauses(this);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::type_parameter_constraints_clauses() {
  Type_parameter_constraints_clausesContext *_localctx = _tracker.createInstance<Type_parameter_constraints_clausesContext>(_ctx, getState());
  enterRule(_localctx, 236, HuTaoParser::RuleType_parameter_constraints_clauses);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1638); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1637);
      type_parameter_constraints_clause();
      setState(1640); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HuTaoParser::WHERE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraints_clauseContext ------------------------------------------------------------------

HuTaoParser::Type_parameter_constraints_clauseContext::Type_parameter_constraints_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Type_parameter_constraints_clauseContext::WHERE() {
  return getToken(HuTaoParser::WHERE, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Type_parameter_constraints_clauseContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Type_parameter_constraints_clauseContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Type_parameter_constraintsContext* HuTaoParser::Type_parameter_constraints_clauseContext::type_parameter_constraints() {
  return getRuleContext<HuTaoParser::Type_parameter_constraintsContext>(0);
}


size_t HuTaoParser::Type_parameter_constraints_clauseContext::getRuleIndex() const {
  return HuTaoParser::RuleType_parameter_constraints_clause;
}

void HuTaoParser::Type_parameter_constraints_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints_clause(this);
}

void HuTaoParser::Type_parameter_constraints_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints_clause(this);
}

HuTaoParser::Type_parameter_constraints_clauseContext* HuTaoParser::type_parameter_constraints_clause() {
  Type_parameter_constraints_clauseContext *_localctx = _tracker.createInstance<Type_parameter_constraints_clauseContext>(_ctx, getState());
  enterRule(_localctx, 238, HuTaoParser::RuleType_parameter_constraints_clause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1642);
    match(HuTaoParser::WHERE);
    setState(1643);
    identifier();
    setState(1644);
    match(HuTaoParser::COLON);
    setState(1645);
    type_parameter_constraints();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_parameter_constraintsContext ------------------------------------------------------------------

HuTaoParser::Type_parameter_constraintsContext::Type_parameter_constraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Constructor_constraintContext* HuTaoParser::Type_parameter_constraintsContext::constructor_constraint() {
  return getRuleContext<HuTaoParser::Constructor_constraintContext>(0);
}

HuTaoParser::Primary_constraintContext* HuTaoParser::Type_parameter_constraintsContext::primary_constraint() {
  return getRuleContext<HuTaoParser::Primary_constraintContext>(0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Type_parameter_constraintsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Type_parameter_constraintsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}

HuTaoParser::Secondary_constraintsContext* HuTaoParser::Type_parameter_constraintsContext::secondary_constraints() {
  return getRuleContext<HuTaoParser::Secondary_constraintsContext>(0);
}


size_t HuTaoParser::Type_parameter_constraintsContext::getRuleIndex() const {
  return HuTaoParser::RuleType_parameter_constraints;
}

void HuTaoParser::Type_parameter_constraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_parameter_constraints(this);
}

void HuTaoParser::Type_parameter_constraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_parameter_constraints(this);
}

HuTaoParser::Type_parameter_constraintsContext* HuTaoParser::type_parameter_constraints() {
  Type_parameter_constraintsContext *_localctx = _tracker.createInstance<Type_parameter_constraintsContext>(_ctx, getState());
  enterRule(_localctx, 240, HuTaoParser::RuleType_parameter_constraints);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1657);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(1647);
        constructor_constraint();
        break;
      }

      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BY:
      case HuTaoParser::CLASS:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::STRUCT:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(1648);
        primary_constraint();
        setState(1651);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
        case 1: {
          setState(1649);
          match(HuTaoParser::COMMA);
          setState(1650);
          secondary_constraints();
          break;
        }

        default:
          break;
        }
        setState(1655);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::COMMA) {
          setState(1653);
          match(HuTaoParser::COMMA);
          setState(1654);
          constructor_constraint();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_constraintContext ------------------------------------------------------------------

HuTaoParser::Primary_constraintContext::Primary_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Class_typeContext* HuTaoParser::Primary_constraintContext::class_type() {
  return getRuleContext<HuTaoParser::Class_typeContext>(0);
}

tree::TerminalNode* HuTaoParser::Primary_constraintContext::CLASS() {
  return getToken(HuTaoParser::CLASS, 0);
}

tree::TerminalNode* HuTaoParser::Primary_constraintContext::INTERR() {
  return getToken(HuTaoParser::INTERR, 0);
}

tree::TerminalNode* HuTaoParser::Primary_constraintContext::STRUCT() {
  return getToken(HuTaoParser::STRUCT, 0);
}

tree::TerminalNode* HuTaoParser::Primary_constraintContext::UNMANAGED() {
  return getToken(HuTaoParser::UNMANAGED, 0);
}


size_t HuTaoParser::Primary_constraintContext::getRuleIndex() const {
  return HuTaoParser::RulePrimary_constraint;
}

void HuTaoParser::Primary_constraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_constraint(this);
}

void HuTaoParser::Primary_constraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_constraint(this);
}

HuTaoParser::Primary_constraintContext* HuTaoParser::primary_constraint() {
  Primary_constraintContext *_localctx = _tracker.createInstance<Primary_constraintContext>(_ctx, getState());
  enterRule(_localctx, 242, HuTaoParser::RulePrimary_constraint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1659);
      class_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1660);
      match(HuTaoParser::CLASS);
      setState(1662);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::INTERR) {
        setState(1661);
        match(HuTaoParser::INTERR);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1664);
      match(HuTaoParser::STRUCT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1665);
      match(HuTaoParser::UNMANAGED);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Secondary_constraintsContext ------------------------------------------------------------------

HuTaoParser::Secondary_constraintsContext::Secondary_constraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Namespace_or_type_nameContext *> HuTaoParser::Secondary_constraintsContext::namespace_or_type_name() {
  return getRuleContexts<HuTaoParser::Namespace_or_type_nameContext>();
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Secondary_constraintsContext::namespace_or_type_name(size_t i) {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Secondary_constraintsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Secondary_constraintsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Secondary_constraintsContext::getRuleIndex() const {
  return HuTaoParser::RuleSecondary_constraints;
}

void HuTaoParser::Secondary_constraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondary_constraints(this);
}

void HuTaoParser::Secondary_constraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondary_constraints(this);
}

HuTaoParser::Secondary_constraintsContext* HuTaoParser::secondary_constraints() {
  Secondary_constraintsContext *_localctx = _tracker.createInstance<Secondary_constraintsContext>(_ctx, getState());
  enterRule(_localctx, 244, HuTaoParser::RuleSecondary_constraints);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1668);
    namespace_or_type_name();
    setState(1673);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1669);
        match(HuTaoParser::COMMA);
        setState(1670);
        namespace_or_type_name(); 
      }
      setState(1675);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_constraintContext ------------------------------------------------------------------

HuTaoParser::Constructor_constraintContext::Constructor_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Constructor_constraintContext::NEW() {
  return getToken(HuTaoParser::NEW, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_constraintContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_constraintContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}


size_t HuTaoParser::Constructor_constraintContext::getRuleIndex() const {
  return HuTaoParser::RuleConstructor_constraint;
}

void HuTaoParser::Constructor_constraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_constraint(this);
}

void HuTaoParser::Constructor_constraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_constraint(this);
}

HuTaoParser::Constructor_constraintContext* HuTaoParser::constructor_constraint() {
  Constructor_constraintContext *_localctx = _tracker.createInstance<Constructor_constraintContext>(_ctx, getState());
  enterRule(_localctx, 246, HuTaoParser::RuleConstructor_constraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1676);
    match(HuTaoParser::NEW);
    setState(1677);
    match(HuTaoParser::OPEN_PARENS);
    setState(1678);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_bodyContext ------------------------------------------------------------------

HuTaoParser::Class_bodyContext::Class_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Class_bodyContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Class_bodyContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Class_member_declarationsContext* HuTaoParser::Class_bodyContext::class_member_declarations() {
  return getRuleContext<HuTaoParser::Class_member_declarationsContext>(0);
}


size_t HuTaoParser::Class_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_body;
}

void HuTaoParser::Class_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_body(this);
}

void HuTaoParser::Class_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_body(this);
}

HuTaoParser::Class_bodyContext* HuTaoParser::class_body() {
  Class_bodyContext *_localctx = _tracker.createInstance<Class_bodyContext>(_ctx, getState());
  enterRule(_localctx, 248, HuTaoParser::RuleClass_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1680);
    match(HuTaoParser::OPEN_BRACE);
    setState(1682);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::CONST)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::EVENT)
      | (1ULL << HuTaoParser::EXPLICIT)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IMPLICIT)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || _la == HuTaoParser::TILDE) {
      setState(1681);
      class_member_declarations();
    }
    setState(1684);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_member_declarationsContext ------------------------------------------------------------------

HuTaoParser::Class_member_declarationsContext::Class_member_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Class_member_declarationContext *> HuTaoParser::Class_member_declarationsContext::class_member_declaration() {
  return getRuleContexts<HuTaoParser::Class_member_declarationContext>();
}

HuTaoParser::Class_member_declarationContext* HuTaoParser::Class_member_declarationsContext::class_member_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Class_member_declarationContext>(i);
}


size_t HuTaoParser::Class_member_declarationsContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_member_declarations;
}

void HuTaoParser::Class_member_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_declarations(this);
}

void HuTaoParser::Class_member_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_declarations(this);
}

HuTaoParser::Class_member_declarationsContext* HuTaoParser::class_member_declarations() {
  Class_member_declarationsContext *_localctx = _tracker.createInstance<Class_member_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 250, HuTaoParser::RuleClass_member_declarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1687); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1686);
      class_member_declaration();
      setState(1689); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::CONST)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::EVENT)
      | (1ULL << HuTaoParser::EXPLICIT)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IMPLICIT)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || _la == HuTaoParser::TILDE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Class_member_declarationContext::Class_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Common_member_declarationContext* HuTaoParser::Class_member_declarationContext::common_member_declaration() {
  return getRuleContext<HuTaoParser::Common_member_declarationContext>(0);
}

HuTaoParser::Destructor_definitionContext* HuTaoParser::Class_member_declarationContext::destructor_definition() {
  return getRuleContext<HuTaoParser::Destructor_definitionContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Class_member_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::All_member_modifiersContext* HuTaoParser::Class_member_declarationContext::all_member_modifiers() {
  return getRuleContext<HuTaoParser::All_member_modifiersContext>(0);
}


size_t HuTaoParser::Class_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_member_declaration;
}

void HuTaoParser::Class_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_declaration(this);
}

void HuTaoParser::Class_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_declaration(this);
}

HuTaoParser::Class_member_declarationContext* HuTaoParser::class_member_declaration() {
  Class_member_declarationContext *_localctx = _tracker.createInstance<Class_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 252, HuTaoParser::RuleClass_member_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1692);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1691);
      attributes();
    }
    setState(1695);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1694);
      all_member_modifiers();
      break;
    }

    default:
      break;
    }
    setState(1699);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CLASS:
      case HuTaoParser::CONST:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::ENUM:
      case HuTaoParser::EQUALS:
      case HuTaoParser::EVENT:
      case HuTaoParser::EXPLICIT:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::IMPLICIT:
      case HuTaoParser::INTERFACE:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::READONLY:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::STRUCT:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::VOID:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS: {
        setState(1697);
        common_member_declaration();
        break;
      }

      case HuTaoParser::TILDE: {
        setState(1698);
        destructor_definition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_member_modifiersContext ------------------------------------------------------------------

HuTaoParser::All_member_modifiersContext::All_member_modifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::All_member_modifierContext *> HuTaoParser::All_member_modifiersContext::all_member_modifier() {
  return getRuleContexts<HuTaoParser::All_member_modifierContext>();
}

HuTaoParser::All_member_modifierContext* HuTaoParser::All_member_modifiersContext::all_member_modifier(size_t i) {
  return getRuleContext<HuTaoParser::All_member_modifierContext>(i);
}


size_t HuTaoParser::All_member_modifiersContext::getRuleIndex() const {
  return HuTaoParser::RuleAll_member_modifiers;
}

void HuTaoParser::All_member_modifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_member_modifiers(this);
}

void HuTaoParser::All_member_modifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_member_modifiers(this);
}

HuTaoParser::All_member_modifiersContext* HuTaoParser::all_member_modifiers() {
  All_member_modifiersContext *_localctx = _tracker.createInstance<All_member_modifiersContext>(_ctx, getState());
  enterRule(_localctx, 254, HuTaoParser::RuleAll_member_modifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1702); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1701);
              all_member_modifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1704); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_member_modifierContext ------------------------------------------------------------------

HuTaoParser::All_member_modifierContext::All_member_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::NEW() {
  return getToken(HuTaoParser::NEW, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::PUBLIC() {
  return getToken(HuTaoParser::PUBLIC, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::PROTECTED() {
  return getToken(HuTaoParser::PROTECTED, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::INTERNAL() {
  return getToken(HuTaoParser::INTERNAL, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::PRIVATE() {
  return getToken(HuTaoParser::PRIVATE, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::VOLATILE() {
  return getToken(HuTaoParser::VOLATILE, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::VIRTUAL() {
  return getToken(HuTaoParser::VIRTUAL, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::SEALED() {
  return getToken(HuTaoParser::SEALED, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::OVERRIDE() {
  return getToken(HuTaoParser::OVERRIDE, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::ABSTRACT() {
  return getToken(HuTaoParser::ABSTRACT, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::STATIC() {
  return getToken(HuTaoParser::STATIC, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::UNSAFE() {
  return getToken(HuTaoParser::UNSAFE, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::EXTERN() {
  return getToken(HuTaoParser::EXTERN, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::PARTIAL() {
  return getToken(HuTaoParser::PARTIAL, 0);
}

tree::TerminalNode* HuTaoParser::All_member_modifierContext::ASYNC() {
  return getToken(HuTaoParser::ASYNC, 0);
}


size_t HuTaoParser::All_member_modifierContext::getRuleIndex() const {
  return HuTaoParser::RuleAll_member_modifier;
}

void HuTaoParser::All_member_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_member_modifier(this);
}

void HuTaoParser::All_member_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_member_modifier(this);
}

HuTaoParser::All_member_modifierContext* HuTaoParser::all_member_modifier() {
  All_member_modifierContext *_localctx = _tracker.createInstance<All_member_modifierContext>(_ctx, getState());
  enterRule(_localctx, 256, HuTaoParser::RuleAll_member_modifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1706);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Common_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Common_member_declarationContext::Common_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Constant_declarationContext* HuTaoParser::Common_member_declarationContext::constant_declaration() {
  return getRuleContext<HuTaoParser::Constant_declarationContext>(0);
}

HuTaoParser::Typed_member_declarationContext* HuTaoParser::Common_member_declarationContext::typed_member_declaration() {
  return getRuleContext<HuTaoParser::Typed_member_declarationContext>(0);
}

HuTaoParser::Event_declarationContext* HuTaoParser::Common_member_declarationContext::event_declaration() {
  return getRuleContext<HuTaoParser::Event_declarationContext>(0);
}

HuTaoParser::Conversion_operator_declaratorContext* HuTaoParser::Common_member_declarationContext::conversion_operator_declarator() {
  return getRuleContext<HuTaoParser::Conversion_operator_declaratorContext>(0);
}

HuTaoParser::BodyContext* HuTaoParser::Common_member_declarationContext::body() {
  return getRuleContext<HuTaoParser::BodyContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Common_member_declarationContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Common_member_declarationContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Common_member_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::Constructor_declarationContext* HuTaoParser::Common_member_declarationContext::constructor_declaration() {
  return getRuleContext<HuTaoParser::Constructor_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::Common_member_declarationContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}

HuTaoParser::Method_declarationContext* HuTaoParser::Common_member_declarationContext::method_declaration() {
  return getRuleContext<HuTaoParser::Method_declarationContext>(0);
}

HuTaoParser::Class_definitionContext* HuTaoParser::Common_member_declarationContext::class_definition() {
  return getRuleContext<HuTaoParser::Class_definitionContext>(0);
}

HuTaoParser::Struct_definitionContext* HuTaoParser::Common_member_declarationContext::struct_definition() {
  return getRuleContext<HuTaoParser::Struct_definitionContext>(0);
}

HuTaoParser::Interface_definitionContext* HuTaoParser::Common_member_declarationContext::interface_definition() {
  return getRuleContext<HuTaoParser::Interface_definitionContext>(0);
}

HuTaoParser::Enum_definitionContext* HuTaoParser::Common_member_declarationContext::enum_definition() {
  return getRuleContext<HuTaoParser::Enum_definitionContext>(0);
}

HuTaoParser::Delegate_definitionContext* HuTaoParser::Common_member_declarationContext::delegate_definition() {
  return getRuleContext<HuTaoParser::Delegate_definitionContext>(0);
}


size_t HuTaoParser::Common_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleCommon_member_declaration;
}

void HuTaoParser::Common_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommon_member_declaration(this);
}

void HuTaoParser::Common_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommon_member_declaration(this);
}

HuTaoParser::Common_member_declarationContext* HuTaoParser::common_member_declaration() {
  Common_member_declarationContext *_localctx = _tracker.createInstance<Common_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 258, HuTaoParser::RuleCommon_member_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1727);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1708);
      constant_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1709);
      typed_member_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1710);
      event_declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1711);
      conversion_operator_declarator();
      setState(1717);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HuTaoParser::OPEN_BRACE:
        case HuTaoParser::SEMICOLON: {
          setState(1712);
          body();
          break;
        }

        case HuTaoParser::ASSIGNMENT: {
          setState(1713);
          right_arrow();
          setState(1714);
          throwable_expression();
          setState(1715);
          match(HuTaoParser::SEMICOLON);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1719);
      constructor_declaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1720);
      match(HuTaoParser::VOID);
      setState(1721);
      method_declaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1722);
      class_definition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1723);
      struct_definition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1724);
      interface_definition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1725);
      enum_definition();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1726);
      delegate_definition();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Typed_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Typed_member_declarationContext::Typed_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Typed_member_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Typed_member_declarationContext::namespace_or_type_name() {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Typed_member_declarationContext::DOT() {
  return getToken(HuTaoParser::DOT, 0);
}

HuTaoParser::Indexer_declarationContext* HuTaoParser::Typed_member_declarationContext::indexer_declaration() {
  return getRuleContext<HuTaoParser::Indexer_declarationContext>(0);
}

HuTaoParser::Method_declarationContext* HuTaoParser::Typed_member_declarationContext::method_declaration() {
  return getRuleContext<HuTaoParser::Method_declarationContext>(0);
}

HuTaoParser::Property_declarationContext* HuTaoParser::Typed_member_declarationContext::property_declaration() {
  return getRuleContext<HuTaoParser::Property_declarationContext>(0);
}

HuTaoParser::Operator_declarationContext* HuTaoParser::Typed_member_declarationContext::operator_declaration() {
  return getRuleContext<HuTaoParser::Operator_declarationContext>(0);
}

HuTaoParser::Field_declarationContext* HuTaoParser::Typed_member_declarationContext::field_declaration() {
  return getRuleContext<HuTaoParser::Field_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::Typed_member_declarationContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::Typed_member_declarationContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}


size_t HuTaoParser::Typed_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleTyped_member_declaration;
}

void HuTaoParser::Typed_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTyped_member_declaration(this);
}

void HuTaoParser::Typed_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTyped_member_declaration(this);
}

HuTaoParser::Typed_member_declarationContext* HuTaoParser::typed_member_declaration() {
  Typed_member_declarationContext *_localctx = _tracker.createInstance<Typed_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 260, HuTaoParser::RuleTyped_member_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1734);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      setState(1729);
      match(HuTaoParser::REF);
      break;
    }

    case 2: {
      setState(1730);
      match(HuTaoParser::READONLY);
      setState(1731);
      match(HuTaoParser::REF);
      break;
    }

    case 3: {
      setState(1732);
      match(HuTaoParser::REF);
      setState(1733);
      match(HuTaoParser::READONLY);
      break;
    }

    default:
      break;
    }
    setState(1736);
    type_();
    setState(1746);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      setState(1737);
      namespace_or_type_name();
      setState(1738);
      match(HuTaoParser::DOT);
      setState(1739);
      indexer_declaration();
      break;
    }

    case 2: {
      setState(1741);
      method_declaration();
      break;
    }

    case 3: {
      setState(1742);
      property_declaration();
      break;
    }

    case 4: {
      setState(1743);
      indexer_declaration();
      break;
    }

    case 5: {
      setState(1744);
      operator_declaration();
      break;
    }

    case 6: {
      setState(1745);
      field_declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declaratorsContext ------------------------------------------------------------------

HuTaoParser::Constant_declaratorsContext::Constant_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Constant_declaratorContext *> HuTaoParser::Constant_declaratorsContext::constant_declarator() {
  return getRuleContexts<HuTaoParser::Constant_declaratorContext>();
}

HuTaoParser::Constant_declaratorContext* HuTaoParser::Constant_declaratorsContext::constant_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Constant_declaratorContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Constant_declaratorsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Constant_declaratorsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Constant_declaratorsContext::getRuleIndex() const {
  return HuTaoParser::RuleConstant_declarators;
}

void HuTaoParser::Constant_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declarators(this);
}

void HuTaoParser::Constant_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declarators(this);
}

HuTaoParser::Constant_declaratorsContext* HuTaoParser::constant_declarators() {
  Constant_declaratorsContext *_localctx = _tracker.createInstance<Constant_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 262, HuTaoParser::RuleConstant_declarators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    constant_declarator();
    setState(1753);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1749);
      match(HuTaoParser::COMMA);
      setState(1750);
      constant_declarator();
      setState(1755);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declaratorContext ------------------------------------------------------------------

HuTaoParser::Constant_declaratorContext::Constant_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Constant_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Constant_declaratorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Constant_declaratorContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Constant_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleConstant_declarator;
}

void HuTaoParser::Constant_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declarator(this);
}

void HuTaoParser::Constant_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declarator(this);
}

HuTaoParser::Constant_declaratorContext* HuTaoParser::constant_declarator() {
  Constant_declaratorContext *_localctx = _tracker.createInstance<Constant_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 264, HuTaoParser::RuleConstant_declarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    identifier();
    setState(1757);
    match(HuTaoParser::ASSIGNMENT);
    setState(1758);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaratorsContext ------------------------------------------------------------------

HuTaoParser::Variable_declaratorsContext::Variable_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Variable_declaratorContext *> HuTaoParser::Variable_declaratorsContext::variable_declarator() {
  return getRuleContexts<HuTaoParser::Variable_declaratorContext>();
}

HuTaoParser::Variable_declaratorContext* HuTaoParser::Variable_declaratorsContext::variable_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Variable_declaratorContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Variable_declaratorsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Variable_declaratorsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Variable_declaratorsContext::getRuleIndex() const {
  return HuTaoParser::RuleVariable_declarators;
}

void HuTaoParser::Variable_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declarators(this);
}

void HuTaoParser::Variable_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declarators(this);
}

HuTaoParser::Variable_declaratorsContext* HuTaoParser::variable_declarators() {
  Variable_declaratorsContext *_localctx = _tracker.createInstance<Variable_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 266, HuTaoParser::RuleVariable_declarators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1760);
    variable_declarator();
    setState(1765);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1761);
      match(HuTaoParser::COMMA);
      setState(1762);
      variable_declarator();
      setState(1767);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaratorContext ------------------------------------------------------------------

HuTaoParser::Variable_declaratorContext::Variable_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Variable_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Variable_declaratorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Variable_initializerContext* HuTaoParser::Variable_declaratorContext::variable_initializer() {
  return getRuleContext<HuTaoParser::Variable_initializerContext>(0);
}


size_t HuTaoParser::Variable_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleVariable_declarator;
}

void HuTaoParser::Variable_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declarator(this);
}

void HuTaoParser::Variable_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declarator(this);
}

HuTaoParser::Variable_declaratorContext* HuTaoParser::variable_declarator() {
  Variable_declaratorContext *_localctx = _tracker.createInstance<Variable_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 268, HuTaoParser::RuleVariable_declarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1768);
    identifier();
    setState(1771);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::ASSIGNMENT) {
      setState(1769);
      match(HuTaoParser::ASSIGNMENT);
      setState(1770);
      variable_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_initializerContext ------------------------------------------------------------------

HuTaoParser::Variable_initializerContext::Variable_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Variable_initializerContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::Array_initializerContext* HuTaoParser::Variable_initializerContext::array_initializer() {
  return getRuleContext<HuTaoParser::Array_initializerContext>(0);
}


size_t HuTaoParser::Variable_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleVariable_initializer;
}

void HuTaoParser::Variable_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_initializer(this);
}

void HuTaoParser::Variable_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_initializer(this);
}

HuTaoParser::Variable_initializerContext* HuTaoParser::variable_initializer() {
  Variable_initializerContext *_localctx = _tracker.createInstance<Variable_initializerContext>(_ctx, getState());
  enterRule(_localctx, 270, HuTaoParser::RuleVariable_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1775);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(1773);
        expression();
        break;
      }

      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(1774);
        array_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_typeContext ------------------------------------------------------------------

HuTaoParser::Return_typeContext::Return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Return_typeContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Return_typeContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}


size_t HuTaoParser::Return_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleReturn_type;
}

void HuTaoParser::Return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_type(this);
}

void HuTaoParser::Return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_type(this);
}

HuTaoParser::Return_typeContext* HuTaoParser::return_type() {
  Return_typeContext *_localctx = _tracker.createInstance<Return_typeContext>(_ctx, getState());
  enterRule(_localctx, 272, HuTaoParser::RuleReturn_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1779);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1777);
      type_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1778);
      match(HuTaoParser::VOID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_nameContext ------------------------------------------------------------------

HuTaoParser::Member_nameContext::Member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::Member_nameContext::namespace_or_type_name() {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(0);
}


size_t HuTaoParser::Member_nameContext::getRuleIndex() const {
  return HuTaoParser::RuleMember_name;
}

void HuTaoParser::Member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_name(this);
}

void HuTaoParser::Member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_name(this);
}

HuTaoParser::Member_nameContext* HuTaoParser::member_name() {
  Member_nameContext *_localctx = _tracker.createInstance<Member_nameContext>(_ctx, getState());
  enterRule(_localctx, 274, HuTaoParser::RuleMember_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1781);
    namespace_or_type_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_bodyContext ------------------------------------------------------------------

HuTaoParser::Method_bodyContext::Method_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::Method_bodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

tree::TerminalNode* HuTaoParser::Method_bodyContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Method_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleMethod_body;
}

void HuTaoParser::Method_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_body(this);
}

void HuTaoParser::Method_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_body(this);
}

HuTaoParser::Method_bodyContext* HuTaoParser::method_body() {
  Method_bodyContext *_localctx = _tracker.createInstance<Method_bodyContext>(_ctx, getState());
  enterRule(_localctx, 276, HuTaoParser::RuleMethod_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1785);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1783);
        block();
        break;
      }

      case HuTaoParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(1784);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Formal_parameter_listContext ------------------------------------------------------------------

HuTaoParser::Formal_parameter_listContext::Formal_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Parameter_arrayContext* HuTaoParser::Formal_parameter_listContext::parameter_array() {
  return getRuleContext<HuTaoParser::Parameter_arrayContext>(0);
}

HuTaoParser::Fixed_parametersContext* HuTaoParser::Formal_parameter_listContext::fixed_parameters() {
  return getRuleContext<HuTaoParser::Fixed_parametersContext>(0);
}

tree::TerminalNode* HuTaoParser::Formal_parameter_listContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Formal_parameter_listContext::getRuleIndex() const {
  return HuTaoParser::RuleFormal_parameter_list;
}

void HuTaoParser::Formal_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormal_parameter_list(this);
}

void HuTaoParser::Formal_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormal_parameter_list(this);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::formal_parameter_list() {
  Formal_parameter_listContext *_localctx = _tracker.createInstance<Formal_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 278, HuTaoParser::RuleFormal_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1793);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1787);
      parameter_array();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1788);
      fixed_parameters();
      setState(1791);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(1789);
        match(HuTaoParser::COMMA);
        setState(1790);
        parameter_array();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_parametersContext ------------------------------------------------------------------

HuTaoParser::Fixed_parametersContext::Fixed_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Fixed_parameterContext *> HuTaoParser::Fixed_parametersContext::fixed_parameter() {
  return getRuleContexts<HuTaoParser::Fixed_parameterContext>();
}

HuTaoParser::Fixed_parameterContext* HuTaoParser::Fixed_parametersContext::fixed_parameter(size_t i) {
  return getRuleContext<HuTaoParser::Fixed_parameterContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Fixed_parametersContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Fixed_parametersContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Fixed_parametersContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_parameters;
}

void HuTaoParser::Fixed_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_parameters(this);
}

void HuTaoParser::Fixed_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_parameters(this);
}

HuTaoParser::Fixed_parametersContext* HuTaoParser::fixed_parameters() {
  Fixed_parametersContext *_localctx = _tracker.createInstance<Fixed_parametersContext>(_ctx, getState());
  enterRule(_localctx, 280, HuTaoParser::RuleFixed_parameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1795);
    fixed_parameter();
    setState(1800);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1796);
        match(HuTaoParser::COMMA);
        setState(1797);
        fixed_parameter(); 
      }
      setState(1802);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_parameterContext ------------------------------------------------------------------

HuTaoParser::Fixed_parameterContext::Fixed_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Arg_declarationContext* HuTaoParser::Fixed_parameterContext::arg_declaration() {
  return getRuleContext<HuTaoParser::Arg_declarationContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Fixed_parameterContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::Parameter_modifierContext* HuTaoParser::Fixed_parameterContext::parameter_modifier() {
  return getRuleContext<HuTaoParser::Parameter_modifierContext>(0);
}


size_t HuTaoParser::Fixed_parameterContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_parameter;
}

void HuTaoParser::Fixed_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_parameter(this);
}

void HuTaoParser::Fixed_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_parameter(this);
}

HuTaoParser::Fixed_parameterContext* HuTaoParser::fixed_parameter() {
  Fixed_parameterContext *_localctx = _tracker.createInstance<Fixed_parameterContext>(_ctx, getState());
  enterRule(_localctx, 282, HuTaoParser::RuleFixed_parameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1804);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1803);
      attributes();
    }
    setState(1807);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 45) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 45)) & ((1ULL << (HuTaoParser::IN - 45))
      | (1ULL << (HuTaoParser::OUT - 45))
      | (1ULL << (HuTaoParser::REF - 45))
      | (1ULL << (HuTaoParser::THIS - 45)))) != 0)) {
      setState(1806);
      parameter_modifier();
    }
    setState(1809);
    arg_declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_modifierContext ------------------------------------------------------------------

HuTaoParser::Parameter_modifierContext::Parameter_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Parameter_modifierContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::Parameter_modifierContext::OUT() {
  return getToken(HuTaoParser::OUT, 0);
}

tree::TerminalNode* HuTaoParser::Parameter_modifierContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

tree::TerminalNode* HuTaoParser::Parameter_modifierContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}


size_t HuTaoParser::Parameter_modifierContext::getRuleIndex() const {
  return HuTaoParser::RuleParameter_modifier;
}

void HuTaoParser::Parameter_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_modifier(this);
}

void HuTaoParser::Parameter_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_modifier(this);
}

HuTaoParser::Parameter_modifierContext* HuTaoParser::parameter_modifier() {
  Parameter_modifierContext *_localctx = _tracker.createInstance<Parameter_modifierContext>(_ctx, getState());
  enterRule(_localctx, 284, HuTaoParser::RuleParameter_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1819);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1811);
      match(HuTaoParser::REF);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1812);
      match(HuTaoParser::OUT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1813);
      match(HuTaoParser::IN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1814);
      match(HuTaoParser::REF);
      setState(1815);
      match(HuTaoParser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1816);
      match(HuTaoParser::IN);
      setState(1817);
      match(HuTaoParser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1818);
      match(HuTaoParser::THIS);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_arrayContext ------------------------------------------------------------------

HuTaoParser::Parameter_arrayContext::Parameter_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Parameter_arrayContext::PARAMS() {
  return getToken(HuTaoParser::PARAMS, 0);
}

HuTaoParser::Array_typeContext* HuTaoParser::Parameter_arrayContext::array_type() {
  return getRuleContext<HuTaoParser::Array_typeContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Parameter_arrayContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Parameter_arrayContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}


size_t HuTaoParser::Parameter_arrayContext::getRuleIndex() const {
  return HuTaoParser::RuleParameter_array;
}

void HuTaoParser::Parameter_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_array(this);
}

void HuTaoParser::Parameter_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_array(this);
}

HuTaoParser::Parameter_arrayContext* HuTaoParser::parameter_array() {
  Parameter_arrayContext *_localctx = _tracker.createInstance<Parameter_arrayContext>(_ctx, getState());
  enterRule(_localctx, 286, HuTaoParser::RuleParameter_array);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1822);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1821);
      attributes();
    }
    setState(1824);
    match(HuTaoParser::PARAMS);
    setState(1825);
    array_type();
    setState(1826);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_declarationsContext ------------------------------------------------------------------

HuTaoParser::Accessor_declarationsContext::Accessor_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Accessor_declarationsContext::GET() {
  return getToken(HuTaoParser::GET, 0);
}

HuTaoParser::Accessor_bodyContext* HuTaoParser::Accessor_declarationsContext::accessor_body() {
  return getRuleContext<HuTaoParser::Accessor_bodyContext>(0);
}

tree::TerminalNode* HuTaoParser::Accessor_declarationsContext::SET() {
  return getToken(HuTaoParser::SET, 0);
}

HuTaoParser::AttributesContext* HuTaoParser::Accessor_declarationsContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::Accessor_modifierContext* HuTaoParser::Accessor_declarationsContext::accessor_modifier() {
  return getRuleContext<HuTaoParser::Accessor_modifierContext>(0);
}

HuTaoParser::Set_accessor_declarationContext* HuTaoParser::Accessor_declarationsContext::set_accessor_declaration() {
  return getRuleContext<HuTaoParser::Set_accessor_declarationContext>(0);
}

HuTaoParser::Get_accessor_declarationContext* HuTaoParser::Accessor_declarationsContext::get_accessor_declaration() {
  return getRuleContext<HuTaoParser::Get_accessor_declarationContext>(0);
}


size_t HuTaoParser::Accessor_declarationsContext::getRuleIndex() const {
  return HuTaoParser::RuleAccessor_declarations;
}

void HuTaoParser::Accessor_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_declarations(this);
}

void HuTaoParser::Accessor_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_declarations(this);
}

HuTaoParser::Accessor_declarationsContext* HuTaoParser::accessor_declarations() {
  Accessor_declarationsContext *_localctx = _tracker.createInstance<Accessor_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 288, HuTaoParser::RuleAccessor_declarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1829);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1828);
      dynamic_cast<Accessor_declarationsContext *>(_localctx)->attrs = attributes();
    }
    setState(1832);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 47) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 47)) & ((1ULL << (HuTaoParser::INTERNAL - 47))
      | (1ULL << (HuTaoParser::PRIVATE - 47))
      | (1ULL << (HuTaoParser::PROTECTED - 47)))) != 0)) {
      setState(1831);
      dynamic_cast<Accessor_declarationsContext *>(_localctx)->mods = accessor_modifier();
    }
    setState(1844);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::GET: {
        setState(1834);
        match(HuTaoParser::GET);
        setState(1835);
        accessor_body();
        setState(1837);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::INTERNAL || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (HuTaoParser::PRIVATE - 65))
          | (1ULL << (HuTaoParser::PROTECTED - 65))
          | (1ULL << (HuTaoParser::SET - 65))
          | (1ULL << (HuTaoParser::OPEN_BRACKET - 65)))) != 0)) {
          setState(1836);
          set_accessor_declaration();
        }
        break;
      }

      case HuTaoParser::SET: {
        setState(1839);
        match(HuTaoParser::SET);
        setState(1840);
        accessor_body();
        setState(1842);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::GET

        || _la == HuTaoParser::INTERNAL || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (HuTaoParser::PRIVATE - 65))
          | (1ULL << (HuTaoParser::PROTECTED - 65))
          | (1ULL << (HuTaoParser::OPEN_BRACKET - 65)))) != 0)) {
          setState(1841);
          get_accessor_declaration();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_accessor_declarationContext ------------------------------------------------------------------

HuTaoParser::Get_accessor_declarationContext::Get_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Get_accessor_declarationContext::GET() {
  return getToken(HuTaoParser::GET, 0);
}

HuTaoParser::Accessor_bodyContext* HuTaoParser::Get_accessor_declarationContext::accessor_body() {
  return getRuleContext<HuTaoParser::Accessor_bodyContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Get_accessor_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::Accessor_modifierContext* HuTaoParser::Get_accessor_declarationContext::accessor_modifier() {
  return getRuleContext<HuTaoParser::Accessor_modifierContext>(0);
}


size_t HuTaoParser::Get_accessor_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleGet_accessor_declaration;
}

void HuTaoParser::Get_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_accessor_declaration(this);
}

void HuTaoParser::Get_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_accessor_declaration(this);
}

HuTaoParser::Get_accessor_declarationContext* HuTaoParser::get_accessor_declaration() {
  Get_accessor_declarationContext *_localctx = _tracker.createInstance<Get_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 290, HuTaoParser::RuleGet_accessor_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1847);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1846);
      attributes();
    }
    setState(1850);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 47) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 47)) & ((1ULL << (HuTaoParser::INTERNAL - 47))
      | (1ULL << (HuTaoParser::PRIVATE - 47))
      | (1ULL << (HuTaoParser::PROTECTED - 47)))) != 0)) {
      setState(1849);
      accessor_modifier();
    }
    setState(1852);
    match(HuTaoParser::GET);
    setState(1853);
    accessor_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_accessor_declarationContext ------------------------------------------------------------------

HuTaoParser::Set_accessor_declarationContext::Set_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Set_accessor_declarationContext::SET() {
  return getToken(HuTaoParser::SET, 0);
}

HuTaoParser::Accessor_bodyContext* HuTaoParser::Set_accessor_declarationContext::accessor_body() {
  return getRuleContext<HuTaoParser::Accessor_bodyContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Set_accessor_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::Accessor_modifierContext* HuTaoParser::Set_accessor_declarationContext::accessor_modifier() {
  return getRuleContext<HuTaoParser::Accessor_modifierContext>(0);
}


size_t HuTaoParser::Set_accessor_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleSet_accessor_declaration;
}

void HuTaoParser::Set_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_accessor_declaration(this);
}

void HuTaoParser::Set_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_accessor_declaration(this);
}

HuTaoParser::Set_accessor_declarationContext* HuTaoParser::set_accessor_declaration() {
  Set_accessor_declarationContext *_localctx = _tracker.createInstance<Set_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 292, HuTaoParser::RuleSet_accessor_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1856);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1855);
      attributes();
    }
    setState(1859);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 47) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 47)) & ((1ULL << (HuTaoParser::INTERNAL - 47))
      | (1ULL << (HuTaoParser::PRIVATE - 47))
      | (1ULL << (HuTaoParser::PROTECTED - 47)))) != 0)) {
      setState(1858);
      accessor_modifier();
    }
    setState(1861);
    match(HuTaoParser::SET);
    setState(1862);
    accessor_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_modifierContext ------------------------------------------------------------------

HuTaoParser::Accessor_modifierContext::Accessor_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Accessor_modifierContext::PROTECTED() {
  return getToken(HuTaoParser::PROTECTED, 0);
}

tree::TerminalNode* HuTaoParser::Accessor_modifierContext::INTERNAL() {
  return getToken(HuTaoParser::INTERNAL, 0);
}

tree::TerminalNode* HuTaoParser::Accessor_modifierContext::PRIVATE() {
  return getToken(HuTaoParser::PRIVATE, 0);
}


size_t HuTaoParser::Accessor_modifierContext::getRuleIndex() const {
  return HuTaoParser::RuleAccessor_modifier;
}

void HuTaoParser::Accessor_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_modifier(this);
}

void HuTaoParser::Accessor_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_modifier(this);
}

HuTaoParser::Accessor_modifierContext* HuTaoParser::accessor_modifier() {
  Accessor_modifierContext *_localctx = _tracker.createInstance<Accessor_modifierContext>(_ctx, getState());
  enterRule(_localctx, 294, HuTaoParser::RuleAccessor_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1871);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1864);
      match(HuTaoParser::PROTECTED);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1865);
      match(HuTaoParser::INTERNAL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1866);
      match(HuTaoParser::PRIVATE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1867);
      match(HuTaoParser::PROTECTED);
      setState(1868);
      match(HuTaoParser::INTERNAL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1869);
      match(HuTaoParser::INTERNAL);
      setState(1870);
      match(HuTaoParser::PROTECTED);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accessor_bodyContext ------------------------------------------------------------------

HuTaoParser::Accessor_bodyContext::Accessor_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::Accessor_bodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

tree::TerminalNode* HuTaoParser::Accessor_bodyContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Accessor_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleAccessor_body;
}

void HuTaoParser::Accessor_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor_body(this);
}

void HuTaoParser::Accessor_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor_body(this);
}

HuTaoParser::Accessor_bodyContext* HuTaoParser::accessor_body() {
  Accessor_bodyContext *_localctx = _tracker.createInstance<Accessor_bodyContext>(_ctx, getState());
  enterRule(_localctx, 296, HuTaoParser::RuleAccessor_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1875);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1873);
        block();
        break;
      }

      case HuTaoParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(1874);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_accessor_declarationsContext ------------------------------------------------------------------

HuTaoParser::Event_accessor_declarationsContext::Event_accessor_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Event_accessor_declarationsContext::ADD() {
  return getToken(HuTaoParser::ADD, 0);
}

HuTaoParser::BlockContext* HuTaoParser::Event_accessor_declarationsContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::Remove_accessor_declarationContext* HuTaoParser::Event_accessor_declarationsContext::remove_accessor_declaration() {
  return getRuleContext<HuTaoParser::Remove_accessor_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::Event_accessor_declarationsContext::REMOVE() {
  return getToken(HuTaoParser::REMOVE, 0);
}

HuTaoParser::Add_accessor_declarationContext* HuTaoParser::Event_accessor_declarationsContext::add_accessor_declaration() {
  return getRuleContext<HuTaoParser::Add_accessor_declarationContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Event_accessor_declarationsContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}


size_t HuTaoParser::Event_accessor_declarationsContext::getRuleIndex() const {
  return HuTaoParser::RuleEvent_accessor_declarations;
}

void HuTaoParser::Event_accessor_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent_accessor_declarations(this);
}

void HuTaoParser::Event_accessor_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent_accessor_declarations(this);
}

HuTaoParser::Event_accessor_declarationsContext* HuTaoParser::event_accessor_declarations() {
  Event_accessor_declarationsContext *_localctx = _tracker.createInstance<Event_accessor_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 298, HuTaoParser::RuleEvent_accessor_declarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1878);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1877);
      attributes();
    }
    setState(1888);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD: {
        setState(1880);
        match(HuTaoParser::ADD);
        setState(1881);
        block();
        setState(1882);
        remove_accessor_declaration();
        break;
      }

      case HuTaoParser::REMOVE: {
        setState(1884);
        match(HuTaoParser::REMOVE);
        setState(1885);
        block();
        setState(1886);
        add_accessor_declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_accessor_declarationContext ------------------------------------------------------------------

HuTaoParser::Add_accessor_declarationContext::Add_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Add_accessor_declarationContext::ADD() {
  return getToken(HuTaoParser::ADD, 0);
}

HuTaoParser::BlockContext* HuTaoParser::Add_accessor_declarationContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Add_accessor_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}


size_t HuTaoParser::Add_accessor_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleAdd_accessor_declaration;
}

void HuTaoParser::Add_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_accessor_declaration(this);
}

void HuTaoParser::Add_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_accessor_declaration(this);
}

HuTaoParser::Add_accessor_declarationContext* HuTaoParser::add_accessor_declaration() {
  Add_accessor_declarationContext *_localctx = _tracker.createInstance<Add_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 300, HuTaoParser::RuleAdd_accessor_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1891);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1890);
      attributes();
    }
    setState(1893);
    match(HuTaoParser::ADD);
    setState(1894);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Remove_accessor_declarationContext ------------------------------------------------------------------

HuTaoParser::Remove_accessor_declarationContext::Remove_accessor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Remove_accessor_declarationContext::REMOVE() {
  return getToken(HuTaoParser::REMOVE, 0);
}

HuTaoParser::BlockContext* HuTaoParser::Remove_accessor_declarationContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Remove_accessor_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}


size_t HuTaoParser::Remove_accessor_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleRemove_accessor_declaration;
}

void HuTaoParser::Remove_accessor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRemove_accessor_declaration(this);
}

void HuTaoParser::Remove_accessor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRemove_accessor_declaration(this);
}

HuTaoParser::Remove_accessor_declarationContext* HuTaoParser::remove_accessor_declaration() {
  Remove_accessor_declarationContext *_localctx = _tracker.createInstance<Remove_accessor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 302, HuTaoParser::RuleRemove_accessor_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1897);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1896);
      attributes();
    }
    setState(1899);
    match(HuTaoParser::REMOVE);
    setState(1900);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Overloadable_operatorContext ------------------------------------------------------------------

HuTaoParser::Overloadable_operatorContext::Overloadable_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::PLUS() {
  return getToken(HuTaoParser::PLUS, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::MINUS() {
  return getToken(HuTaoParser::MINUS, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::BANG() {
  return getToken(HuTaoParser::BANG, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::TILDE() {
  return getToken(HuTaoParser::TILDE, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_INC() {
  return getToken(HuTaoParser::OP_INC, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_DEC() {
  return getToken(HuTaoParser::OP_DEC, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::TRUE() {
  return getToken(HuTaoParser::TRUE, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::FALSE() {
  return getToken(HuTaoParser::FALSE, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::STAR() {
  return getToken(HuTaoParser::STAR, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::DIV() {
  return getToken(HuTaoParser::DIV, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::PERCENT() {
  return getToken(HuTaoParser::PERCENT, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::AMP() {
  return getToken(HuTaoParser::AMP, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::BITWISE_OR() {
  return getToken(HuTaoParser::BITWISE_OR, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::CARET() {
  return getToken(HuTaoParser::CARET, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_LEFT_SHIFT() {
  return getToken(HuTaoParser::OP_LEFT_SHIFT, 0);
}

HuTaoParser::Right_shiftContext* HuTaoParser::Overloadable_operatorContext::right_shift() {
  return getRuleContext<HuTaoParser::Right_shiftContext>(0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_EQ() {
  return getToken(HuTaoParser::OP_EQ, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_NE() {
  return getToken(HuTaoParser::OP_NE, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::LT() {
  return getToken(HuTaoParser::LT, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_GE() {
  return getToken(HuTaoParser::OP_GE, 0);
}

tree::TerminalNode* HuTaoParser::Overloadable_operatorContext::OP_LE() {
  return getToken(HuTaoParser::OP_LE, 0);
}


size_t HuTaoParser::Overloadable_operatorContext::getRuleIndex() const {
  return HuTaoParser::RuleOverloadable_operator;
}

void HuTaoParser::Overloadable_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOverloadable_operator(this);
}

void HuTaoParser::Overloadable_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOverloadable_operator(this);
}

HuTaoParser::Overloadable_operatorContext* HuTaoParser::overloadable_operator() {
  Overloadable_operatorContext *_localctx = _tracker.createInstance<Overloadable_operatorContext>(_ctx, getState());
  enterRule(_localctx, 304, HuTaoParser::RuleOverloadable_operator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1924);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1902);
      match(HuTaoParser::PLUS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1903);
      match(HuTaoParser::MINUS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1904);
      match(HuTaoParser::BANG);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1905);
      match(HuTaoParser::TILDE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1906);
      match(HuTaoParser::OP_INC);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1907);
      match(HuTaoParser::OP_DEC);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1908);
      match(HuTaoParser::TRUE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1909);
      match(HuTaoParser::FALSE);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1910);
      match(HuTaoParser::STAR);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1911);
      match(HuTaoParser::DIV);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1912);
      match(HuTaoParser::PERCENT);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1913);
      match(HuTaoParser::AMP);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1914);
      match(HuTaoParser::BITWISE_OR);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1915);
      match(HuTaoParser::CARET);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1916);
      match(HuTaoParser::OP_LEFT_SHIFT);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1917);
      right_shift();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1918);
      match(HuTaoParser::OP_EQ);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1919);
      match(HuTaoParser::OP_NE);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1920);
      match(HuTaoParser::GT);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1921);
      match(HuTaoParser::LT);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1922);
      match(HuTaoParser::OP_GE);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1923);
      match(HuTaoParser::OP_LE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conversion_operator_declaratorContext ------------------------------------------------------------------

HuTaoParser::Conversion_operator_declaratorContext::Conversion_operator_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Conversion_operator_declaratorContext::OPERATOR() {
  return getToken(HuTaoParser::OPERATOR, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Conversion_operator_declaratorContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Conversion_operator_declaratorContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

HuTaoParser::Arg_declarationContext* HuTaoParser::Conversion_operator_declaratorContext::arg_declaration() {
  return getRuleContext<HuTaoParser::Arg_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::Conversion_operator_declaratorContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Conversion_operator_declaratorContext::IMPLICIT() {
  return getToken(HuTaoParser::IMPLICIT, 0);
}

tree::TerminalNode* HuTaoParser::Conversion_operator_declaratorContext::EXPLICIT() {
  return getToken(HuTaoParser::EXPLICIT, 0);
}


size_t HuTaoParser::Conversion_operator_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleConversion_operator_declarator;
}

void HuTaoParser::Conversion_operator_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversion_operator_declarator(this);
}

void HuTaoParser::Conversion_operator_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversion_operator_declarator(this);
}

HuTaoParser::Conversion_operator_declaratorContext* HuTaoParser::conversion_operator_declarator() {
  Conversion_operator_declaratorContext *_localctx = _tracker.createInstance<Conversion_operator_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 306, HuTaoParser::RuleConversion_operator_declarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1926);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::EXPLICIT

    || _la == HuTaoParser::IMPLICIT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1927);
    match(HuTaoParser::OPERATOR);
    setState(1928);
    type_();
    setState(1929);
    match(HuTaoParser::OPEN_PARENS);
    setState(1930);
    arg_declaration();
    setState(1931);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_initializerContext ------------------------------------------------------------------

HuTaoParser::Constructor_initializerContext::Constructor_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Constructor_initializerContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_initializerContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_initializerContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_initializerContext::BASE() {
  return getToken(HuTaoParser::BASE, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_initializerContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}

HuTaoParser::Argument_listContext* HuTaoParser::Constructor_initializerContext::argument_list() {
  return getRuleContext<HuTaoParser::Argument_listContext>(0);
}


size_t HuTaoParser::Constructor_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleConstructor_initializer;
}

void HuTaoParser::Constructor_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_initializer(this);
}

void HuTaoParser::Constructor_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_initializer(this);
}

HuTaoParser::Constructor_initializerContext* HuTaoParser::constructor_initializer() {
  Constructor_initializerContext *_localctx = _tracker.createInstance<Constructor_initializerContext>(_ctx, getState());
  enterRule(_localctx, 308, HuTaoParser::RuleConstructor_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1933);
    match(HuTaoParser::COLON);
    setState(1934);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::BASE || _la == HuTaoParser::THIS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1935);
    match(HuTaoParser::OPEN_PARENS);
    setState(1937);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
      | (1ULL << (HuTaoParser::MINUS - 128))
      | (1ULL << (HuTaoParser::STAR - 128))
      | (1ULL << (HuTaoParser::AMP - 128))
      | (1ULL << (HuTaoParser::CARET - 128))
      | (1ULL << (HuTaoParser::BANG - 128))
      | (1ULL << (HuTaoParser::TILDE - 128))
      | (1ULL << (HuTaoParser::OP_INC - 128))
      | (1ULL << (HuTaoParser::OP_DEC - 128))
      | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
      setState(1936);
      argument_list();
    }
    setState(1939);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

HuTaoParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::BlockContext* HuTaoParser::BodyContext::block() {
  return getRuleContext<HuTaoParser::BlockContext>(0);
}

tree::TerminalNode* HuTaoParser::BodyContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::BodyContext::getRuleIndex() const {
  return HuTaoParser::RuleBody;
}

void HuTaoParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void HuTaoParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}

HuTaoParser::BodyContext* HuTaoParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 310, HuTaoParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1943);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1941);
        block();
        break;
      }

      case HuTaoParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(1942);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_interfacesContext ------------------------------------------------------------------

HuTaoParser::Struct_interfacesContext::Struct_interfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Struct_interfacesContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Interface_type_listContext* HuTaoParser::Struct_interfacesContext::interface_type_list() {
  return getRuleContext<HuTaoParser::Interface_type_listContext>(0);
}


size_t HuTaoParser::Struct_interfacesContext::getRuleIndex() const {
  return HuTaoParser::RuleStruct_interfaces;
}

void HuTaoParser::Struct_interfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_interfaces(this);
}

void HuTaoParser::Struct_interfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_interfaces(this);
}

HuTaoParser::Struct_interfacesContext* HuTaoParser::struct_interfaces() {
  Struct_interfacesContext *_localctx = _tracker.createInstance<Struct_interfacesContext>(_ctx, getState());
  enterRule(_localctx, 312, HuTaoParser::RuleStruct_interfaces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1945);
    match(HuTaoParser::COLON);
    setState(1946);
    interface_type_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_bodyContext ------------------------------------------------------------------

HuTaoParser::Struct_bodyContext::Struct_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Struct_bodyContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Struct_bodyContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<HuTaoParser::Struct_member_declarationContext *> HuTaoParser::Struct_bodyContext::struct_member_declaration() {
  return getRuleContexts<HuTaoParser::Struct_member_declarationContext>();
}

HuTaoParser::Struct_member_declarationContext* HuTaoParser::Struct_bodyContext::struct_member_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Struct_member_declarationContext>(i);
}


size_t HuTaoParser::Struct_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleStruct_body;
}

void HuTaoParser::Struct_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_body(this);
}

void HuTaoParser::Struct_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_body(this);
}

HuTaoParser::Struct_bodyContext* HuTaoParser::struct_body() {
  Struct_bodyContext *_localctx = _tracker.createInstance<Struct_bodyContext>(_ctx, getState());
  enterRule(_localctx, 314, HuTaoParser::RuleStruct_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1948);
    match(HuTaoParser::OPEN_BRACE);
    setState(1952);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::CONST)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::EVENT)
      | (1ULL << HuTaoParser::EXPLICIT)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::FIXED)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IMPLICIT)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OVERRIDE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::PRIVATE - 64))
      | (1ULL << (HuTaoParser::PROTECTED - 64))
      | (1ULL << (HuTaoParser::PUBLIC - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SEALED - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STATIC - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::STRUCT - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VIRTUAL - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::VOLATILE - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(1949);
      struct_member_declaration();
      setState(1954);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1955);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Struct_member_declarationContext::Struct_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Common_member_declarationContext* HuTaoParser::Struct_member_declarationContext::common_member_declaration() {
  return getRuleContext<HuTaoParser::Common_member_declarationContext>(0);
}

tree::TerminalNode* HuTaoParser::Struct_member_declarationContext::FIXED() {
  return getToken(HuTaoParser::FIXED, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Struct_member_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Struct_member_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::AttributesContext* HuTaoParser::Struct_member_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::All_member_modifiersContext* HuTaoParser::Struct_member_declarationContext::all_member_modifiers() {
  return getRuleContext<HuTaoParser::All_member_modifiersContext>(0);
}

std::vector<HuTaoParser::Fixed_size_buffer_declaratorContext *> HuTaoParser::Struct_member_declarationContext::fixed_size_buffer_declarator() {
  return getRuleContexts<HuTaoParser::Fixed_size_buffer_declaratorContext>();
}

HuTaoParser::Fixed_size_buffer_declaratorContext* HuTaoParser::Struct_member_declarationContext::fixed_size_buffer_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Fixed_size_buffer_declaratorContext>(i);
}


size_t HuTaoParser::Struct_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleStruct_member_declaration;
}

void HuTaoParser::Struct_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_member_declaration(this);
}

void HuTaoParser::Struct_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_member_declaration(this);
}

HuTaoParser::Struct_member_declarationContext* HuTaoParser::struct_member_declaration() {
  Struct_member_declarationContext *_localctx = _tracker.createInstance<Struct_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 316, HuTaoParser::RuleStruct_member_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1958);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(1957);
      attributes();
    }
    setState(1961);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx)) {
    case 1: {
      setState(1960);
      all_member_modifiers();
      break;
    }

    default:
      break;
    }
    setState(1973);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CLASS:
      case HuTaoParser::CONST:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::ENUM:
      case HuTaoParser::EQUALS:
      case HuTaoParser::EVENT:
      case HuTaoParser::EXPLICIT:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::IMPLICIT:
      case HuTaoParser::INTERFACE:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::READONLY:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::STRUCT:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::VOID:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS: {
        setState(1963);
        common_member_declaration();
        break;
      }

      case HuTaoParser::FIXED: {
        setState(1964);
        match(HuTaoParser::FIXED);
        setState(1965);
        type_();
        setState(1967); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1966);
          fixed_size_buffer_declarator();
          setState(1969); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
          | (1ULL << HuTaoParser::ALIAS)
          | (1ULL << HuTaoParser::ASCENDING)
          | (1ULL << HuTaoParser::ASYNC)
          | (1ULL << HuTaoParser::AWAIT)
          | (1ULL << HuTaoParser::BY)
          | (1ULL << HuTaoParser::EQUALS)
          | (1ULL << HuTaoParser::FROM)
          | (1ULL << HuTaoParser::GET)
          | (1ULL << HuTaoParser::GROUP)
          | (1ULL << HuTaoParser::INTO)
          | (1ULL << HuTaoParser::JOIN)
          | (1ULL << HuTaoParser::LET)
          | (1ULL << HuTaoParser::NAMEOF)
          | (1ULL << HuTaoParser::ON)
          | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
          | (1ULL << (HuTaoParser::REMOVE - 64))
          | (1ULL << (HuTaoParser::SELECT - 64))
          | (1ULL << (HuTaoParser::SET - 64))
          | (1ULL << (HuTaoParser::UNMANAGED - 64))
          | (1ULL << (HuTaoParser::VAR - 64))
          | (1ULL << (HuTaoParser::WHEN - 64))
          | (1ULL << (HuTaoParser::WHERE - 64))
          | (1ULL << (HuTaoParser::YIELD - 64))
          | (1ULL << (HuTaoParser::IDENTIFIER - 64)))) != 0));
        setState(1971);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

HuTaoParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Base_typeContext* HuTaoParser::Array_typeContext::base_type() {
  return getRuleContext<HuTaoParser::Base_typeContext>(0);
}

std::vector<HuTaoParser::Rank_specifierContext *> HuTaoParser::Array_typeContext::rank_specifier() {
  return getRuleContexts<HuTaoParser::Rank_specifierContext>();
}

HuTaoParser::Rank_specifierContext* HuTaoParser::Array_typeContext::rank_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Rank_specifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Array_typeContext::STAR() {
  return getTokens(HuTaoParser::STAR);
}

tree::TerminalNode* HuTaoParser::Array_typeContext::STAR(size_t i) {
  return getToken(HuTaoParser::STAR, i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Array_typeContext::INTERR() {
  return getTokens(HuTaoParser::INTERR);
}

tree::TerminalNode* HuTaoParser::Array_typeContext::INTERR(size_t i) {
  return getToken(HuTaoParser::INTERR, i);
}


size_t HuTaoParser::Array_typeContext::getRuleIndex() const {
  return HuTaoParser::RuleArray_type;
}

void HuTaoParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void HuTaoParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}

HuTaoParser::Array_typeContext* HuTaoParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 318, HuTaoParser::RuleArray_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1975);
    base_type();
    setState(1983); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1979);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HuTaoParser::STAR

      || _la == HuTaoParser::INTERR) {
        setState(1976);
        _la = _input->LA(1);
        if (!(_la == HuTaoParser::STAR

        || _la == HuTaoParser::INTERR)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1981);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1982);
      rank_specifier();
      setState(1985); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 120) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 120)) & ((1ULL << (HuTaoParser::OPEN_BRACKET - 120))
      | (1ULL << (HuTaoParser::STAR - 120))
      | (1ULL << (HuTaoParser::INTERR - 120)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rank_specifierContext ------------------------------------------------------------------

HuTaoParser::Rank_specifierContext::Rank_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Rank_specifierContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Rank_specifierContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Rank_specifierContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Rank_specifierContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Rank_specifierContext::getRuleIndex() const {
  return HuTaoParser::RuleRank_specifier;
}

void HuTaoParser::Rank_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRank_specifier(this);
}

void HuTaoParser::Rank_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRank_specifier(this);
}

HuTaoParser::Rank_specifierContext* HuTaoParser::rank_specifier() {
  Rank_specifierContext *_localctx = _tracker.createInstance<Rank_specifierContext>(_ctx, getState());
  enterRule(_localctx, 320, HuTaoParser::RuleRank_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1987);
    match(HuTaoParser::OPEN_BRACKET);
    setState(1991);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(1988);
      match(HuTaoParser::COMMA);
      setState(1993);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1994);
    match(HuTaoParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_initializerContext ------------------------------------------------------------------

HuTaoParser::Array_initializerContext::Array_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Array_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Array_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<HuTaoParser::Variable_initializerContext *> HuTaoParser::Array_initializerContext::variable_initializer() {
  return getRuleContexts<HuTaoParser::Variable_initializerContext>();
}

HuTaoParser::Variable_initializerContext* HuTaoParser::Array_initializerContext::variable_initializer(size_t i) {
  return getRuleContext<HuTaoParser::Variable_initializerContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Array_initializerContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Array_initializerContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Array_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleArray_initializer;
}

void HuTaoParser::Array_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_initializer(this);
}

void HuTaoParser::Array_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_initializer(this);
}

HuTaoParser::Array_initializerContext* HuTaoParser::array_initializer() {
  Array_initializerContext *_localctx = _tracker.createInstance<Array_initializerContext>(_ctx, getState());
  enterRule(_localctx, 322, HuTaoParser::RuleArray_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1996);
    match(HuTaoParser::OPEN_BRACE);
    setState(2008);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACE - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
      | (1ULL << (HuTaoParser::MINUS - 128))
      | (1ULL << (HuTaoParser::STAR - 128))
      | (1ULL << (HuTaoParser::AMP - 128))
      | (1ULL << (HuTaoParser::CARET - 128))
      | (1ULL << (HuTaoParser::BANG - 128))
      | (1ULL << (HuTaoParser::TILDE - 128))
      | (1ULL << (HuTaoParser::OP_INC - 128))
      | (1ULL << (HuTaoParser::OP_DEC - 128))
      | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
      setState(1997);
      variable_initializer();
      setState(2002);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 236, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1998);
          match(HuTaoParser::COMMA);
          setState(1999);
          variable_initializer(); 
        }
        setState(2004);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 236, _ctx);
      }
      setState(2006);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(2005);
        match(HuTaoParser::COMMA);
      }
    }
    setState(2010);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variant_type_parameter_listContext ------------------------------------------------------------------

HuTaoParser::Variant_type_parameter_listContext::Variant_type_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Variant_type_parameter_listContext::LT() {
  return getToken(HuTaoParser::LT, 0);
}

std::vector<HuTaoParser::Variant_type_parameterContext *> HuTaoParser::Variant_type_parameter_listContext::variant_type_parameter() {
  return getRuleContexts<HuTaoParser::Variant_type_parameterContext>();
}

HuTaoParser::Variant_type_parameterContext* HuTaoParser::Variant_type_parameter_listContext::variant_type_parameter(size_t i) {
  return getRuleContext<HuTaoParser::Variant_type_parameterContext>(i);
}

tree::TerminalNode* HuTaoParser::Variant_type_parameter_listContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Variant_type_parameter_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Variant_type_parameter_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Variant_type_parameter_listContext::getRuleIndex() const {
  return HuTaoParser::RuleVariant_type_parameter_list;
}

void HuTaoParser::Variant_type_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant_type_parameter_list(this);
}

void HuTaoParser::Variant_type_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant_type_parameter_list(this);
}

HuTaoParser::Variant_type_parameter_listContext* HuTaoParser::variant_type_parameter_list() {
  Variant_type_parameter_listContext *_localctx = _tracker.createInstance<Variant_type_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 324, HuTaoParser::RuleVariant_type_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2012);
    match(HuTaoParser::LT);
    setState(2013);
    variant_type_parameter();
    setState(2018);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(2014);
      match(HuTaoParser::COMMA);
      setState(2015);
      variant_type_parameter();
      setState(2020);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2021);
    match(HuTaoParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variant_type_parameterContext ------------------------------------------------------------------

HuTaoParser::Variant_type_parameterContext::Variant_type_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Variant_type_parameterContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Variant_type_parameterContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

HuTaoParser::Variance_annotationContext* HuTaoParser::Variant_type_parameterContext::variance_annotation() {
  return getRuleContext<HuTaoParser::Variance_annotationContext>(0);
}


size_t HuTaoParser::Variant_type_parameterContext::getRuleIndex() const {
  return HuTaoParser::RuleVariant_type_parameter;
}

void HuTaoParser::Variant_type_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant_type_parameter(this);
}

void HuTaoParser::Variant_type_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant_type_parameter(this);
}

HuTaoParser::Variant_type_parameterContext* HuTaoParser::variant_type_parameter() {
  Variant_type_parameterContext *_localctx = _tracker.createInstance<Variant_type_parameterContext>(_ctx, getState());
  enterRule(_localctx, 326, HuTaoParser::RuleVariant_type_parameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2024);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(2023);
      attributes();
    }
    setState(2027);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::IN

    || _la == HuTaoParser::OUT) {
      setState(2026);
      variance_annotation();
    }
    setState(2029);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variance_annotationContext ------------------------------------------------------------------

HuTaoParser::Variance_annotationContext::Variance_annotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Variance_annotationContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

tree::TerminalNode* HuTaoParser::Variance_annotationContext::OUT() {
  return getToken(HuTaoParser::OUT, 0);
}


size_t HuTaoParser::Variance_annotationContext::getRuleIndex() const {
  return HuTaoParser::RuleVariance_annotation;
}

void HuTaoParser::Variance_annotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariance_annotation(this);
}

void HuTaoParser::Variance_annotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariance_annotation(this);
}

HuTaoParser::Variance_annotationContext* HuTaoParser::variance_annotation() {
  Variance_annotationContext *_localctx = _tracker.createInstance<Variance_annotationContext>(_ctx, getState());
  enterRule(_localctx, 328, HuTaoParser::RuleVariance_annotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2031);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::IN

    || _la == HuTaoParser::OUT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_baseContext ------------------------------------------------------------------

HuTaoParser::Interface_baseContext::Interface_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Interface_baseContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Interface_type_listContext* HuTaoParser::Interface_baseContext::interface_type_list() {
  return getRuleContext<HuTaoParser::Interface_type_listContext>(0);
}


size_t HuTaoParser::Interface_baseContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_base;
}

void HuTaoParser::Interface_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_base(this);
}

void HuTaoParser::Interface_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_base(this);
}

HuTaoParser::Interface_baseContext* HuTaoParser::interface_base() {
  Interface_baseContext *_localctx = _tracker.createInstance<Interface_baseContext>(_ctx, getState());
  enterRule(_localctx, 330, HuTaoParser::RuleInterface_base);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2033);
    match(HuTaoParser::COLON);
    setState(2034);
    interface_type_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_bodyContext ------------------------------------------------------------------

HuTaoParser::Interface_bodyContext::Interface_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Interface_bodyContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Interface_bodyContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<HuTaoParser::Interface_member_declarationContext *> HuTaoParser::Interface_bodyContext::interface_member_declaration() {
  return getRuleContexts<HuTaoParser::Interface_member_declarationContext>();
}

HuTaoParser::Interface_member_declarationContext* HuTaoParser::Interface_bodyContext::interface_member_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Interface_member_declarationContext>(i);
}


size_t HuTaoParser::Interface_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_body;
}

void HuTaoParser::Interface_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_body(this);
}

void HuTaoParser::Interface_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_body(this);
}

HuTaoParser::Interface_bodyContext* HuTaoParser::interface_body() {
  Interface_bodyContext *_localctx = _tracker.createInstance<Interface_bodyContext>(_ctx, getState());
  enterRule(_localctx, 332, HuTaoParser::RuleInterface_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2036);
    match(HuTaoParser::OPEN_BRACE);
    setState(2040);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::EVENT)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::READONLY - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::UNSAFE - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(2037);
      interface_member_declaration();
      setState(2042);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2043);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Interface_member_declarationContext::Interface_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Interface_member_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Interface_member_declarationContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::EVENT() {
  return getToken(HuTaoParser::EVENT, 0);
}

HuTaoParser::AttributesContext* HuTaoParser::Interface_member_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::NEW() {
  return getToken(HuTaoParser::NEW, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

HuTaoParser::Interface_accessorsContext* HuTaoParser::Interface_member_declarationContext::interface_accessors() {
  return getRuleContext<HuTaoParser::Interface_accessorsContext>(0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Interface_member_declarationContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::UNSAFE() {
  return getToken(HuTaoParser::UNSAFE, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::Interface_member_declarationContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::Interface_member_declarationContext::type_parameter_list() {
  return getRuleContext<HuTaoParser::Type_parameter_listContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Interface_member_declarationContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}


size_t HuTaoParser::Interface_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_member_declaration;
}

void HuTaoParser::Interface_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_member_declaration(this);
}

void HuTaoParser::Interface_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_member_declaration(this);
}

HuTaoParser::Interface_member_declarationContext* HuTaoParser::interface_member_declaration() {
  Interface_member_declarationContext *_localctx = _tracker.createInstance<Interface_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 334, HuTaoParser::RuleInterface_member_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2046);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(2045);
      attributes();
    }
    setState(2049);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::NEW) {
      setState(2048);
      match(HuTaoParser::NEW);
    }
    setState(2114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx)) {
    case 1: {
      setState(2052);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::UNSAFE) {
        setState(2051);
        match(HuTaoParser::UNSAFE);
      }
      setState(2059);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2054);
        match(HuTaoParser::REF);
        break;
      }

      case 2: {
        setState(2055);
        match(HuTaoParser::REF);
        setState(2056);
        match(HuTaoParser::READONLY);
        break;
      }

      case 3: {
        setState(2057);
        match(HuTaoParser::READONLY);
        setState(2058);
        match(HuTaoParser::REF);
        break;
      }

      default:
        break;
      }
      setState(2061);
      type_();
      setState(2089);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx)) {
      case 1: {
        setState(2062);
        identifier();
        setState(2064);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::LT) {
          setState(2063);
          type_parameter_list();
        }
        setState(2066);
        match(HuTaoParser::OPEN_PARENS);
        setState(2068);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
          | (1ULL << HuTaoParser::ALIAS)
          | (1ULL << HuTaoParser::ASCENDING)
          | (1ULL << HuTaoParser::ASYNC)
          | (1ULL << HuTaoParser::AWAIT)
          | (1ULL << HuTaoParser::BOOL)
          | (1ULL << HuTaoParser::BY)
          | (1ULL << HuTaoParser::EQUALS)
          | (1ULL << HuTaoParser::FROM)
          | (1ULL << HuTaoParser::GET)
          | (1ULL << HuTaoParser::GROUP)
          | (1ULL << HuTaoParser::IN)
          | (1ULL << HuTaoParser::INTO)
          | (1ULL << HuTaoParser::JOIN)
          | (1ULL << HuTaoParser::LET)
          | (1ULL << HuTaoParser::NAMEOF)
          | (1ULL << HuTaoParser::OBJECT)
          | (1ULL << HuTaoParser::ON)
          | (1ULL << HuTaoParser::ORDERBY)
          | (1ULL << HuTaoParser::OUT)
          | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
          | (1ULL << (HuTaoParser::REF - 64))
          | (1ULL << (HuTaoParser::REMOVE - 64))
          | (1ULL << (HuTaoParser::SELECT - 64))
          | (1ULL << (HuTaoParser::SET - 64))
          | (1ULL << (HuTaoParser::STRING - 64))
          | (1ULL << (HuTaoParser::THIS - 64))
          | (1ULL << (HuTaoParser::UNMANAGED - 64))
          | (1ULL << (HuTaoParser::VAR - 64))
          | (1ULL << (HuTaoParser::VOID - 64))
          | (1ULL << (HuTaoParser::WHEN - 64))
          | (1ULL << (HuTaoParser::WHERE - 64))
          | (1ULL << (HuTaoParser::YIELD - 64))
          | (1ULL << (HuTaoParser::IDENTIFIER - 64))
          | (1ULL << (HuTaoParser::U8 - 64))
          | (1ULL << (HuTaoParser::I8 - 64))
          | (1ULL << (HuTaoParser::U16 - 64))
          | (1ULL << (HuTaoParser::I16 - 64))
          | (1ULL << (HuTaoParser::U32 - 64))
          | (1ULL << (HuTaoParser::I32 - 64))
          | (1ULL << (HuTaoParser::U64 - 64))
          | (1ULL << (HuTaoParser::I64 - 64))
          | (1ULL << (HuTaoParser::F32 - 64))
          | (1ULL << (HuTaoParser::F64 - 64))
          | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
          | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
          setState(2067);
          formal_parameter_list();
        }
        setState(2070);
        match(HuTaoParser::CLOSE_PARENS);
        setState(2072);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::WHERE) {
          setState(2071);
          type_parameter_constraints_clauses();
        }
        setState(2074);
        match(HuTaoParser::SEMICOLON);
        break;
      }

      case 2: {
        setState(2076);
        identifier();
        setState(2077);
        match(HuTaoParser::OPEN_BRACE);
        setState(2078);
        interface_accessors();
        setState(2079);
        match(HuTaoParser::CLOSE_BRACE);
        break;
      }

      case 3: {
        setState(2081);
        match(HuTaoParser::THIS);
        setState(2082);
        match(HuTaoParser::OPEN_BRACKET);
        setState(2083);
        formal_parameter_list();
        setState(2084);
        match(HuTaoParser::CLOSE_BRACKET);
        setState(2085);
        match(HuTaoParser::OPEN_BRACE);
        setState(2086);
        interface_accessors();
        setState(2087);
        match(HuTaoParser::CLOSE_BRACE);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(2092);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::UNSAFE) {
        setState(2091);
        match(HuTaoParser::UNSAFE);
      }
      setState(2094);
      match(HuTaoParser::VOID);
      setState(2095);
      identifier();
      setState(2097);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::LT) {
        setState(2096);
        type_parameter_list();
      }
      setState(2099);
      match(HuTaoParser::OPEN_PARENS);
      setState(2101);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::IN)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY)
        | (1ULL << HuTaoParser::OUT)
        | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::VOID - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
        setState(2100);
        formal_parameter_list();
      }
      setState(2103);
      match(HuTaoParser::CLOSE_PARENS);
      setState(2105);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::WHERE) {
        setState(2104);
        type_parameter_constraints_clauses();
      }
      setState(2107);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 3: {
      setState(2109);
      match(HuTaoParser::EVENT);
      setState(2110);
      type_();
      setState(2111);
      identifier();
      setState(2112);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_accessorsContext ------------------------------------------------------------------

HuTaoParser::Interface_accessorsContext::Interface_accessorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Interface_accessorsContext::GET() {
  return getToken(HuTaoParser::GET, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Interface_accessorsContext::SEMICOLON() {
  return getTokens(HuTaoParser::SEMICOLON);
}

tree::TerminalNode* HuTaoParser::Interface_accessorsContext::SEMICOLON(size_t i) {
  return getToken(HuTaoParser::SEMICOLON, i);
}

tree::TerminalNode* HuTaoParser::Interface_accessorsContext::SET() {
  return getToken(HuTaoParser::SET, 0);
}

std::vector<HuTaoParser::AttributesContext *> HuTaoParser::Interface_accessorsContext::attributes() {
  return getRuleContexts<HuTaoParser::AttributesContext>();
}

HuTaoParser::AttributesContext* HuTaoParser::Interface_accessorsContext::attributes(size_t i) {
  return getRuleContext<HuTaoParser::AttributesContext>(i);
}


size_t HuTaoParser::Interface_accessorsContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_accessors;
}

void HuTaoParser::Interface_accessorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_accessors(this);
}

void HuTaoParser::Interface_accessorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_accessors(this);
}

HuTaoParser::Interface_accessorsContext* HuTaoParser::interface_accessors() {
  Interface_accessorsContext *_localctx = _tracker.createInstance<Interface_accessorsContext>(_ctx, getState());
  enterRule(_localctx, 336, HuTaoParser::RuleInterface_accessors);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(2116);
      attributes();
    }
    setState(2137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::GET: {
        setState(2119);
        match(HuTaoParser::GET);
        setState(2120);
        match(HuTaoParser::SEMICOLON);
        setState(2126);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::SET

        || _la == HuTaoParser::OPEN_BRACKET) {
          setState(2122);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == HuTaoParser::OPEN_BRACKET) {
            setState(2121);
            attributes();
          }
          setState(2124);
          match(HuTaoParser::SET);
          setState(2125);
          match(HuTaoParser::SEMICOLON);
        }
        break;
      }

      case HuTaoParser::SET: {
        setState(2128);
        match(HuTaoParser::SET);
        setState(2129);
        match(HuTaoParser::SEMICOLON);
        setState(2135);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::GET || _la == HuTaoParser::OPEN_BRACKET) {
          setState(2131);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == HuTaoParser::OPEN_BRACKET) {
            setState(2130);
            attributes();
          }
          setState(2133);
          match(HuTaoParser::GET);
          setState(2134);
          match(HuTaoParser::SEMICOLON);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_baseContext ------------------------------------------------------------------

HuTaoParser::Enum_baseContext::Enum_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Enum_baseContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Enum_baseContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}


size_t HuTaoParser::Enum_baseContext::getRuleIndex() const {
  return HuTaoParser::RuleEnum_base;
}

void HuTaoParser::Enum_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_base(this);
}

void HuTaoParser::Enum_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_base(this);
}

HuTaoParser::Enum_baseContext* HuTaoParser::enum_base() {
  Enum_baseContext *_localctx = _tracker.createInstance<Enum_baseContext>(_ctx, getState());
  enterRule(_localctx, 338, HuTaoParser::RuleEnum_base);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2139);
    match(HuTaoParser::COLON);
    setState(2140);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_bodyContext ------------------------------------------------------------------

HuTaoParser::Enum_bodyContext::Enum_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Enum_bodyContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Enum_bodyContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<HuTaoParser::Enum_member_declarationContext *> HuTaoParser::Enum_bodyContext::enum_member_declaration() {
  return getRuleContexts<HuTaoParser::Enum_member_declarationContext>();
}

HuTaoParser::Enum_member_declarationContext* HuTaoParser::Enum_bodyContext::enum_member_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Enum_member_declarationContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Enum_bodyContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Enum_bodyContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Enum_bodyContext::getRuleIndex() const {
  return HuTaoParser::RuleEnum_body;
}

void HuTaoParser::Enum_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_body(this);
}

void HuTaoParser::Enum_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_body(this);
}

HuTaoParser::Enum_bodyContext* HuTaoParser::enum_body() {
  Enum_bodyContext *_localctx = _tracker.createInstance<Enum_bodyContext>(_ctx, getState());
  enterRule(_localctx, 340, HuTaoParser::RuleEnum_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2142);
    match(HuTaoParser::OPEN_BRACE);
    setState(2154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64)))) != 0)) {
      setState(2143);
      enum_member_declaration();
      setState(2148);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2144);
          match(HuTaoParser::COMMA);
          setState(2145);
          enum_member_declaration(); 
        }
        setState(2150);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
      }
      setState(2152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(2151);
        match(HuTaoParser::COMMA);
      }
    }
    setState(2156);
    match(HuTaoParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_member_declarationContext ------------------------------------------------------------------

HuTaoParser::Enum_member_declarationContext::Enum_member_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Enum_member_declarationContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::AttributesContext* HuTaoParser::Enum_member_declarationContext::attributes() {
  return getRuleContext<HuTaoParser::AttributesContext>(0);
}

tree::TerminalNode* HuTaoParser::Enum_member_declarationContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Enum_member_declarationContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Enum_member_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleEnum_member_declaration;
}

void HuTaoParser::Enum_member_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_member_declaration(this);
}

void HuTaoParser::Enum_member_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_member_declaration(this);
}

HuTaoParser::Enum_member_declarationContext* HuTaoParser::enum_member_declaration() {
  Enum_member_declarationContext *_localctx = _tracker.createInstance<Enum_member_declarationContext>(_ctx, getState());
  enterRule(_localctx, 342, HuTaoParser::RuleEnum_member_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACKET) {
      setState(2158);
      attributes();
    }
    setState(2161);
    identifier();
    setState(2164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::ASSIGNMENT) {
      setState(2162);
      match(HuTaoParser::ASSIGNMENT);
      setState(2163);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_attribute_sectionContext ------------------------------------------------------------------

HuTaoParser::Global_attribute_sectionContext::Global_attribute_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Global_attribute_sectionContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Global_attribute_targetContext* HuTaoParser::Global_attribute_sectionContext::global_attribute_target() {
  return getRuleContext<HuTaoParser::Global_attribute_targetContext>(0);
}

tree::TerminalNode* HuTaoParser::Global_attribute_sectionContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

HuTaoParser::Attribute_listContext* HuTaoParser::Global_attribute_sectionContext::attribute_list() {
  return getRuleContext<HuTaoParser::Attribute_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Global_attribute_sectionContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Global_attribute_sectionContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Global_attribute_sectionContext::getRuleIndex() const {
  return HuTaoParser::RuleGlobal_attribute_section;
}

void HuTaoParser::Global_attribute_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_attribute_section(this);
}

void HuTaoParser::Global_attribute_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_attribute_section(this);
}

HuTaoParser::Global_attribute_sectionContext* HuTaoParser::global_attribute_section() {
  Global_attribute_sectionContext *_localctx = _tracker.createInstance<Global_attribute_sectionContext>(_ctx, getState());
  enterRule(_localctx, 344, HuTaoParser::RuleGlobal_attribute_section);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2166);
    match(HuTaoParser::OPEN_BRACKET);
    setState(2167);
    global_attribute_target();
    setState(2168);
    match(HuTaoParser::COLON);
    setState(2169);
    attribute_list();
    setState(2171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COMMA) {
      setState(2170);
      match(HuTaoParser::COMMA);
    }
    setState(2173);
    match(HuTaoParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_attribute_targetContext ------------------------------------------------------------------

HuTaoParser::Global_attribute_targetContext::Global_attribute_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::KeywordContext* HuTaoParser::Global_attribute_targetContext::keyword() {
  return getRuleContext<HuTaoParser::KeywordContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Global_attribute_targetContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}


size_t HuTaoParser::Global_attribute_targetContext::getRuleIndex() const {
  return HuTaoParser::RuleGlobal_attribute_target;
}

void HuTaoParser::Global_attribute_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_attribute_target(this);
}

void HuTaoParser::Global_attribute_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_attribute_target(this);
}

HuTaoParser::Global_attribute_targetContext* HuTaoParser::global_attribute_target() {
  Global_attribute_targetContext *_localctx = _tracker.createInstance<Global_attribute_targetContext>(_ctx, getState());
  enterRule(_localctx, 346, HuTaoParser::RuleGlobal_attribute_target);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2177);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2175);
      keyword();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2176);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

HuTaoParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Attribute_sectionContext *> HuTaoParser::AttributesContext::attribute_section() {
  return getRuleContexts<HuTaoParser::Attribute_sectionContext>();
}

HuTaoParser::Attribute_sectionContext* HuTaoParser::AttributesContext::attribute_section(size_t i) {
  return getRuleContext<HuTaoParser::Attribute_sectionContext>(i);
}


size_t HuTaoParser::AttributesContext::getRuleIndex() const {
  return HuTaoParser::RuleAttributes;
}

void HuTaoParser::AttributesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributes(this);
}

void HuTaoParser::AttributesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributes(this);
}

HuTaoParser::AttributesContext* HuTaoParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 348, HuTaoParser::RuleAttributes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2180); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2179);
      attribute_section();
      setState(2182); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HuTaoParser::OPEN_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_sectionContext ------------------------------------------------------------------

HuTaoParser::Attribute_sectionContext::Attribute_sectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Attribute_sectionContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Attribute_listContext* HuTaoParser::Attribute_sectionContext::attribute_list() {
  return getRuleContext<HuTaoParser::Attribute_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Attribute_sectionContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

HuTaoParser::Attribute_targetContext* HuTaoParser::Attribute_sectionContext::attribute_target() {
  return getRuleContext<HuTaoParser::Attribute_targetContext>(0);
}

tree::TerminalNode* HuTaoParser::Attribute_sectionContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}

tree::TerminalNode* HuTaoParser::Attribute_sectionContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Attribute_sectionContext::getRuleIndex() const {
  return HuTaoParser::RuleAttribute_section;
}

void HuTaoParser::Attribute_sectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_section(this);
}

void HuTaoParser::Attribute_sectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_section(this);
}

HuTaoParser::Attribute_sectionContext* HuTaoParser::attribute_section() {
  Attribute_sectionContext *_localctx = _tracker.createInstance<Attribute_sectionContext>(_ctx, getState());
  enterRule(_localctx, 350, HuTaoParser::RuleAttribute_section);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2184);
    match(HuTaoParser::OPEN_BRACKET);
    setState(2188);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
    case 1: {
      setState(2185);
      attribute_target();
      setState(2186);
      match(HuTaoParser::COLON);
      break;
    }

    default:
      break;
    }
    setState(2190);
    attribute_list();
    setState(2192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COMMA) {
      setState(2191);
      match(HuTaoParser::COMMA);
    }
    setState(2194);
    match(HuTaoParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_targetContext ------------------------------------------------------------------

HuTaoParser::Attribute_targetContext::Attribute_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::KeywordContext* HuTaoParser::Attribute_targetContext::keyword() {
  return getRuleContext<HuTaoParser::KeywordContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Attribute_targetContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}


size_t HuTaoParser::Attribute_targetContext::getRuleIndex() const {
  return HuTaoParser::RuleAttribute_target;
}

void HuTaoParser::Attribute_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_target(this);
}

void HuTaoParser::Attribute_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_target(this);
}

HuTaoParser::Attribute_targetContext* HuTaoParser::attribute_target() {
  Attribute_targetContext *_localctx = _tracker.createInstance<Attribute_targetContext>(_ctx, getState());
  enterRule(_localctx, 352, HuTaoParser::RuleAttribute_target);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2196);
      keyword();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2197);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

HuTaoParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::AttributeContext *> HuTaoParser::Attribute_listContext::attribute() {
  return getRuleContexts<HuTaoParser::AttributeContext>();
}

HuTaoParser::AttributeContext* HuTaoParser::Attribute_listContext::attribute(size_t i) {
  return getRuleContext<HuTaoParser::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Attribute_listContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Attribute_listContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Attribute_listContext::getRuleIndex() const {
  return HuTaoParser::RuleAttribute_list;
}

void HuTaoParser::Attribute_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_list(this);
}

void HuTaoParser::Attribute_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_list(this);
}

HuTaoParser::Attribute_listContext* HuTaoParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 354, HuTaoParser::RuleAttribute_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2200);
    attribute();
    setState(2205);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2201);
        match(HuTaoParser::COMMA);
        setState(2202);
        attribute(); 
      }
      setState(2207);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

HuTaoParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Namespace_or_type_nameContext* HuTaoParser::AttributeContext::namespace_or_type_name() {
  return getRuleContext<HuTaoParser::Namespace_or_type_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::AttributeContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::AttributeContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

std::vector<HuTaoParser::Attribute_argumentContext *> HuTaoParser::AttributeContext::attribute_argument() {
  return getRuleContexts<HuTaoParser::Attribute_argumentContext>();
}

HuTaoParser::Attribute_argumentContext* HuTaoParser::AttributeContext::attribute_argument(size_t i) {
  return getRuleContext<HuTaoParser::Attribute_argumentContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::AttributeContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::AttributeContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::AttributeContext::getRuleIndex() const {
  return HuTaoParser::RuleAttribute;
}

void HuTaoParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void HuTaoParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

HuTaoParser::AttributeContext* HuTaoParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 356, HuTaoParser::RuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2208);
    namespace_or_type_name();
    setState(2221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_PARENS) {
      setState(2209);
      match(HuTaoParser::OPEN_PARENS);
      setState(2218);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(2210);
        attribute_argument();
        setState(2215);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == HuTaoParser::COMMA) {
          setState(2211);
          match(HuTaoParser::COMMA);
          setState(2212);
          attribute_argument();
          setState(2217);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(2220);
      match(HuTaoParser::CLOSE_PARENS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_argumentContext ------------------------------------------------------------------

HuTaoParser::Attribute_argumentContext::Attribute_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Attribute_argumentContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Attribute_argumentContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Attribute_argumentContext::COLON() {
  return getToken(HuTaoParser::COLON, 0);
}


size_t HuTaoParser::Attribute_argumentContext::getRuleIndex() const {
  return HuTaoParser::RuleAttribute_argument;
}

void HuTaoParser::Attribute_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_argument(this);
}

void HuTaoParser::Attribute_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_argument(this);
}

HuTaoParser::Attribute_argumentContext* HuTaoParser::attribute_argument() {
  Attribute_argumentContext *_localctx = _tracker.createInstance<Attribute_argumentContext>(_ctx, getState());
  enterRule(_localctx, 358, HuTaoParser::RuleAttribute_argument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2226);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      setState(2223);
      identifier();
      setState(2224);
      match(HuTaoParser::COLON);
      break;
    }

    default:
      break;
    }
    setState(2228);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pointer_typeContext ------------------------------------------------------------------

HuTaoParser::Pointer_typeContext::Pointer_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Pointer_typeContext::STAR() {
  return getToken(HuTaoParser::STAR, 0);
}

HuTaoParser::Simple_typeContext* HuTaoParser::Pointer_typeContext::simple_type() {
  return getRuleContext<HuTaoParser::Simple_typeContext>(0);
}

HuTaoParser::Class_typeContext* HuTaoParser::Pointer_typeContext::class_type() {
  return getRuleContext<HuTaoParser::Class_typeContext>(0);
}

std::vector<HuTaoParser::Rank_specifierContext *> HuTaoParser::Pointer_typeContext::rank_specifier() {
  return getRuleContexts<HuTaoParser::Rank_specifierContext>();
}

HuTaoParser::Rank_specifierContext* HuTaoParser::Pointer_typeContext::rank_specifier(size_t i) {
  return getRuleContext<HuTaoParser::Rank_specifierContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Pointer_typeContext::INTERR() {
  return getTokens(HuTaoParser::INTERR);
}

tree::TerminalNode* HuTaoParser::Pointer_typeContext::INTERR(size_t i) {
  return getToken(HuTaoParser::INTERR, i);
}

tree::TerminalNode* HuTaoParser::Pointer_typeContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}


size_t HuTaoParser::Pointer_typeContext::getRuleIndex() const {
  return HuTaoParser::RulePointer_type;
}

void HuTaoParser::Pointer_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer_type(this);
}

void HuTaoParser::Pointer_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer_type(this);
}

HuTaoParser::Pointer_typeContext* HuTaoParser::pointer_type() {
  Pointer_typeContext *_localctx = _tracker.createInstance<Pointer_typeContext>(_ctx, getState());
  enterRule(_localctx, 360, HuTaoParser::RulePointer_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2245);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::STRING:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64: {
        enterOuterAlt(_localctx, 1);
        setState(2232);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case HuTaoParser::BOOL:
          case HuTaoParser::U8:
          case HuTaoParser::I8:
          case HuTaoParser::U16:
          case HuTaoParser::I16:
          case HuTaoParser::U32:
          case HuTaoParser::I32:
          case HuTaoParser::U64:
          case HuTaoParser::I64:
          case HuTaoParser::F32:
          case HuTaoParser::F64: {
            setState(2230);
            simple_type();
            break;
          }

          case HuTaoParser::ADD:
          case HuTaoParser::ALIAS:
          case HuTaoParser::ASCENDING:
          case HuTaoParser::ASYNC:
          case HuTaoParser::AWAIT:
          case HuTaoParser::BY:
          case HuTaoParser::EQUALS:
          case HuTaoParser::FROM:
          case HuTaoParser::GET:
          case HuTaoParser::GROUP:
          case HuTaoParser::INTO:
          case HuTaoParser::JOIN:
          case HuTaoParser::LET:
          case HuTaoParser::NAMEOF:
          case HuTaoParser::OBJECT:
          case HuTaoParser::ON:
          case HuTaoParser::ORDERBY:
          case HuTaoParser::PARTIAL:
          case HuTaoParser::REMOVE:
          case HuTaoParser::SELECT:
          case HuTaoParser::SET:
          case HuTaoParser::STRING:
          case HuTaoParser::UNMANAGED:
          case HuTaoParser::VAR:
          case HuTaoParser::WHEN:
          case HuTaoParser::WHERE:
          case HuTaoParser::YIELD:
          case HuTaoParser::IDENTIFIER: {
            setState(2231);
            class_type();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(2238);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == HuTaoParser::OPEN_BRACKET

        || _la == HuTaoParser::INTERR) {
          setState(2236);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case HuTaoParser::OPEN_BRACKET: {
              setState(2234);
              rank_specifier();
              break;
            }

            case HuTaoParser::INTERR: {
              setState(2235);
              match(HuTaoParser::INTERR);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(2240);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2241);
        match(HuTaoParser::STAR);
        break;
      }

      case HuTaoParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(2243);
        match(HuTaoParser::VOID);
        setState(2244);
        match(HuTaoParser::STAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_declaratorsContext ------------------------------------------------------------------

HuTaoParser::Fixed_pointer_declaratorsContext::Fixed_pointer_declaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::Fixed_pointer_declaratorContext *> HuTaoParser::Fixed_pointer_declaratorsContext::fixed_pointer_declarator() {
  return getRuleContexts<HuTaoParser::Fixed_pointer_declaratorContext>();
}

HuTaoParser::Fixed_pointer_declaratorContext* HuTaoParser::Fixed_pointer_declaratorsContext::fixed_pointer_declarator(size_t i) {
  return getRuleContext<HuTaoParser::Fixed_pointer_declaratorContext>(i);
}

std::vector<tree::TerminalNode *> HuTaoParser::Fixed_pointer_declaratorsContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Fixed_pointer_declaratorsContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Fixed_pointer_declaratorsContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_pointer_declarators;
}

void HuTaoParser::Fixed_pointer_declaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_declarators(this);
}

void HuTaoParser::Fixed_pointer_declaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_declarators(this);
}

HuTaoParser::Fixed_pointer_declaratorsContext* HuTaoParser::fixed_pointer_declarators() {
  Fixed_pointer_declaratorsContext *_localctx = _tracker.createInstance<Fixed_pointer_declaratorsContext>(_ctx, getState());
  enterRule(_localctx, 362, HuTaoParser::RuleFixed_pointer_declarators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2247);
    fixed_pointer_declarator();
    setState(2252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuTaoParser::COMMA) {
      setState(2248);
      match(HuTaoParser::COMMA);
      setState(2249);
      fixed_pointer_declarator();
      setState(2254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_declaratorContext ------------------------------------------------------------------

HuTaoParser::Fixed_pointer_declaratorContext::Fixed_pointer_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Fixed_pointer_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Fixed_pointer_declaratorContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Fixed_pointer_initializerContext* HuTaoParser::Fixed_pointer_declaratorContext::fixed_pointer_initializer() {
  return getRuleContext<HuTaoParser::Fixed_pointer_initializerContext>(0);
}


size_t HuTaoParser::Fixed_pointer_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_pointer_declarator;
}

void HuTaoParser::Fixed_pointer_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_declarator(this);
}

void HuTaoParser::Fixed_pointer_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_declarator(this);
}

HuTaoParser::Fixed_pointer_declaratorContext* HuTaoParser::fixed_pointer_declarator() {
  Fixed_pointer_declaratorContext *_localctx = _tracker.createInstance<Fixed_pointer_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 364, HuTaoParser::RuleFixed_pointer_declarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2255);
    identifier();
    setState(2256);
    match(HuTaoParser::ASSIGNMENT);
    setState(2257);
    fixed_pointer_initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_pointer_initializerContext ------------------------------------------------------------------

HuTaoParser::Fixed_pointer_initializerContext::Fixed_pointer_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::ExpressionContext* HuTaoParser::Fixed_pointer_initializerContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Fixed_pointer_initializerContext::AMP() {
  return getToken(HuTaoParser::AMP, 0);
}

HuTaoParser::Stackalloc_initializerContext* HuTaoParser::Fixed_pointer_initializerContext::stackalloc_initializer() {
  return getRuleContext<HuTaoParser::Stackalloc_initializerContext>(0);
}


size_t HuTaoParser::Fixed_pointer_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_pointer_initializer;
}

void HuTaoParser::Fixed_pointer_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_pointer_initializer(this);
}

void HuTaoParser::Fixed_pointer_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_pointer_initializer(this);
}

HuTaoParser::Fixed_pointer_initializerContext* HuTaoParser::fixed_pointer_initializer() {
  Fixed_pointer_initializerContext *_localctx = _tracker.createInstance<Fixed_pointer_initializerContext>(_ctx, getState());
  enterRule(_localctx, 366, HuTaoParser::RuleFixed_pointer_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::ADD:
      case HuTaoParser::ALIAS:
      case HuTaoParser::ASCENDING:
      case HuTaoParser::ASYNC:
      case HuTaoParser::AWAIT:
      case HuTaoParser::BASE:
      case HuTaoParser::BOOL:
      case HuTaoParser::BY:
      case HuTaoParser::CHECKED:
      case HuTaoParser::DEFAULT:
      case HuTaoParser::DELEGATE:
      case HuTaoParser::EQUALS:
      case HuTaoParser::FALSE:
      case HuTaoParser::FROM:
      case HuTaoParser::GET:
      case HuTaoParser::GROUP:
      case HuTaoParser::INTO:
      case HuTaoParser::JOIN:
      case HuTaoParser::LET:
      case HuTaoParser::NAMEOF:
      case HuTaoParser::NEW:
      case HuTaoParser::NULL_:
      case HuTaoParser::OBJECT:
      case HuTaoParser::ON:
      case HuTaoParser::ORDERBY:
      case HuTaoParser::PARTIAL:
      case HuTaoParser::REF:
      case HuTaoParser::REMOVE:
      case HuTaoParser::SELECT:
      case HuTaoParser::SET:
      case HuTaoParser::SIZEOF:
      case HuTaoParser::STRING:
      case HuTaoParser::THIS:
      case HuTaoParser::TRUE:
      case HuTaoParser::TYPEOF:
      case HuTaoParser::UNCHECKED:
      case HuTaoParser::UNMANAGED:
      case HuTaoParser::VAR:
      case HuTaoParser::WHEN:
      case HuTaoParser::WHERE:
      case HuTaoParser::YIELD:
      case HuTaoParser::IDENTIFIER:
      case HuTaoParser::LITERAL_ACCESS:
      case HuTaoParser::INTEGER_LITERAL:
      case HuTaoParser::HEX_INTEGER_LITERAL:
      case HuTaoParser::BIN_INTEGER_LITERAL:
      case HuTaoParser::REAL_LITERAL:
      case HuTaoParser::CHARACTER_LITERAL:
      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING:
      case HuTaoParser::U8:
      case HuTaoParser::I8:
      case HuTaoParser::U16:
      case HuTaoParser::I16:
      case HuTaoParser::U32:
      case HuTaoParser::I32:
      case HuTaoParser::U64:
      case HuTaoParser::I64:
      case HuTaoParser::F32:
      case HuTaoParser::F64:
      case HuTaoParser::OPEN_PARENS:
      case HuTaoParser::PLUS:
      case HuTaoParser::MINUS:
      case HuTaoParser::STAR:
      case HuTaoParser::AMP:
      case HuTaoParser::CARET:
      case HuTaoParser::BANG:
      case HuTaoParser::TILDE:
      case HuTaoParser::OP_INC:
      case HuTaoParser::OP_DEC:
      case HuTaoParser::OP_RANGE: {
        enterOuterAlt(_localctx, 1);
        setState(2260);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
        case 1: {
          setState(2259);
          match(HuTaoParser::AMP);
          break;
        }

        default:
          break;
        }
        setState(2262);
        expression();
        break;
      }

      case HuTaoParser::STACKALLOC: {
        enterOuterAlt(_localctx, 2);
        setState(2263);
        stackalloc_initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fixed_size_buffer_declaratorContext ------------------------------------------------------------------

HuTaoParser::Fixed_size_buffer_declaratorContext::Fixed_size_buffer_declaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Fixed_size_buffer_declaratorContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Fixed_size_buffer_declaratorContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Fixed_size_buffer_declaratorContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Fixed_size_buffer_declaratorContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}


size_t HuTaoParser::Fixed_size_buffer_declaratorContext::getRuleIndex() const {
  return HuTaoParser::RuleFixed_size_buffer_declarator;
}

void HuTaoParser::Fixed_size_buffer_declaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixed_size_buffer_declarator(this);
}

void HuTaoParser::Fixed_size_buffer_declaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixed_size_buffer_declarator(this);
}

HuTaoParser::Fixed_size_buffer_declaratorContext* HuTaoParser::fixed_size_buffer_declarator() {
  Fixed_size_buffer_declaratorContext *_localctx = _tracker.createInstance<Fixed_size_buffer_declaratorContext>(_ctx, getState());
  enterRule(_localctx, 368, HuTaoParser::RuleFixed_size_buffer_declarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2266);
    identifier();
    setState(2267);
    match(HuTaoParser::OPEN_BRACKET);
    setState(2268);
    expression();
    setState(2269);
    match(HuTaoParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stackalloc_initializerContext ------------------------------------------------------------------

HuTaoParser::Stackalloc_initializerContext::Stackalloc_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::STACKALLOC() {
  return getToken(HuTaoParser::STACKALLOC, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Stackalloc_initializerContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

std::vector<HuTaoParser::ExpressionContext *> HuTaoParser::Stackalloc_initializerContext::expression() {
  return getRuleContexts<HuTaoParser::ExpressionContext>();
}

HuTaoParser::ExpressionContext* HuTaoParser::Stackalloc_initializerContext::expression(size_t i) {
  return getRuleContext<HuTaoParser::ExpressionContext>(i);
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Stackalloc_initializerContext::COMMA() {
  return getTokens(HuTaoParser::COMMA);
}

tree::TerminalNode* HuTaoParser::Stackalloc_initializerContext::COMMA(size_t i) {
  return getToken(HuTaoParser::COMMA, i);
}


size_t HuTaoParser::Stackalloc_initializerContext::getRuleIndex() const {
  return HuTaoParser::RuleStackalloc_initializer;
}

void HuTaoParser::Stackalloc_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStackalloc_initializer(this);
}

void HuTaoParser::Stackalloc_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStackalloc_initializer(this);
}

HuTaoParser::Stackalloc_initializerContext* HuTaoParser::stackalloc_initializer() {
  Stackalloc_initializerContext *_localctx = _tracker.createInstance<Stackalloc_initializerContext>(_ctx, getState());
  enterRule(_localctx, 370, HuTaoParser::RuleStackalloc_initializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(2300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2271);
      match(HuTaoParser::STACKALLOC);
      setState(2272);
      type_();
      setState(2273);
      match(HuTaoParser::OPEN_BRACKET);
      setState(2274);
      expression();
      setState(2275);
      match(HuTaoParser::CLOSE_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2277);
      match(HuTaoParser::STACKALLOC);
      setState(2279);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::VOID - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
        setState(2278);
        type_();
      }
      setState(2281);
      match(HuTaoParser::OPEN_BRACKET);
      setState(2283);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
        | (1ULL << HuTaoParser::ALIAS)
        | (1ULL << HuTaoParser::ASCENDING)
        | (1ULL << HuTaoParser::ASYNC)
        | (1ULL << HuTaoParser::AWAIT)
        | (1ULL << HuTaoParser::BASE)
        | (1ULL << HuTaoParser::BOOL)
        | (1ULL << HuTaoParser::BY)
        | (1ULL << HuTaoParser::CHECKED)
        | (1ULL << HuTaoParser::DEFAULT)
        | (1ULL << HuTaoParser::DELEGATE)
        | (1ULL << HuTaoParser::EQUALS)
        | (1ULL << HuTaoParser::FALSE)
        | (1ULL << HuTaoParser::FROM)
        | (1ULL << HuTaoParser::GET)
        | (1ULL << HuTaoParser::GROUP)
        | (1ULL << HuTaoParser::INTO)
        | (1ULL << HuTaoParser::JOIN)
        | (1ULL << HuTaoParser::LET)
        | (1ULL << HuTaoParser::NAMEOF)
        | (1ULL << HuTaoParser::NEW)
        | (1ULL << HuTaoParser::NULL_)
        | (1ULL << HuTaoParser::OBJECT)
        | (1ULL << HuTaoParser::ON)
        | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
        | (1ULL << (HuTaoParser::REF - 64))
        | (1ULL << (HuTaoParser::REMOVE - 64))
        | (1ULL << (HuTaoParser::SELECT - 64))
        | (1ULL << (HuTaoParser::SET - 64))
        | (1ULL << (HuTaoParser::SIZEOF - 64))
        | (1ULL << (HuTaoParser::STRING - 64))
        | (1ULL << (HuTaoParser::THIS - 64))
        | (1ULL << (HuTaoParser::TRUE - 64))
        | (1ULL << (HuTaoParser::TYPEOF - 64))
        | (1ULL << (HuTaoParser::UNCHECKED - 64))
        | (1ULL << (HuTaoParser::UNMANAGED - 64))
        | (1ULL << (HuTaoParser::VAR - 64))
        | (1ULL << (HuTaoParser::WHEN - 64))
        | (1ULL << (HuTaoParser::WHERE - 64))
        | (1ULL << (HuTaoParser::YIELD - 64))
        | (1ULL << (HuTaoParser::IDENTIFIER - 64))
        | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
        | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
        | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
        | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
        | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
        | (1ULL << (HuTaoParser::U8 - 64))
        | (1ULL << (HuTaoParser::I8 - 64))
        | (1ULL << (HuTaoParser::U16 - 64))
        | (1ULL << (HuTaoParser::I16 - 64))
        | (1ULL << (HuTaoParser::U32 - 64))
        | (1ULL << (HuTaoParser::I32 - 64))
        | (1ULL << (HuTaoParser::U64 - 64))
        | (1ULL << (HuTaoParser::I64 - 64))
        | (1ULL << (HuTaoParser::F32 - 64))
        | (1ULL << (HuTaoParser::F64 - 64))
        | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
        | (1ULL << (HuTaoParser::MINUS - 128))
        | (1ULL << (HuTaoParser::STAR - 128))
        | (1ULL << (HuTaoParser::AMP - 128))
        | (1ULL << (HuTaoParser::CARET - 128))
        | (1ULL << (HuTaoParser::BANG - 128))
        | (1ULL << (HuTaoParser::TILDE - 128))
        | (1ULL << (HuTaoParser::OP_INC - 128))
        | (1ULL << (HuTaoParser::OP_DEC - 128))
        | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
        setState(2282);
        expression();
      }
      setState(2285);
      match(HuTaoParser::CLOSE_BRACKET);
      setState(2286);
      match(HuTaoParser::OPEN_BRACE);
      setState(2287);
      expression();
      setState(2292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2288);
          match(HuTaoParser::COMMA);
          setState(2289);
          expression(); 
        }
        setState(2294);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx);
      }
      setState(2296);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::COMMA) {
        setState(2295);
        match(HuTaoParser::COMMA);
      }
      setState(2298);
      match(HuTaoParser::CLOSE_BRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_arrowContext ------------------------------------------------------------------

HuTaoParser::Right_arrowContext::Right_arrowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Right_arrowContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

tree::TerminalNode* HuTaoParser::Right_arrowContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}


size_t HuTaoParser::Right_arrowContext::getRuleIndex() const {
  return HuTaoParser::RuleRight_arrow;
}

void HuTaoParser::Right_arrowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_arrow(this);
}

void HuTaoParser::Right_arrowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_arrow(this);
}

HuTaoParser::Right_arrowContext* HuTaoParser::right_arrow() {
  Right_arrowContext *_localctx = _tracker.createInstance<Right_arrowContext>(_ctx, getState());
  enterRule(_localctx, 372, HuTaoParser::RuleRight_arrow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2302);
    dynamic_cast<Right_arrowContext *>(_localctx)->first = match(HuTaoParser::ASSIGNMENT);
    setState(2303);
    dynamic_cast<Right_arrowContext *>(_localctx)->second = match(HuTaoParser::GT);
    setState(2304);

    if (!((dynamic_cast<Right_arrowContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_arrowContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_shiftContext ------------------------------------------------------------------

HuTaoParser::Right_shiftContext::Right_shiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HuTaoParser::Right_shiftContext::GT() {
  return getTokens(HuTaoParser::GT);
}

tree::TerminalNode* HuTaoParser::Right_shiftContext::GT(size_t i) {
  return getToken(HuTaoParser::GT, i);
}


size_t HuTaoParser::Right_shiftContext::getRuleIndex() const {
  return HuTaoParser::RuleRight_shift;
}

void HuTaoParser::Right_shiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_shift(this);
}

void HuTaoParser::Right_shiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_shift(this);
}

HuTaoParser::Right_shiftContext* HuTaoParser::right_shift() {
  Right_shiftContext *_localctx = _tracker.createInstance<Right_shiftContext>(_ctx, getState());
  enterRule(_localctx, 374, HuTaoParser::RuleRight_shift);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2306);
    dynamic_cast<Right_shiftContext *>(_localctx)->first = match(HuTaoParser::GT);
    setState(2307);
    dynamic_cast<Right_shiftContext *>(_localctx)->second = match(HuTaoParser::GT);
    setState(2308);

    if (!((dynamic_cast<Right_shiftContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shiftContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_shift_assignmentContext ------------------------------------------------------------------

HuTaoParser::Right_shift_assignmentContext::Right_shift_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Right_shift_assignmentContext::GT() {
  return getToken(HuTaoParser::GT, 0);
}

tree::TerminalNode* HuTaoParser::Right_shift_assignmentContext::OP_GE() {
  return getToken(HuTaoParser::OP_GE, 0);
}


size_t HuTaoParser::Right_shift_assignmentContext::getRuleIndex() const {
  return HuTaoParser::RuleRight_shift_assignment;
}

void HuTaoParser::Right_shift_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRight_shift_assignment(this);
}

void HuTaoParser::Right_shift_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRight_shift_assignment(this);
}

HuTaoParser::Right_shift_assignmentContext* HuTaoParser::right_shift_assignment() {
  Right_shift_assignmentContext *_localctx = _tracker.createInstance<Right_shift_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 376, HuTaoParser::RuleRight_shift_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2310);
    dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first = match(HuTaoParser::GT);
    setState(2311);
    dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second = match(HuTaoParser::OP_GE);
    setState(2312);

    if (!((dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second->getTokenIndex() : 0))) throw FailedPredicateException(this, "$first.index + 1 == $second.index");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

HuTaoParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Boolean_literalContext* HuTaoParser::LiteralContext::boolean_literal() {
  return getRuleContext<HuTaoParser::Boolean_literalContext>(0);
}

HuTaoParser::String_literalContext* HuTaoParser::LiteralContext::string_literal() {
  return getRuleContext<HuTaoParser::String_literalContext>(0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::INTEGER_LITERAL() {
  return getToken(HuTaoParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::HEX_INTEGER_LITERAL() {
  return getToken(HuTaoParser::HEX_INTEGER_LITERAL, 0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::BIN_INTEGER_LITERAL() {
  return getToken(HuTaoParser::BIN_INTEGER_LITERAL, 0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::REAL_LITERAL() {
  return getToken(HuTaoParser::REAL_LITERAL, 0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::CHARACTER_LITERAL() {
  return getToken(HuTaoParser::CHARACTER_LITERAL, 0);
}

tree::TerminalNode* HuTaoParser::LiteralContext::NULL_() {
  return getToken(HuTaoParser::NULL_, 0);
}


size_t HuTaoParser::LiteralContext::getRuleIndex() const {
  return HuTaoParser::RuleLiteral;
}

void HuTaoParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void HuTaoParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

HuTaoParser::LiteralContext* HuTaoParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 378, HuTaoParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2322);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::FALSE:
      case HuTaoParser::TRUE: {
        enterOuterAlt(_localctx, 1);
        setState(2314);
        boolean_literal();
        break;
      }

      case HuTaoParser::REGULAR_STRING:
      case HuTaoParser::VERBATIUM_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(2315);
        string_literal();
        break;
      }

      case HuTaoParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(2316);
        match(HuTaoParser::INTEGER_LITERAL);
        break;
      }

      case HuTaoParser::HEX_INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(2317);
        match(HuTaoParser::HEX_INTEGER_LITERAL);
        break;
      }

      case HuTaoParser::BIN_INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(2318);
        match(HuTaoParser::BIN_INTEGER_LITERAL);
        break;
      }

      case HuTaoParser::REAL_LITERAL: {
        enterOuterAlt(_localctx, 6);
        setState(2319);
        match(HuTaoParser::REAL_LITERAL);
        break;
      }

      case HuTaoParser::CHARACTER_LITERAL: {
        enterOuterAlt(_localctx, 7);
        setState(2320);
        match(HuTaoParser::CHARACTER_LITERAL);
        break;
      }

      case HuTaoParser::NULL_: {
        enterOuterAlt(_localctx, 8);
        setState(2321);
        match(HuTaoParser::NULL_);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_literalContext ------------------------------------------------------------------

HuTaoParser::Boolean_literalContext::Boolean_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Boolean_literalContext::TRUE() {
  return getToken(HuTaoParser::TRUE, 0);
}

tree::TerminalNode* HuTaoParser::Boolean_literalContext::FALSE() {
  return getToken(HuTaoParser::FALSE, 0);
}


size_t HuTaoParser::Boolean_literalContext::getRuleIndex() const {
  return HuTaoParser::RuleBoolean_literal;
}

void HuTaoParser::Boolean_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_literal(this);
}

void HuTaoParser::Boolean_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_literal(this);
}

HuTaoParser::Boolean_literalContext* HuTaoParser::boolean_literal() {
  Boolean_literalContext *_localctx = _tracker.createInstance<Boolean_literalContext>(_ctx, getState());
  enterRule(_localctx, 380, HuTaoParser::RuleBoolean_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2324);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::FALSE

    || _la == HuTaoParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

HuTaoParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::String_literalContext::REGULAR_STRING() {
  return getToken(HuTaoParser::REGULAR_STRING, 0);
}

tree::TerminalNode* HuTaoParser::String_literalContext::VERBATIUM_STRING() {
  return getToken(HuTaoParser::VERBATIUM_STRING, 0);
}


size_t HuTaoParser::String_literalContext::getRuleIndex() const {
  return HuTaoParser::RuleString_literal;
}

void HuTaoParser::String_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_literal(this);
}

void HuTaoParser::String_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_literal(this);
}

HuTaoParser::String_literalContext* HuTaoParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 382, HuTaoParser::RuleString_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2326);
    _la = _input->LA(1);
    if (!(_la == HuTaoParser::REGULAR_STRING

    || _la == HuTaoParser::VERBATIUM_STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

HuTaoParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::KeywordContext::ABSTRACT() {
  return getToken(HuTaoParser::ABSTRACT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::AS() {
  return getToken(HuTaoParser::AS, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::BASE() {
  return getToken(HuTaoParser::BASE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::BOOL() {
  return getToken(HuTaoParser::BOOL, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::BREAK() {
  return getToken(HuTaoParser::BREAK, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::U8() {
  return getToken(HuTaoParser::U8, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CASE() {
  return getToken(HuTaoParser::CASE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CATCH() {
  return getToken(HuTaoParser::CATCH, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CHAR() {
  return getToken(HuTaoParser::CHAR, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CHECKED() {
  return getToken(HuTaoParser::CHECKED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CLASS() {
  return getToken(HuTaoParser::CLASS, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CONST() {
  return getToken(HuTaoParser::CONST, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::CONTINUE() {
  return getToken(HuTaoParser::CONTINUE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::DEFAULT() {
  return getToken(HuTaoParser::DEFAULT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::DELEGATE() {
  return getToken(HuTaoParser::DELEGATE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::DO() {
  return getToken(HuTaoParser::DO, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::F64() {
  return getToken(HuTaoParser::F64, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::ELSE() {
  return getToken(HuTaoParser::ELSE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::ENUM() {
  return getToken(HuTaoParser::ENUM, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::EVENT() {
  return getToken(HuTaoParser::EVENT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::EXPLICIT() {
  return getToken(HuTaoParser::EXPLICIT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::EXTERN() {
  return getToken(HuTaoParser::EXTERN, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::FALSE() {
  return getToken(HuTaoParser::FALSE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::FINALLY() {
  return getToken(HuTaoParser::FINALLY, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::FIXED() {
  return getToken(HuTaoParser::FIXED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::F32() {
  return getToken(HuTaoParser::F32, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::FOR() {
  return getToken(HuTaoParser::FOR, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::FOREACH() {
  return getToken(HuTaoParser::FOREACH, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::GOTO() {
  return getToken(HuTaoParser::GOTO, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::IF() {
  return getToken(HuTaoParser::IF, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::IMPLICIT() {
  return getToken(HuTaoParser::IMPLICIT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::IN() {
  return getToken(HuTaoParser::IN, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::I32() {
  return getToken(HuTaoParser::I32, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::INTERFACE() {
  return getToken(HuTaoParser::INTERFACE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::INTERNAL() {
  return getToken(HuTaoParser::INTERNAL, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::IS() {
  return getToken(HuTaoParser::IS, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::LOCK() {
  return getToken(HuTaoParser::LOCK, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::I64() {
  return getToken(HuTaoParser::I64, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::NAMESPACE() {
  return getToken(HuTaoParser::NAMESPACE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::NEW() {
  return getToken(HuTaoParser::NEW, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::NULL_() {
  return getToken(HuTaoParser::NULL_, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::OBJECT() {
  return getToken(HuTaoParser::OBJECT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::OPERATOR() {
  return getToken(HuTaoParser::OPERATOR, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::OUT() {
  return getToken(HuTaoParser::OUT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::OVERRIDE() {
  return getToken(HuTaoParser::OVERRIDE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::PARAMS() {
  return getToken(HuTaoParser::PARAMS, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::PRIVATE() {
  return getToken(HuTaoParser::PRIVATE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::PROTECTED() {
  return getToken(HuTaoParser::PROTECTED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::PUBLIC() {
  return getToken(HuTaoParser::PUBLIC, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::RETURN() {
  return getToken(HuTaoParser::RETURN, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::I8() {
  return getToken(HuTaoParser::I8, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::SEALED() {
  return getToken(HuTaoParser::SEALED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::I16() {
  return getToken(HuTaoParser::I16, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::SIZEOF() {
  return getToken(HuTaoParser::SIZEOF, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::STACKALLOC() {
  return getToken(HuTaoParser::STACKALLOC, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::STATIC() {
  return getToken(HuTaoParser::STATIC, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::STRING() {
  return getToken(HuTaoParser::STRING, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::STRUCT() {
  return getToken(HuTaoParser::STRUCT, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::SWITCH() {
  return getToken(HuTaoParser::SWITCH, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::THROW() {
  return getToken(HuTaoParser::THROW, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::TRUE() {
  return getToken(HuTaoParser::TRUE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::TRY() {
  return getToken(HuTaoParser::TRY, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::TYPEOF() {
  return getToken(HuTaoParser::TYPEOF, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::U32() {
  return getToken(HuTaoParser::U32, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::U64() {
  return getToken(HuTaoParser::U64, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::UNCHECKED() {
  return getToken(HuTaoParser::UNCHECKED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::UNMANAGED() {
  return getToken(HuTaoParser::UNMANAGED, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::UNSAFE() {
  return getToken(HuTaoParser::UNSAFE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::U16() {
  return getToken(HuTaoParser::U16, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::USING() {
  return getToken(HuTaoParser::USING, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::VIRTUAL() {
  return getToken(HuTaoParser::VIRTUAL, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::VOID() {
  return getToken(HuTaoParser::VOID, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::VOLATILE() {
  return getToken(HuTaoParser::VOLATILE, 0);
}

tree::TerminalNode* HuTaoParser::KeywordContext::WHILE() {
  return getToken(HuTaoParser::WHILE, 0);
}


size_t HuTaoParser::KeywordContext::getRuleIndex() const {
  return HuTaoParser::RuleKeyword;
}

void HuTaoParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void HuTaoParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}

HuTaoParser::KeywordContext* HuTaoParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 384, HuTaoParser::RuleKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2328);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ABSTRACT)
      | (1ULL << HuTaoParser::AS)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BREAK)
      | (1ULL << HuTaoParser::CASE)
      | (1ULL << HuTaoParser::CATCH)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::CLASS)
      | (1ULL << HuTaoParser::CONST)
      | (1ULL << HuTaoParser::CONTINUE)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::DO)
      | (1ULL << HuTaoParser::ELSE)
      | (1ULL << HuTaoParser::ENUM)
      | (1ULL << HuTaoParser::EVENT)
      | (1ULL << HuTaoParser::EXPLICIT)
      | (1ULL << HuTaoParser::EXTERN)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FINALLY)
      | (1ULL << HuTaoParser::FIXED)
      | (1ULL << HuTaoParser::FOR)
      | (1ULL << HuTaoParser::FOREACH)
      | (1ULL << HuTaoParser::GOTO)
      | (1ULL << HuTaoParser::IF)
      | (1ULL << HuTaoParser::IMPLICIT)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTERFACE)
      | (1ULL << HuTaoParser::INTERNAL)
      | (1ULL << HuTaoParser::IS)
      | (1ULL << HuTaoParser::LOCK)
      | (1ULL << HuTaoParser::NAMESPACE)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::OPERATOR)
      | (1ULL << HuTaoParser::OUT)
      | (1ULL << HuTaoParser::OVERRIDE)
      | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (HuTaoParser::PRIVATE - 65))
      | (1ULL << (HuTaoParser::PROTECTED - 65))
      | (1ULL << (HuTaoParser::PUBLIC - 65))
      | (1ULL << (HuTaoParser::READONLY - 65))
      | (1ULL << (HuTaoParser::REF - 65))
      | (1ULL << (HuTaoParser::RETURN - 65))
      | (1ULL << (HuTaoParser::SEALED - 65))
      | (1ULL << (HuTaoParser::SIZEOF - 65))
      | (1ULL << (HuTaoParser::STACKALLOC - 65))
      | (1ULL << (HuTaoParser::STATIC - 65))
      | (1ULL << (HuTaoParser::STRING - 65))
      | (1ULL << (HuTaoParser::STRUCT - 65))
      | (1ULL << (HuTaoParser::SWITCH - 65))
      | (1ULL << (HuTaoParser::THIS - 65))
      | (1ULL << (HuTaoParser::THROW - 65))
      | (1ULL << (HuTaoParser::TRUE - 65))
      | (1ULL << (HuTaoParser::TRY - 65))
      | (1ULL << (HuTaoParser::TYPEOF - 65))
      | (1ULL << (HuTaoParser::UNCHECKED - 65))
      | (1ULL << (HuTaoParser::UNMANAGED - 65))
      | (1ULL << (HuTaoParser::UNSAFE - 65))
      | (1ULL << (HuTaoParser::USING - 65))
      | (1ULL << (HuTaoParser::VIRTUAL - 65))
      | (1ULL << (HuTaoParser::VOID - 65))
      | (1ULL << (HuTaoParser::VOLATILE - 65))
      | (1ULL << (HuTaoParser::WHILE - 65))
      | (1ULL << (HuTaoParser::U8 - 65))
      | (1ULL << (HuTaoParser::I8 - 65))
      | (1ULL << (HuTaoParser::U16 - 65))
      | (1ULL << (HuTaoParser::I16 - 65))
      | (1ULL << (HuTaoParser::U32 - 65))
      | (1ULL << (HuTaoParser::I32 - 65))
      | (1ULL << (HuTaoParser::U64 - 65))
      | (1ULL << (HuTaoParser::I64 - 65))
      | (1ULL << (HuTaoParser::F32 - 65))
      | (1ULL << (HuTaoParser::F64 - 65))
      | (1ULL << (HuTaoParser::CHAR - 65)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_definitionContext ------------------------------------------------------------------

HuTaoParser::Class_definitionContext::Class_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Class_definitionContext::CLASS() {
  return getToken(HuTaoParser::CLASS, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Class_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Class_bodyContext* HuTaoParser::Class_definitionContext::class_body() {
  return getRuleContext<HuTaoParser::Class_bodyContext>(0);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::Class_definitionContext::type_parameter_list() {
  return getRuleContext<HuTaoParser::Type_parameter_listContext>(0);
}

HuTaoParser::Class_baseContext* HuTaoParser::Class_definitionContext::class_base() {
  return getRuleContext<HuTaoParser::Class_baseContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Class_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}

tree::TerminalNode* HuTaoParser::Class_definitionContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Class_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleClass_definition;
}

void HuTaoParser::Class_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_definition(this);
}

void HuTaoParser::Class_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_definition(this);
}

HuTaoParser::Class_definitionContext* HuTaoParser::class_definition() {
  Class_definitionContext *_localctx = _tracker.createInstance<Class_definitionContext>(_ctx, getState());
  enterRule(_localctx, 386, HuTaoParser::RuleClass_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2330);
    match(HuTaoParser::CLASS);
    setState(2331);
    identifier();
    setState(2333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(2332);
      type_parameter_list();
    }
    setState(2336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COLON) {
      setState(2335);
      class_base();
    }
    setState(2339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(2338);
      type_parameter_constraints_clauses();
    }
    setState(2341);
    class_body();
    setState(2343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SEMICOLON) {
      setState(2342);
      match(HuTaoParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_definitionContext ------------------------------------------------------------------

HuTaoParser::Struct_definitionContext::Struct_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Struct_definitionContext::STRUCT() {
  return getToken(HuTaoParser::STRUCT, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Struct_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Struct_bodyContext* HuTaoParser::Struct_definitionContext::struct_body() {
  return getRuleContext<HuTaoParser::Struct_bodyContext>(0);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::Struct_definitionContext::type_parameter_list() {
  return getRuleContext<HuTaoParser::Type_parameter_listContext>(0);
}

HuTaoParser::Struct_interfacesContext* HuTaoParser::Struct_definitionContext::struct_interfaces() {
  return getRuleContext<HuTaoParser::Struct_interfacesContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Struct_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}

tree::TerminalNode* HuTaoParser::Struct_definitionContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

tree::TerminalNode* HuTaoParser::Struct_definitionContext::READONLY() {
  return getToken(HuTaoParser::READONLY, 0);
}

tree::TerminalNode* HuTaoParser::Struct_definitionContext::REF() {
  return getToken(HuTaoParser::REF, 0);
}


size_t HuTaoParser::Struct_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleStruct_definition;
}

void HuTaoParser::Struct_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_definition(this);
}

void HuTaoParser::Struct_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_definition(this);
}

HuTaoParser::Struct_definitionContext* HuTaoParser::struct_definition() {
  Struct_definitionContext *_localctx = _tracker.createInstance<Struct_definitionContext>(_ctx, getState());
  enterRule(_localctx, 388, HuTaoParser::RuleStruct_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::READONLY

    || _la == HuTaoParser::REF) {
      setState(2345);
      _la = _input->LA(1);
      if (!(_la == HuTaoParser::READONLY

      || _la == HuTaoParser::REF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(2348);
    match(HuTaoParser::STRUCT);
    setState(2349);
    identifier();
    setState(2351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(2350);
      type_parameter_list();
    }
    setState(2354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COLON) {
      setState(2353);
      struct_interfaces();
    }
    setState(2357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(2356);
      type_parameter_constraints_clauses();
    }
    setState(2359);
    struct_body();
    setState(2361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SEMICOLON) {
      setState(2360);
      match(HuTaoParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_definitionContext ------------------------------------------------------------------

HuTaoParser::Interface_definitionContext::Interface_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Interface_definitionContext::INTERFACE() {
  return getToken(HuTaoParser::INTERFACE, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Interface_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Class_bodyContext* HuTaoParser::Interface_definitionContext::class_body() {
  return getRuleContext<HuTaoParser::Class_bodyContext>(0);
}

HuTaoParser::Variant_type_parameter_listContext* HuTaoParser::Interface_definitionContext::variant_type_parameter_list() {
  return getRuleContext<HuTaoParser::Variant_type_parameter_listContext>(0);
}

HuTaoParser::Interface_baseContext* HuTaoParser::Interface_definitionContext::interface_base() {
  return getRuleContext<HuTaoParser::Interface_baseContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Interface_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}

tree::TerminalNode* HuTaoParser::Interface_definitionContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Interface_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleInterface_definition;
}

void HuTaoParser::Interface_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_definition(this);
}

void HuTaoParser::Interface_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_definition(this);
}

HuTaoParser::Interface_definitionContext* HuTaoParser::interface_definition() {
  Interface_definitionContext *_localctx = _tracker.createInstance<Interface_definitionContext>(_ctx, getState());
  enterRule(_localctx, 390, HuTaoParser::RuleInterface_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2363);
    match(HuTaoParser::INTERFACE);
    setState(2364);
    identifier();
    setState(2366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(2365);
      variant_type_parameter_list();
    }
    setState(2369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COLON) {
      setState(2368);
      interface_base();
    }
    setState(2372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(2371);
      type_parameter_constraints_clauses();
    }
    setState(2374);
    class_body();
    setState(2376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SEMICOLON) {
      setState(2375);
      match(HuTaoParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_definitionContext ------------------------------------------------------------------

HuTaoParser::Enum_definitionContext::Enum_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Enum_definitionContext::ENUM() {
  return getToken(HuTaoParser::ENUM, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Enum_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

HuTaoParser::Enum_bodyContext* HuTaoParser::Enum_definitionContext::enum_body() {
  return getRuleContext<HuTaoParser::Enum_bodyContext>(0);
}

HuTaoParser::Enum_baseContext* HuTaoParser::Enum_definitionContext::enum_base() {
  return getRuleContext<HuTaoParser::Enum_baseContext>(0);
}

tree::TerminalNode* HuTaoParser::Enum_definitionContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Enum_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleEnum_definition;
}

void HuTaoParser::Enum_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_definition(this);
}

void HuTaoParser::Enum_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_definition(this);
}

HuTaoParser::Enum_definitionContext* HuTaoParser::enum_definition() {
  Enum_definitionContext *_localctx = _tracker.createInstance<Enum_definitionContext>(_ctx, getState());
  enterRule(_localctx, 392, HuTaoParser::RuleEnum_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2378);
    match(HuTaoParser::ENUM);
    setState(2379);
    identifier();
    setState(2381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COLON) {
      setState(2380);
      enum_base();
    }
    setState(2383);
    enum_body();
    setState(2385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::SEMICOLON) {
      setState(2384);
      match(HuTaoParser::SEMICOLON);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delegate_definitionContext ------------------------------------------------------------------

HuTaoParser::Delegate_definitionContext::Delegate_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Delegate_definitionContext::DELEGATE() {
  return getToken(HuTaoParser::DELEGATE, 0);
}

HuTaoParser::Return_typeContext* HuTaoParser::Delegate_definitionContext::return_type() {
  return getRuleContext<HuTaoParser::Return_typeContext>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Delegate_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Delegate_definitionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Delegate_definitionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Delegate_definitionContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::Variant_type_parameter_listContext* HuTaoParser::Delegate_definitionContext::variant_type_parameter_list() {
  return getRuleContext<HuTaoParser::Variant_type_parameter_listContext>(0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Delegate_definitionContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Delegate_definitionContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}


size_t HuTaoParser::Delegate_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleDelegate_definition;
}

void HuTaoParser::Delegate_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegate_definition(this);
}

void HuTaoParser::Delegate_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegate_definition(this);
}

HuTaoParser::Delegate_definitionContext* HuTaoParser::delegate_definition() {
  Delegate_definitionContext *_localctx = _tracker.createInstance<Delegate_definitionContext>(_ctx, getState());
  enterRule(_localctx, 394, HuTaoParser::RuleDelegate_definition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2387);
    match(HuTaoParser::DELEGATE);
    setState(2388);
    return_type();
    setState(2389);
    identifier();
    setState(2391);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(2390);
      variant_type_parameter_list();
    }
    setState(2393);
    match(HuTaoParser::OPEN_PARENS);
    setState(2395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT)
      | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(2394);
      formal_parameter_list();
    }
    setState(2397);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(2398);
      type_parameter_constraints_clauses();
    }
    setState(2401);
    match(HuTaoParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_declarationContext ------------------------------------------------------------------

HuTaoParser::Event_declarationContext::Event_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Event_declarationContext::EVENT() {
  return getToken(HuTaoParser::EVENT, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Event_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::Variable_declaratorsContext* HuTaoParser::Event_declarationContext::variable_declarators() {
  return getRuleContext<HuTaoParser::Variable_declaratorsContext>(0);
}

tree::TerminalNode* HuTaoParser::Event_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::Member_nameContext* HuTaoParser::Event_declarationContext::member_name() {
  return getRuleContext<HuTaoParser::Member_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Event_declarationContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

HuTaoParser::Event_accessor_declarationsContext* HuTaoParser::Event_declarationContext::event_accessor_declarations() {
  return getRuleContext<HuTaoParser::Event_accessor_declarationsContext>(0);
}

tree::TerminalNode* HuTaoParser::Event_declarationContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}


size_t HuTaoParser::Event_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleEvent_declaration;
}

void HuTaoParser::Event_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent_declaration(this);
}

void HuTaoParser::Event_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent_declaration(this);
}

HuTaoParser::Event_declarationContext* HuTaoParser::event_declaration() {
  Event_declarationContext *_localctx = _tracker.createInstance<Event_declarationContext>(_ctx, getState());
  enterRule(_localctx, 396, HuTaoParser::RuleEvent_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2403);
    match(HuTaoParser::EVENT);
    setState(2404);
    type_();
    setState(2413);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
    case 1: {
      setState(2405);
      variable_declarators();
      setState(2406);
      match(HuTaoParser::SEMICOLON);
      break;
    }

    case 2: {
      setState(2408);
      member_name();
      setState(2409);
      match(HuTaoParser::OPEN_BRACE);
      setState(2410);
      event_accessor_declarations();
      setState(2411);
      match(HuTaoParser::CLOSE_BRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_declarationContext ------------------------------------------------------------------

HuTaoParser::Field_declarationContext::Field_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Variable_declaratorsContext* HuTaoParser::Field_declarationContext::variable_declarators() {
  return getRuleContext<HuTaoParser::Variable_declaratorsContext>(0);
}

tree::TerminalNode* HuTaoParser::Field_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Field_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleField_declaration;
}

void HuTaoParser::Field_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_declaration(this);
}

void HuTaoParser::Field_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_declaration(this);
}

HuTaoParser::Field_declarationContext* HuTaoParser::field_declaration() {
  Field_declarationContext *_localctx = _tracker.createInstance<Field_declarationContext>(_ctx, getState());
  enterRule(_localctx, 398, HuTaoParser::RuleField_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2415);
    variable_declarators();
    setState(2416);
    match(HuTaoParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Property_declarationContext ------------------------------------------------------------------

HuTaoParser::Property_declarationContext::Property_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Member_nameContext* HuTaoParser::Property_declarationContext::member_name() {
  return getRuleContext<HuTaoParser::Member_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Property_declarationContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

HuTaoParser::Accessor_declarationsContext* HuTaoParser::Property_declarationContext::accessor_declarations() {
  return getRuleContext<HuTaoParser::Accessor_declarationsContext>(0);
}

tree::TerminalNode* HuTaoParser::Property_declarationContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Property_declarationContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Property_declarationContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Property_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

tree::TerminalNode* HuTaoParser::Property_declarationContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::Variable_initializerContext* HuTaoParser::Property_declarationContext::variable_initializer() {
  return getRuleContext<HuTaoParser::Variable_initializerContext>(0);
}


size_t HuTaoParser::Property_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleProperty_declaration;
}

void HuTaoParser::Property_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProperty_declaration(this);
}

void HuTaoParser::Property_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProperty_declaration(this);
}

HuTaoParser::Property_declarationContext* HuTaoParser::property_declaration() {
  Property_declarationContext *_localctx = _tracker.createInstance<Property_declarationContext>(_ctx, getState());
  enterRule(_localctx, 400, HuTaoParser::RuleProperty_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2418);
    member_name();
    setState(2432);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        setState(2419);
        match(HuTaoParser::OPEN_BRACE);
        setState(2420);
        accessor_declarations();
        setState(2421);
        match(HuTaoParser::CLOSE_BRACE);
        setState(2426);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::ASSIGNMENT) {
          setState(2422);
          match(HuTaoParser::ASSIGNMENT);
          setState(2423);
          variable_initializer();
          setState(2424);
          match(HuTaoParser::SEMICOLON);
        }
        break;
      }

      case HuTaoParser::ASSIGNMENT: {
        setState(2428);
        right_arrow();
        setState(2429);
        throwable_expression();
        setState(2430);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constant_declarationContext ------------------------------------------------------------------

HuTaoParser::Constant_declarationContext::Constant_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Constant_declarationContext::CONST() {
  return getToken(HuTaoParser::CONST, 0);
}

HuTaoParser::Type_Context* HuTaoParser::Constant_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::Constant_declaratorsContext* HuTaoParser::Constant_declarationContext::constant_declarators() {
  return getRuleContext<HuTaoParser::Constant_declaratorsContext>(0);
}

tree::TerminalNode* HuTaoParser::Constant_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Constant_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleConstant_declaration;
}

void HuTaoParser::Constant_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant_declaration(this);
}

void HuTaoParser::Constant_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant_declaration(this);
}

HuTaoParser::Constant_declarationContext* HuTaoParser::constant_declaration() {
  Constant_declarationContext *_localctx = _tracker.createInstance<Constant_declarationContext>(_ctx, getState());
  enterRule(_localctx, 402, HuTaoParser::RuleConstant_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2434);
    match(HuTaoParser::CONST);
    setState(2435);
    type_();
    setState(2436);
    constant_declarators();
    setState(2437);
    match(HuTaoParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexer_declarationContext ------------------------------------------------------------------

HuTaoParser::Indexer_declarationContext::Indexer_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::THIS() {
  return getToken(HuTaoParser::THIS, 0);
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::OPEN_BRACKET() {
  return getToken(HuTaoParser::OPEN_BRACKET, 0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Indexer_declarationContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::CLOSE_BRACKET() {
  return getToken(HuTaoParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::OPEN_BRACE() {
  return getToken(HuTaoParser::OPEN_BRACE, 0);
}

HuTaoParser::Accessor_declarationsContext* HuTaoParser::Indexer_declarationContext::accessor_declarations() {
  return getRuleContext<HuTaoParser::Accessor_declarationsContext>(0);
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::CLOSE_BRACE() {
  return getToken(HuTaoParser::CLOSE_BRACE, 0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Indexer_declarationContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Indexer_declarationContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Indexer_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}


size_t HuTaoParser::Indexer_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleIndexer_declaration;
}

void HuTaoParser::Indexer_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexer_declaration(this);
}

void HuTaoParser::Indexer_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexer_declaration(this);
}

HuTaoParser::Indexer_declarationContext* HuTaoParser::indexer_declaration() {
  Indexer_declarationContext *_localctx = _tracker.createInstance<Indexer_declarationContext>(_ctx, getState());
  enterRule(_localctx, 404, HuTaoParser::RuleIndexer_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2439);
    match(HuTaoParser::THIS);
    setState(2440);
    match(HuTaoParser::OPEN_BRACKET);
    setState(2441);
    formal_parameter_list();
    setState(2442);
    match(HuTaoParser::CLOSE_BRACKET);
    setState(2451);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE: {
        setState(2443);
        match(HuTaoParser::OPEN_BRACE);
        setState(2444);
        accessor_declarations();
        setState(2445);
        match(HuTaoParser::CLOSE_BRACE);
        break;
      }

      case HuTaoParser::ASSIGNMENT: {
        setState(2447);
        right_arrow();
        setState(2448);
        throwable_expression();
        setState(2449);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Destructor_definitionContext ------------------------------------------------------------------

HuTaoParser::Destructor_definitionContext::Destructor_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Destructor_definitionContext::TILDE() {
  return getToken(HuTaoParser::TILDE, 0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Destructor_definitionContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Destructor_definitionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Destructor_definitionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::BodyContext* HuTaoParser::Destructor_definitionContext::body() {
  return getRuleContext<HuTaoParser::BodyContext>(0);
}


size_t HuTaoParser::Destructor_definitionContext::getRuleIndex() const {
  return HuTaoParser::RuleDestructor_definition;
}

void HuTaoParser::Destructor_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDestructor_definition(this);
}

void HuTaoParser::Destructor_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDestructor_definition(this);
}

HuTaoParser::Destructor_definitionContext* HuTaoParser::destructor_definition() {
  Destructor_definitionContext *_localctx = _tracker.createInstance<Destructor_definitionContext>(_ctx, getState());
  enterRule(_localctx, 406, HuTaoParser::RuleDestructor_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2453);
    match(HuTaoParser::TILDE);
    setState(2454);
    identifier();
    setState(2455);
    match(HuTaoParser::OPEN_PARENS);
    setState(2456);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2457);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_declarationContext ------------------------------------------------------------------

HuTaoParser::Constructor_declarationContext::Constructor_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::IdentifierContext* HuTaoParser::Constructor_declarationContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Constructor_declarationContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Constructor_declarationContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::BodyContext* HuTaoParser::Constructor_declarationContext::body() {
  return getRuleContext<HuTaoParser::BodyContext>(0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Constructor_declarationContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

HuTaoParser::Constructor_initializerContext* HuTaoParser::Constructor_declarationContext::constructor_initializer() {
  return getRuleContext<HuTaoParser::Constructor_initializerContext>(0);
}


size_t HuTaoParser::Constructor_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleConstructor_declaration;
}

void HuTaoParser::Constructor_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_declaration(this);
}

void HuTaoParser::Constructor_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_declaration(this);
}

HuTaoParser::Constructor_declarationContext* HuTaoParser::constructor_declaration() {
  Constructor_declarationContext *_localctx = _tracker.createInstance<Constructor_declarationContext>(_ctx, getState());
  enterRule(_localctx, 408, HuTaoParser::RuleConstructor_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2459);
    identifier();
    setState(2460);
    match(HuTaoParser::OPEN_PARENS);
    setState(2462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT)
      | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(2461);
      formal_parameter_list();
    }
    setState(2464);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COLON) {
      setState(2465);
      constructor_initializer();
    }
    setState(2468);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_declarationContext ------------------------------------------------------------------

HuTaoParser::Method_declarationContext::Method_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Method_member_nameContext* HuTaoParser::Method_declarationContext::method_member_name() {
  return getRuleContext<HuTaoParser::Method_member_nameContext>(0);
}

tree::TerminalNode* HuTaoParser::Method_declarationContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Method_declarationContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Method_bodyContext* HuTaoParser::Method_declarationContext::method_body() {
  return getRuleContext<HuTaoParser::Method_bodyContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Method_declarationContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Method_declarationContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Method_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

HuTaoParser::Type_parameter_listContext* HuTaoParser::Method_declarationContext::type_parameter_list() {
  return getRuleContext<HuTaoParser::Type_parameter_listContext>(0);
}

HuTaoParser::Formal_parameter_listContext* HuTaoParser::Method_declarationContext::formal_parameter_list() {
  return getRuleContext<HuTaoParser::Formal_parameter_listContext>(0);
}

HuTaoParser::Type_parameter_constraints_clausesContext* HuTaoParser::Method_declarationContext::type_parameter_constraints_clauses() {
  return getRuleContext<HuTaoParser::Type_parameter_constraints_clausesContext>(0);
}


size_t HuTaoParser::Method_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleMethod_declaration;
}

void HuTaoParser::Method_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_declaration(this);
}

void HuTaoParser::Method_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_declaration(this);
}

HuTaoParser::Method_declarationContext* HuTaoParser::method_declaration() {
  Method_declarationContext *_localctx = _tracker.createInstance<Method_declarationContext>(_ctx, getState());
  enterRule(_localctx, 410, HuTaoParser::RuleMethod_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2470);
    method_member_name();
    setState(2472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::LT) {
      setState(2471);
      type_parameter_list();
    }
    setState(2474);
    match(HuTaoParser::OPEN_PARENS);
    setState(2476);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT)
      | (1ULL << HuTaoParser::PARAMS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_BRACKET - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0)) {
      setState(2475);
      formal_parameter_list();
    }
    setState(2478);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2480);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::WHERE) {
      setState(2479);
      type_parameter_constraints_clauses();
    }
    setState(2487);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE:
      case HuTaoParser::SEMICOLON: {
        setState(2482);
        method_body();
        break;
      }

      case HuTaoParser::ASSIGNMENT: {
        setState(2483);
        right_arrow();
        setState(2484);
        throwable_expression();
        setState(2485);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_member_nameContext ------------------------------------------------------------------

HuTaoParser::Method_member_nameContext::Method_member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuTaoParser::IdentifierContext *> HuTaoParser::Method_member_nameContext::identifier() {
  return getRuleContexts<HuTaoParser::IdentifierContext>();
}

HuTaoParser::IdentifierContext* HuTaoParser::Method_member_nameContext::identifier(size_t i) {
  return getRuleContext<HuTaoParser::IdentifierContext>(i);
}

tree::TerminalNode* HuTaoParser::Method_member_nameContext::DOUBLE_COLON() {
  return getToken(HuTaoParser::DOUBLE_COLON, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Method_member_nameContext::DOT() {
  return getTokens(HuTaoParser::DOT);
}

tree::TerminalNode* HuTaoParser::Method_member_nameContext::DOT(size_t i) {
  return getToken(HuTaoParser::DOT, i);
}

std::vector<HuTaoParser::Type_argument_listContext *> HuTaoParser::Method_member_nameContext::type_argument_list() {
  return getRuleContexts<HuTaoParser::Type_argument_listContext>();
}

HuTaoParser::Type_argument_listContext* HuTaoParser::Method_member_nameContext::type_argument_list(size_t i) {
  return getRuleContext<HuTaoParser::Type_argument_listContext>(i);
}


size_t HuTaoParser::Method_member_nameContext::getRuleIndex() const {
  return HuTaoParser::RuleMethod_member_name;
}

void HuTaoParser::Method_member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_member_name(this);
}

void HuTaoParser::Method_member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_member_name(this);
}

HuTaoParser::Method_member_nameContext* HuTaoParser::method_member_name() {
  Method_member_nameContext *_localctx = _tracker.createInstance<Method_member_nameContext>(_ctx, getState());
  enterRule(_localctx, 412, HuTaoParser::RuleMethod_member_name);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx)) {
    case 1: {
      setState(2489);
      identifier();
      break;
    }

    case 2: {
      setState(2490);
      identifier();
      setState(2491);
      match(HuTaoParser::DOUBLE_COLON);
      setState(2492);
      identifier();
      break;
    }

    default:
      break;
    }
    setState(2503);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2497);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HuTaoParser::LT) {
          setState(2496);
          type_argument_list();
        }
        setState(2499);
        match(HuTaoParser::DOT);
        setState(2500);
        identifier(); 
      }
      setState(2505);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_declarationContext ------------------------------------------------------------------

HuTaoParser::Operator_declarationContext::Operator_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::OPERATOR() {
  return getToken(HuTaoParser::OPERATOR, 0);
}

HuTaoParser::Overloadable_operatorContext* HuTaoParser::Operator_declarationContext::overloadable_operator() {
  return getRuleContext<HuTaoParser::Overloadable_operatorContext>(0);
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

std::vector<HuTaoParser::Arg_declarationContext *> HuTaoParser::Operator_declarationContext::arg_declaration() {
  return getRuleContexts<HuTaoParser::Arg_declarationContext>();
}

HuTaoParser::Arg_declarationContext* HuTaoParser::Operator_declarationContext::arg_declaration(size_t i) {
  return getRuleContext<HuTaoParser::Arg_declarationContext>(i);
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::BodyContext* HuTaoParser::Operator_declarationContext::body() {
  return getRuleContext<HuTaoParser::BodyContext>(0);
}

HuTaoParser::Right_arrowContext* HuTaoParser::Operator_declarationContext::right_arrow() {
  return getRuleContext<HuTaoParser::Right_arrowContext>(0);
}

HuTaoParser::Throwable_expressionContext* HuTaoParser::Operator_declarationContext::throwable_expression() {
  return getRuleContext<HuTaoParser::Throwable_expressionContext>(0);
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::SEMICOLON() {
  return getToken(HuTaoParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> HuTaoParser::Operator_declarationContext::IN() {
  return getTokens(HuTaoParser::IN);
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::IN(size_t i) {
  return getToken(HuTaoParser::IN, i);
}

tree::TerminalNode* HuTaoParser::Operator_declarationContext::COMMA() {
  return getToken(HuTaoParser::COMMA, 0);
}


size_t HuTaoParser::Operator_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleOperator_declaration;
}

void HuTaoParser::Operator_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator_declaration(this);
}

void HuTaoParser::Operator_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator_declaration(this);
}

HuTaoParser::Operator_declarationContext* HuTaoParser::operator_declaration() {
  Operator_declarationContext *_localctx = _tracker.createInstance<Operator_declarationContext>(_ctx, getState());
  enterRule(_localctx, 414, HuTaoParser::RuleOperator_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2506);
    match(HuTaoParser::OPERATOR);
    setState(2507);
    overloadable_operator();
    setState(2508);
    match(HuTaoParser::OPEN_PARENS);
    setState(2510);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::IN) {
      setState(2509);
      match(HuTaoParser::IN);
    }
    setState(2512);
    arg_declaration();
    setState(2518);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::COMMA) {
      setState(2513);
      match(HuTaoParser::COMMA);
      setState(2515);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuTaoParser::IN) {
        setState(2514);
        match(HuTaoParser::IN);
      }
      setState(2517);
      arg_declaration();
    }
    setState(2520);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuTaoParser::OPEN_BRACE:
      case HuTaoParser::SEMICOLON: {
        setState(2521);
        body();
        break;
      }

      case HuTaoParser::ASSIGNMENT: {
        setState(2522);
        right_arrow();
        setState(2523);
        throwable_expression();
        setState(2524);
        match(HuTaoParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_declarationContext ------------------------------------------------------------------

HuTaoParser::Arg_declarationContext::Arg_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuTaoParser::Type_Context* HuTaoParser::Arg_declarationContext::type_() {
  return getRuleContext<HuTaoParser::Type_Context>(0);
}

HuTaoParser::IdentifierContext* HuTaoParser::Arg_declarationContext::identifier() {
  return getRuleContext<HuTaoParser::IdentifierContext>(0);
}

tree::TerminalNode* HuTaoParser::Arg_declarationContext::ASSIGNMENT() {
  return getToken(HuTaoParser::ASSIGNMENT, 0);
}

HuTaoParser::ExpressionContext* HuTaoParser::Arg_declarationContext::expression() {
  return getRuleContext<HuTaoParser::ExpressionContext>(0);
}


size_t HuTaoParser::Arg_declarationContext::getRuleIndex() const {
  return HuTaoParser::RuleArg_declaration;
}

void HuTaoParser::Arg_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_declaration(this);
}

void HuTaoParser::Arg_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_declaration(this);
}

HuTaoParser::Arg_declarationContext* HuTaoParser::arg_declaration() {
  Arg_declarationContext *_localctx = _tracker.createInstance<Arg_declarationContext>(_ctx, getState());
  enterRule(_localctx, 416, HuTaoParser::RuleArg_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2528);
    type_();
    setState(2529);
    identifier();
    setState(2532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::ASSIGNMENT) {
      setState(2530);
      match(HuTaoParser::ASSIGNMENT);
      setState(2531);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_invocationContext ------------------------------------------------------------------

HuTaoParser::Method_invocationContext::Method_invocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Method_invocationContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Method_invocationContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Argument_listContext* HuTaoParser::Method_invocationContext::argument_list() {
  return getRuleContext<HuTaoParser::Argument_listContext>(0);
}


size_t HuTaoParser::Method_invocationContext::getRuleIndex() const {
  return HuTaoParser::RuleMethod_invocation;
}

void HuTaoParser::Method_invocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_invocation(this);
}

void HuTaoParser::Method_invocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_invocation(this);
}

HuTaoParser::Method_invocationContext* HuTaoParser::method_invocation() {
  Method_invocationContext *_localctx = _tracker.createInstance<Method_invocationContext>(_ctx, getState());
  enterRule(_localctx, 418, HuTaoParser::RuleMethod_invocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2534);
    match(HuTaoParser::OPEN_PARENS);
    setState(2536);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
      | (1ULL << (HuTaoParser::MINUS - 128))
      | (1ULL << (HuTaoParser::STAR - 128))
      | (1ULL << (HuTaoParser::AMP - 128))
      | (1ULL << (HuTaoParser::CARET - 128))
      | (1ULL << (HuTaoParser::BANG - 128))
      | (1ULL << (HuTaoParser::TILDE - 128))
      | (1ULL << (HuTaoParser::OP_INC - 128))
      | (1ULL << (HuTaoParser::OP_DEC - 128))
      | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
      setState(2535);
      argument_list();
    }
    setState(2538);
    match(HuTaoParser::CLOSE_PARENS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_creation_expressionContext ------------------------------------------------------------------

HuTaoParser::Object_creation_expressionContext::Object_creation_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::Object_creation_expressionContext::OPEN_PARENS() {
  return getToken(HuTaoParser::OPEN_PARENS, 0);
}

tree::TerminalNode* HuTaoParser::Object_creation_expressionContext::CLOSE_PARENS() {
  return getToken(HuTaoParser::CLOSE_PARENS, 0);
}

HuTaoParser::Argument_listContext* HuTaoParser::Object_creation_expressionContext::argument_list() {
  return getRuleContext<HuTaoParser::Argument_listContext>(0);
}

HuTaoParser::Object_or_collection_initializerContext* HuTaoParser::Object_creation_expressionContext::object_or_collection_initializer() {
  return getRuleContext<HuTaoParser::Object_or_collection_initializerContext>(0);
}


size_t HuTaoParser::Object_creation_expressionContext::getRuleIndex() const {
  return HuTaoParser::RuleObject_creation_expression;
}

void HuTaoParser::Object_creation_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_creation_expression(this);
}

void HuTaoParser::Object_creation_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_creation_expression(this);
}

HuTaoParser::Object_creation_expressionContext* HuTaoParser::object_creation_expression() {
  Object_creation_expressionContext *_localctx = _tracker.createInstance<Object_creation_expressionContext>(_ctx, getState());
  enterRule(_localctx, 420, HuTaoParser::RuleObject_creation_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2540);
    match(HuTaoParser::OPEN_PARENS);
    setState(2542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BASE)
      | (1ULL << HuTaoParser::BOOL)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::CHECKED)
      | (1ULL << HuTaoParser::DEFAULT)
      | (1ULL << HuTaoParser::DELEGATE)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FALSE)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::IN)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::NEW)
      | (1ULL << HuTaoParser::NULL_)
      | (1ULL << HuTaoParser::OBJECT)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY)
      | (1ULL << HuTaoParser::OUT))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REF - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::SIZEOF - 64))
      | (1ULL << (HuTaoParser::STRING - 64))
      | (1ULL << (HuTaoParser::THIS - 64))
      | (1ULL << (HuTaoParser::TRUE - 64))
      | (1ULL << (HuTaoParser::TYPEOF - 64))
      | (1ULL << (HuTaoParser::UNCHECKED - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::VOID - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64))
      | (1ULL << (HuTaoParser::LITERAL_ACCESS - 64))
      | (1ULL << (HuTaoParser::INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::HEX_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::BIN_INTEGER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REAL_LITERAL - 64))
      | (1ULL << (HuTaoParser::CHARACTER_LITERAL - 64))
      | (1ULL << (HuTaoParser::REGULAR_STRING - 64))
      | (1ULL << (HuTaoParser::VERBATIUM_STRING - 64))
      | (1ULL << (HuTaoParser::U8 - 64))
      | (1ULL << (HuTaoParser::I8 - 64))
      | (1ULL << (HuTaoParser::U16 - 64))
      | (1ULL << (HuTaoParser::I16 - 64))
      | (1ULL << (HuTaoParser::U32 - 64))
      | (1ULL << (HuTaoParser::I32 - 64))
      | (1ULL << (HuTaoParser::U64 - 64))
      | (1ULL << (HuTaoParser::I64 - 64))
      | (1ULL << (HuTaoParser::F32 - 64))
      | (1ULL << (HuTaoParser::F64 - 64))
      | (1ULL << (HuTaoParser::OPEN_PARENS - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HuTaoParser::PLUS - 128))
      | (1ULL << (HuTaoParser::MINUS - 128))
      | (1ULL << (HuTaoParser::STAR - 128))
      | (1ULL << (HuTaoParser::AMP - 128))
      | (1ULL << (HuTaoParser::CARET - 128))
      | (1ULL << (HuTaoParser::BANG - 128))
      | (1ULL << (HuTaoParser::TILDE - 128))
      | (1ULL << (HuTaoParser::OP_INC - 128))
      | (1ULL << (HuTaoParser::OP_DEC - 128))
      | (1ULL << (HuTaoParser::OP_RANGE - 128)))) != 0)) {
      setState(2541);
      argument_list();
    }
    setState(2544);
    match(HuTaoParser::CLOSE_PARENS);
    setState(2546);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuTaoParser::OPEN_BRACE) {
      setState(2545);
      object_or_collection_initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

HuTaoParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuTaoParser::IdentifierContext::IDENTIFIER() {
  return getToken(HuTaoParser::IDENTIFIER, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ADD() {
  return getToken(HuTaoParser::ADD, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ALIAS() {
  return getToken(HuTaoParser::ALIAS, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ASCENDING() {
  return getToken(HuTaoParser::ASCENDING, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ASYNC() {
  return getToken(HuTaoParser::ASYNC, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::AWAIT() {
  return getToken(HuTaoParser::AWAIT, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::BY() {
  return getToken(HuTaoParser::BY, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::EQUALS() {
  return getToken(HuTaoParser::EQUALS, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::FROM() {
  return getToken(HuTaoParser::FROM, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::GET() {
  return getToken(HuTaoParser::GET, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::GROUP() {
  return getToken(HuTaoParser::GROUP, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::INTO() {
  return getToken(HuTaoParser::INTO, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::JOIN() {
  return getToken(HuTaoParser::JOIN, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::LET() {
  return getToken(HuTaoParser::LET, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::NAMEOF() {
  return getToken(HuTaoParser::NAMEOF, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ON() {
  return getToken(HuTaoParser::ON, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::ORDERBY() {
  return getToken(HuTaoParser::ORDERBY, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::PARTIAL() {
  return getToken(HuTaoParser::PARTIAL, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::REMOVE() {
  return getToken(HuTaoParser::REMOVE, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::SELECT() {
  return getToken(HuTaoParser::SELECT, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::SET() {
  return getToken(HuTaoParser::SET, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::UNMANAGED() {
  return getToken(HuTaoParser::UNMANAGED, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::VAR() {
  return getToken(HuTaoParser::VAR, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::WHEN() {
  return getToken(HuTaoParser::WHEN, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::WHERE() {
  return getToken(HuTaoParser::WHERE, 0);
}

tree::TerminalNode* HuTaoParser::IdentifierContext::YIELD() {
  return getToken(HuTaoParser::YIELD, 0);
}


size_t HuTaoParser::IdentifierContext::getRuleIndex() const {
  return HuTaoParser::RuleIdentifier;
}

void HuTaoParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void HuTaoParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuTaoParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

HuTaoParser::IdentifierContext* HuTaoParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 422, HuTaoParser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2548);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuTaoParser::ADD)
      | (1ULL << HuTaoParser::ALIAS)
      | (1ULL << HuTaoParser::ASCENDING)
      | (1ULL << HuTaoParser::ASYNC)
      | (1ULL << HuTaoParser::AWAIT)
      | (1ULL << HuTaoParser::BY)
      | (1ULL << HuTaoParser::EQUALS)
      | (1ULL << HuTaoParser::FROM)
      | (1ULL << HuTaoParser::GET)
      | (1ULL << HuTaoParser::GROUP)
      | (1ULL << HuTaoParser::INTO)
      | (1ULL << HuTaoParser::JOIN)
      | (1ULL << HuTaoParser::LET)
      | (1ULL << HuTaoParser::NAMEOF)
      | (1ULL << HuTaoParser::ON)
      | (1ULL << HuTaoParser::ORDERBY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HuTaoParser::PARTIAL - 64))
      | (1ULL << (HuTaoParser::REMOVE - 64))
      | (1ULL << (HuTaoParser::SELECT - 64))
      | (1ULL << (HuTaoParser::SET - 64))
      | (1ULL << (HuTaoParser::UNMANAGED - 64))
      | (1ULL << (HuTaoParser::VAR - 64))
      | (1ULL << (HuTaoParser::WHEN - 64))
      | (1ULL << (HuTaoParser::WHERE - 64))
      | (1ULL << (HuTaoParser::YIELD - 64))
      | (1ULL << (HuTaoParser::IDENTIFIER - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool HuTaoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 186: return right_arrowSempred(dynamic_cast<Right_arrowContext *>(context), predicateIndex);
    case 187: return right_shiftSempred(dynamic_cast<Right_shiftContext *>(context), predicateIndex);
    case 188: return right_shift_assignmentSempred(dynamic_cast<Right_shift_assignmentContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HuTaoParser::right_arrowSempred(Right_arrowContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return (dynamic_cast<Right_arrowContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_arrowContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_arrowContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

bool HuTaoParser::right_shiftSempred(Right_shiftContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return (dynamic_cast<Right_shiftContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shiftContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shiftContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

bool HuTaoParser::right_shift_assignmentSempred(Right_shift_assignmentContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->first->getTokenIndex() : 0) + 1 == (dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second != nullptr ? dynamic_cast<Right_shift_assignmentContext *>(_localctx)->second->getTokenIndex() : 0);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> HuTaoParser::_decisionToDFA;
atn::PredictionContextCache HuTaoParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HuTaoParser::_atn;
std::vector<uint16_t> HuTaoParser::_serializedATN;

std::vector<std::string> HuTaoParser::_ruleNames = {
  "compilation_unit", "namespace_or_type_name", "type_", "base_type", "tuple_type", 
  "tuple_element", "simple_type", "numeric_type", "integral_type", "floating_point_type", 
  "class_type", "type_argument_list", "argument_list", "argument", "expression", 
  "non_assignment_expression", "assignment", "assignment_operator", "conditional_expression", 
  "null_coalescing_expression", "conditional_or_expression", "conditional_and_expression", 
  "inclusive_or_expression", "exclusive_or_expression", "and_expression", 
  "equality_expression", "relational_expression", "shift_expression", "additive_expression", 
  "multiplicative_expression", "switch_expression", "switch_expression_arms", 
  "switch_expression_arm", "range_expression", "unary_expression", "primary_expression", 
  "primary_expression_start", "throwable_expression", "throw_expression", 
  "member_access", "bracket_expression", "indexer_argument", "predefined_type", 
  "expression_list", "object_or_collection_initializer", "object_initializer", 
  "member_initializer_list", "member_initializer", "initializer_value", 
  "collection_initializer", "element_initializer", "anonymous_object_initializer", 
  "member_declarator_list", "member_declarator", "unbound_type_name", "generic_dimension_specifier", 
  "isType", "isTypePatternArms", "isTypePatternArm", "lambda_expression", 
  "anonymous_function_signature", "explicit_anonymous_function_parameter_list", 
  "explicit_anonymous_function_parameter", "implicit_anonymous_function_parameter_list", 
  "anonymous_function_body", "query_expression", "from_clause", "query_body", 
  "query_body_clause", "let_clause", "where_clause", "combined_join_clause", 
  "orderby_clause", "ordering", "select_or_group_clause", "query_continuation", 
  "statement", "declarationStatement", "local_function_declaration", "local_function_header", 
  "local_function_modifiers", "local_function_body", "labeled_Statement", 
  "embedded_statement", "simple_embedded_statement", "block", "local_variable_declaration", 
  "local_variable_type", "local_variable_declarator", "local_variable_initializer", 
  "local_constant_declaration", "if_body", "switch_section", "switch_label", 
  "case_guard", "statement_list", "for_initializer", "for_iterator", "catch_clauses", 
  "specific_catch_clause", "general_catch_clause", "exception_filter", "finally_clause", 
  "resource_acquisition", "namespace_declaration", "qualified_identifier", 
  "namespace_body", "extern_alias_directive", "using_directives", "using_directive", 
  "namespace_member_declarations", "namespace_member_declaration", "type_declaration", 
  "qualified_alias_member", "type_parameter_list", "type_parameter", "class_base", 
  "interface_type_list", "type_parameter_constraints_clauses", "type_parameter_constraints_clause", 
  "type_parameter_constraints", "primary_constraint", "secondary_constraints", 
  "constructor_constraint", "class_body", "class_member_declarations", "class_member_declaration", 
  "all_member_modifiers", "all_member_modifier", "common_member_declaration", 
  "typed_member_declaration", "constant_declarators", "constant_declarator", 
  "variable_declarators", "variable_declarator", "variable_initializer", 
  "return_type", "member_name", "method_body", "formal_parameter_list", 
  "fixed_parameters", "fixed_parameter", "parameter_modifier", "parameter_array", 
  "accessor_declarations", "get_accessor_declaration", "set_accessor_declaration", 
  "accessor_modifier", "accessor_body", "event_accessor_declarations", "add_accessor_declaration", 
  "remove_accessor_declaration", "overloadable_operator", "conversion_operator_declarator", 
  "constructor_initializer", "body", "struct_interfaces", "struct_body", 
  "struct_member_declaration", "array_type", "rank_specifier", "array_initializer", 
  "variant_type_parameter_list", "variant_type_parameter", "variance_annotation", 
  "interface_base", "interface_body", "interface_member_declaration", "interface_accessors", 
  "enum_base", "enum_body", "enum_member_declaration", "global_attribute_section", 
  "global_attribute_target", "attributes", "attribute_section", "attribute_target", 
  "attribute_list", "attribute", "attribute_argument", "pointer_type", "fixed_pointer_declarators", 
  "fixed_pointer_declarator", "fixed_pointer_initializer", "fixed_size_buffer_declarator", 
  "stackalloc_initializer", "right_arrow", "right_shift", "right_shift_assignment", 
  "literal", "boolean_literal", "string_literal", "keyword", "class_definition", 
  "struct_definition", "interface_definition", "enum_definition", "delegate_definition", 
  "event_declaration", "field_declaration", "property_declaration", "constant_declaration", 
  "indexer_declaration", "destructor_definition", "constructor_declaration", 
  "method_declaration", "method_member_name", "operator_declaration", "arg_declaration", 
  "method_invocation", "object_creation_expression", "identifier"
};

std::vector<std::string> HuTaoParser::_literalNames = {
  "", "", "'/***/'", "", "", "", "", "'abstract'", "'add'", "'alias'", "'as'", 
  "'ascending'", "'async'", "'await'", "'base'", "'bool'", "'break'", "'by'", 
  "'case'", "'catch'", "'checked'", "'class'", "'const'", "'continue'", 
  "'default'", "'delegate'", "'descending'", "'do'", "'else'", "'enum'", 
  "'equals'", "'event'", "'explicit'", "'extern'", "'false'", "'finally'", 
  "'fixed'", "'for'", "'foreach'", "'from'", "'get'", "'goto'", "'group'", 
  "'if'", "'implicit'", "'in'", "'interface'", "'internal'", "'into'", "'is'", 
  "'join'", "'let'", "'lock'", "'nameof'", "'namespace'", "'new'", "'null'", 
  "'object'", "'on'", "'operator'", "'orderby'", "'out'", "'override'", 
  "'params'", "'partial'", "'private'", "'protected'", "'public'", "'readonly'", 
  "'ref'", "'remove'", "'return'", "'sealed'", "'select'", "'set'", "'sizeof'", 
  "'stackalloc'", "'static'", "'string'", "'struct'", "'switch'", "'this'", 
  "'throw'", "'true'", "'try'", "'typeof'", "'unchecked'", "'unmanaged'", 
  "'unsafe'", "'using'", "'var'", "'virtual'", "'void'", "'volatile'", "'when'", 
  "'where'", "'while'", "'yield'", "", "", "", "", "", "", "", "", "", "'u8'", 
  "'i8'", "'u16'", "'i16'", "'u32'", "'i32'", "'u64'", "'I64'", "'f32'", 
  "'f64'", "'char'", "'{'", "'}'", "'['", "']'", "'('", "')'", "'.'", "','", 
  "':'", "';'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", 
  "'!'", "'~'", "'='", "'<'", "'>'", "'\u003F'", "'::'", "'\u003F\u003F'", 
  "'++'", "'--'", "'&&'", "'||'", "'->'", "'=='", "'!='", "'<='", "'>='", 
  "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", "'<<'", 
  "'<<='", "'\u003F\u003F='", "'..'"
};

std::vector<std::string> HuTaoParser::_symbolicNames = {
  "", "SINGLE_LINE_DOC_COMMENT", "EMPTY_DELIMITED_DOC_COMMENT", "DELIMITED_DOC_COMMENT", 
  "SINGLE_LINE_COMMENT", "DELIMITED_COMMENT", "WHITESPACES", "ABSTRACT", 
  "ADD", "ALIAS", "AS", "ASCENDING", "ASYNC", "AWAIT", "BASE", "BOOL", "BREAK", 
  "BY", "CASE", "CATCH", "CHECKED", "CLASS", "CONST", "CONTINUE", "DEFAULT", 
  "DELEGATE", "DESCENDING", "DO", "ELSE", "ENUM", "EQUALS", "EVENT", "EXPLICIT", 
  "EXTERN", "FALSE", "FINALLY", "FIXED", "FOR", "FOREACH", "FROM", "GET", 
  "GOTO", "GROUP", "IF", "IMPLICIT", "IN", "INTERFACE", "INTERNAL", "INTO", 
  "IS", "JOIN", "LET", "LOCK", "NAMEOF", "NAMESPACE", "NEW", "NULL_", "OBJECT", 
  "ON", "OPERATOR", "ORDERBY", "OUT", "OVERRIDE", "PARAMS", "PARTIAL", "PRIVATE", 
  "PROTECTED", "PUBLIC", "READONLY", "REF", "REMOVE", "RETURN", "SEALED", 
  "SELECT", "SET", "SIZEOF", "STACKALLOC", "STATIC", "STRING", "STRUCT", 
  "SWITCH", "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UNCHECKED", "UNMANAGED", 
  "UNSAFE", "USING", "VAR", "VIRTUAL", "VOID", "VOLATILE", "WHEN", "WHERE", 
  "WHILE", "YIELD", "IDENTIFIER", "LITERAL_ACCESS", "INTEGER_LITERAL", "HEX_INTEGER_LITERAL", 
  "BIN_INTEGER_LITERAL", "REAL_LITERAL", "CHARACTER_LITERAL", "REGULAR_STRING", 
  "VERBATIUM_STRING", "U8", "I8", "U16", "I16", "U32", "I32", "U64", "I64", 
  "F32", "F64", "CHAR", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "OPEN_PARENS", "CLOSE_PARENS", "DOT", "COMMA", "COLON", "SEMICOLON", "PLUS", 
  "MINUS", "STAR", "DIV", "PERCENT", "AMP", "BITWISE_OR", "CARET", "BANG", 
  "TILDE", "ASSIGNMENT", "LT", "GT", "INTERR", "DOUBLE_COLON", "OP_COALESCING", 
  "OP_INC", "OP_DEC", "OP_AND", "OP_OR", "OP_PTR", "OP_EQ", "OP_NE", "OP_LE", 
  "OP_GE", "OP_ADD_ASSIGNMENT", "OP_SUB_ASSIGNMENT", "OP_MULT_ASSIGNMENT", 
  "OP_DIV_ASSIGNMENT", "OP_MOD_ASSIGNMENT", "OP_AND_ASSIGNMENT", "OP_OR_ASSIGNMENT", 
  "OP_XOR_ASSIGNMENT", "OP_LEFT_SHIFT", "OP_LEFT_SHIFT_ASSIGNMENT", "OP_COALESCING_ASSIGNMENT", 
  "OP_RANGE"
};

dfa::Vocabulary HuTaoParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HuTaoParser::_tokenNames;

HuTaoParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xa6, 0x9f9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x3, 0x2, 0x5, 0x2, 0x1ac, 0xa, 
       0x2, 0x3, 0x2, 0x5, 0x2, 0x1af, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x1b5, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1b8, 
       0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1bd, 0xa, 0x3, 
       0x7, 0x3, 0x1bf, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1c2, 0xb, 0x3, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x1c8, 0xa, 0x4, 0xc, 
       0x4, 0xe, 0x4, 0x1cb, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0x1d2, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x6, 0x6, 0x1d8, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x1d9, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1e0, 0xa, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1e4, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x1e8, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1f1, 0xa, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1f7, 0xa, 0xd, 0xc, 0xd, 
       0xe, 0xd, 0x1fa, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x7, 0xe, 0x201, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x204, 0xb, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x209, 0xa, 0xf, 0x3, 
       0xf, 0x5, 0xf, 0x20c, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x210, 
       0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x5, 0x10, 0x218, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x21d, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x227, 
       0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x5, 0x13, 0x234, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x23c, 0xa, 0x14, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x242, 0xa, 0x15, 0x5, 
       0x15, 0x244, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
       0x249, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x24c, 0xb, 0x16, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x251, 0xa, 0x17, 0xc, 0x17, 0xe, 
       0x17, 0x254, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
       0x259, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x25c, 0xb, 0x18, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x261, 0xa, 0x19, 0xc, 0x19, 0xe, 
       0x19, 0x264, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
       0x269, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x26c, 0xb, 0x1a, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x271, 0xa, 0x1b, 0xc, 0x1b, 0xe, 
       0x1b, 0x274, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x27d, 0xa, 0x1c, 0xc, 
       0x1c, 0xe, 0x1c, 0x280, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x5, 0x1d, 0x285, 0xa, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x288, 0xa, 0x1d, 
       0xc, 0x1d, 0xe, 0x1d, 0x28b, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x7, 0x1e, 0x290, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x293, 0xb, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x298, 0xa, 0x1f, 
       0xc, 0x1f, 0xe, 0x1f, 0x29b, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2a2, 0xa, 0x20, 0x5, 0x20, 
       0x2a4, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2a7, 0xa, 0x20, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2ac, 0xa, 0x21, 0xc, 0x21, 0xe, 
       0x21, 0x2af, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x2b3, 0xa, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 
       0x23, 0x2ba, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x2be, 0xa, 
       0x23, 0x5, 0x23, 0x2c0, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 
       0x2dc, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x2e0, 0xa, 0x25, 
       0x3, 0x25, 0x7, 0x25, 0x2e3, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x2e6, 
       0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x2e9, 0xa, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x2f1, 
       0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x2f4, 0xa, 0x25, 0x3, 0x25, 0x7, 
       0x25, 0x2f7, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x2fa, 0xb, 0x25, 0x3, 
       0x25, 0x5, 0x25, 0x2fd, 0xa, 0x25, 0x7, 0x25, 0x2ff, 0xa, 0x25, 0xc, 
       0x25, 0xe, 0x25, 0x302, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x5, 0x26, 0x307, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x315, 0xa, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x31b, 0xa, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x7, 0x26, 0x325, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
       0x328, 0xb, 0x26, 0x3, 0x26, 0x5, 0x26, 0x32b, 0xa, 0x26, 0x3, 0x26, 
       0x6, 0x26, 0x32e, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 0x32f, 0x3, 0x26, 
       0x3, 0x26, 0x5, 0x26, 0x334, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x5, 0x26, 0x33a, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x6, 0x26, 0x340, 0xa, 0x26, 0xd, 0x26, 0xe, 
       0x26, 0x341, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x34b, 0xa, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x35d, 0xa, 0x26, 0x3, 0x26, 
       0x5, 0x26, 0x360, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
       0x26, 0x365, 0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x368, 0xa, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x375, 
       0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x378, 0xb, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x5, 0x26, 0x37d, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 
       0x5, 0x27, 0x381, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x29, 0x5, 0x29, 0x387, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x5, 0x29, 0x38c, 0xa, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x38f, 0xa, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x395, 0xa, 
       0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x398, 0xb, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x39f, 0xa, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x7, 0x2d, 0x3a8, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x3ab, 0xb, 
       0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x3af, 0xa, 0x2e, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x3b4, 0xa, 0x2f, 0x5, 0x2f, 0x3b6, 
       0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x7, 0x30, 0x3bd, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3c0, 0xb, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 
       0x3c7, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 
       0x32, 0x5, 0x32, 0x3ce, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x7, 0x33, 0x3d4, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x3d7, 
       0xb, 0x33, 0x3, 0x33, 0x5, 0x33, 0x3da, 0xa, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 
       0x34, 0x3e3, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
       0x3e8, 0xa, 0x35, 0x5, 0x35, 0x3ea, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x3f1, 0xa, 0x36, 0xc, 
       0x36, 0xe, 0x36, 0x3f4, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x3fb, 0xa, 0x37, 0x3, 0x38, 0x3, 
       0x38, 0x5, 0x38, 0x3ff, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x5, 0x38, 0x404, 0xa, 0x38, 0x5, 0x38, 0x406, 0xa, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x40b, 0xa, 0x38, 0x7, 0x38, 0x40d, 
       0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x410, 0xb, 0x38, 0x3, 0x39, 0x3, 
       0x39, 0x7, 0x39, 0x414, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x417, 0xb, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 
       0x3a, 0x41e, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x421, 0xb, 0x3a, 0x3, 
       0x3a, 0x5, 0x3a, 0x424, 0xa, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x427, 0xa, 
       0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x42a, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x430, 0xa, 0x3b, 0xc, 0x3b, 0xe, 
       0x3b, 0x433, 0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x43c, 0xa, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x44d, 0xa, 0x3e, 0x3, 0x3f, 
       0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x452, 0xa, 0x3f, 0xc, 0x3f, 0xe, 
       0x3f, 0x455, 0xb, 0x3f, 0x3, 0x40, 0x5, 0x40, 0x458, 0xa, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 
       0x41, 0x460, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x463, 0xb, 0x41, 0x3, 
       0x42, 0x3, 0x42, 0x5, 0x42, 0x467, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x46e, 0xa, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x7, 0x45, 0x475, 
       0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x478, 0xb, 0x45, 0x3, 0x45, 0x3, 
       0x45, 0x5, 0x45, 0x47c, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x483, 0xa, 0x46, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x48f, 0xa, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x49a, 0xa, 0x49, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x4a0, 0xa, 0x4a, 0xc, 0x4a, 
       0xe, 0x4a, 0x4a3, 0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x4a7, 
       0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x4b0, 0xa, 0x4c, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
       0x4e, 0x4b9, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x4c2, 0xa, 0x4f, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x5, 0x51, 0x4c8, 0xa, 0x51, 
       0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x4cd, 0xa, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x5, 0x51, 0x4d1, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 
       0x5, 0x51, 0x4d5, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x4d9, 
       0xa, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x4dd, 0xa, 0x52, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4e4, 
       0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 
       0x3, 0x55, 0x5, 0x55, 0x4ec, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x4f9, 0xa, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 
       0x501, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x504, 0xb, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x5, 0x56, 0x519, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x51d, 
       0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x521, 0xa, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x526, 0xa, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 
       0x53a, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x53f, 
       0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x544, 0xa, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
       0x56, 0x54b, 0xa, 0x56, 0x3, 0x56, 0x5, 0x56, 0x54e, 0xa, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x5, 0x56, 0x564, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x570, 0xa, 0x56, 0x3, 0x57, 0x3, 
       0x57, 0x5, 0x57, 0x574, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x57c, 0xa, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 0x582, 0xa, 0x58, 
       0xc, 0x58, 0xe, 0x58, 0x585, 0xb, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x58b, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 
       0x5, 0x59, 0x58f, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 
       0x5a, 0x594, 0xa, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x597, 0xa, 0x5a, 0x3, 
       0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x59c, 0xa, 0x5b, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 
       0x5a4, 0xa, 0x5d, 0x3, 0x5e, 0x6, 0x5e, 0x5a7, 0xa, 0x5e, 0xd, 0x5e, 
       0xe, 0x5e, 0x5a8, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x5, 0x5f, 0x5b0, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x5, 0x5f, 0x5b6, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 
       0x60, 0x3, 0x61, 0x6, 0x61, 0x5bc, 0xa, 0x61, 0xd, 0x61, 0xe, 0x61, 
       0x5bd, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x7, 0x62, 0x5c4, 
       0xa, 0x62, 0xc, 0x62, 0xe, 0x62, 0x5c7, 0xb, 0x62, 0x5, 0x62, 0x5c9, 
       0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x5ce, 0xa, 
       0x63, 0xc, 0x63, 0xe, 0x63, 0x5d1, 0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 
       0x7, 0x64, 0x5d5, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x5d8, 0xb, 0x64, 
       0x3, 0x64, 0x5, 0x64, 0x5db, 0xa, 0x64, 0x3, 0x64, 0x5, 0x64, 0x5de, 
       0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 
       0x5e4, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x5e8, 0xa, 0x65, 
       0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x5ee, 0xa, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
       0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 
       0x69, 0x5, 0x69, 0x5fc, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x5, 0x6a, 0x602, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x7, 0x6b, 0x607, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x60a, 0xb, 
       0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x60e, 0xa, 0x6c, 0x3, 0x6c, 
       0x5, 0x6c, 0x611, 0xa, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x6, 0x6e, 0x61b, 
       0xa, 0x6e, 0xd, 0x6e, 0xe, 0x6e, 0x61c, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x629, 0xa, 0x6f, 0x3, 0x70, 0x6, 0x70, 
       0x62c, 0xa, 0x70, 0xd, 0x70, 0xe, 0x70, 0x62d, 0x3, 0x71, 0x3, 0x71, 
       0x5, 0x71, 0x632, 0xa, 0x71, 0x3, 0x72, 0x5, 0x72, 0x635, 0xa, 0x72, 
       0x3, 0x72, 0x5, 0x72, 0x638, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x63f, 0xa, 0x72, 0x3, 0x73, 
       0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x645, 0xa, 0x73, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x7, 0x74, 0x64b, 0xa, 0x74, 
       0xc, 0x74, 0xe, 0x74, 0x64e, 0xb, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
       0x75, 0x5, 0x75, 0x653, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 0x65b, 0xa, 0x76, 0xc, 
       0x76, 0xe, 0x76, 0x65e, 0xb, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
       0x7, 0x77, 0x663, 0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0x666, 0xb, 0x77, 
       0x3, 0x78, 0x6, 0x78, 0x669, 0xa, 0x78, 0xd, 0x78, 0xe, 0x78, 0x66a, 
       0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x7a, 
       0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x676, 0xa, 0x7a, 0x3, 
       0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x67a, 0xa, 0x7a, 0x5, 0x7a, 0x67c, 0xa, 
       0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x681, 0xa, 0x7b, 
       0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x685, 0xa, 0x7b, 0x3, 0x7c, 0x3, 
       0x7c, 0x3, 0x7c, 0x7, 0x7c, 0x68a, 0xa, 0x7c, 0xc, 0x7c, 0xe, 0x7c, 
       0x68d, 0xb, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
       0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x695, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
       0x3, 0x7f, 0x6, 0x7f, 0x69a, 0xa, 0x7f, 0xd, 0x7f, 0xe, 0x7f, 0x69b, 
       0x3, 0x80, 0x5, 0x80, 0x69f, 0xa, 0x80, 0x3, 0x80, 0x5, 0x80, 0x6a2, 
       0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x6a6, 0xa, 0x80, 0x3, 
       0x81, 0x6, 0x81, 0x6a9, 0xa, 0x81, 0xd, 0x81, 0xe, 0x81, 0x6aa, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6b8, 
       0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
       0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6c2, 0xa, 0x83, 0x3, 
       0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6c9, 
       0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
       0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 
       0x6d5, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x7, 0x85, 0x6da, 
       0xa, 0x85, 0xc, 0x85, 0xe, 0x85, 0x6dd, 0xb, 0x85, 0x3, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x7, 
       0x87, 0x6e6, 0xa, 0x87, 0xc, 0x87, 0xe, 0x87, 0x6e9, 0xb, 0x87, 0x3, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6ee, 0xa, 0x88, 0x3, 0x89, 
       0x3, 0x89, 0x5, 0x89, 0x6f2, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x5, 
       0x8a, 0x6f6, 0xa, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 
       0x5, 0x8c, 0x6fc, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x5, 0x8d, 0x702, 0xa, 0x8d, 0x5, 0x8d, 0x704, 0xa, 0x8d, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x7, 0x8e, 0x709, 0xa, 0x8e, 0xc, 0x8e, 
       0xe, 0x8e, 0x70c, 0xb, 0x8e, 0x3, 0x8f, 0x5, 0x8f, 0x70f, 0xa, 0x8f, 
       0x3, 0x8f, 0x5, 0x8f, 0x712, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x5, 0x90, 0x71e, 0xa, 0x90, 0x3, 0x91, 0x5, 0x91, 
       0x721, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 
       0x92, 0x5, 0x92, 0x728, 0xa, 0x92, 0x3, 0x92, 0x5, 0x92, 0x72b, 0xa, 
       0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x730, 0xa, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x735, 0xa, 0x92, 0x5, 
       0x92, 0x737, 0xa, 0x92, 0x3, 0x93, 0x5, 0x93, 0x73a, 0xa, 0x93, 0x3, 
       0x93, 0x5, 0x93, 0x73d, 0xa, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 
       0x3, 0x94, 0x5, 0x94, 0x743, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x746, 
       0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 
       0x752, 0xa, 0x95, 0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 0x756, 0xa, 0x96, 
       0x3, 0x97, 0x5, 0x97, 0x759, 0xa, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 
       0x97, 0x763, 0xa, 0x97, 0x3, 0x98, 0x5, 0x98, 0x766, 0xa, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x5, 0x99, 0x76c, 0xa, 0x99, 
       0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x5, 0x9a, 0x787, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
       0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9c, 0x3, 
       0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x794, 0xa, 0x9c, 0x3, 0x9c, 
       0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x79a, 0xa, 0x9d, 0x3, 
       0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x7, 0x9f, 0x7a1, 
       0xa, 0x9f, 0xc, 0x9f, 0xe, 0x9f, 0x7a4, 0xb, 0x9f, 0x3, 0x9f, 0x3, 
       0x9f, 0x3, 0xa0, 0x5, 0xa0, 0x7a9, 0xa, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 
       0x7ac, 0xa, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x6, 
       0xa0, 0x7b2, 0xa, 0xa0, 0xd, 0xa0, 0xe, 0xa0, 0x7b3, 0x3, 0xa0, 0x3, 
       0xa0, 0x5, 0xa0, 0x7b8, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x7, 0xa1, 
       0x7bc, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x7bf, 0xb, 0xa1, 0x3, 0xa1, 
       0x6, 0xa1, 0x7c2, 0xa, 0xa1, 0xd, 0xa1, 0xe, 0xa1, 0x7c3, 0x3, 0xa2, 
       0x3, 0xa2, 0x7, 0xa2, 0x7c8, 0xa, 0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x7cb, 
       0xb, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
       0x3, 0xa3, 0x7, 0xa3, 0x7d3, 0xa, 0xa3, 0xc, 0xa3, 0xe, 0xa3, 0x7d6, 
       0xb, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x7d9, 0xa, 0xa3, 0x5, 0xa3, 0x7db, 
       0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
       0x3, 0xa4, 0x7, 0xa4, 0x7e3, 0xa, 0xa4, 0xc, 0xa4, 0xe, 0xa4, 0x7e6, 
       0xb, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x5, 0xa5, 0x7eb, 0xa, 
       0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x7ee, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 
       0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 
       0x3, 0xa8, 0x7, 0xa8, 0x7f9, 0xa, 0xa8, 0xc, 0xa8, 0xe, 0xa8, 0x7fc, 
       0xb, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa9, 0x5, 0xa9, 0x801, 0xa, 
       0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x804, 0xa, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 
       0x807, 0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xa9, 0x5, 0xa9, 0x80e, 0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
       0x5, 0xa9, 0x813, 0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x817, 
       0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x81b, 0xa, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x82c, 0xa, 0xa9, 0x3, 0xa9, 
       0x5, 0xa9, 0x82f, 0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 
       0xa9, 0x834, 0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x838, 0xa, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x83c, 0xa, 0xa9, 0x3, 0xa9, 
       0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
       0x5, 0xa9, 0x845, 0xa, 0xa9, 0x3, 0xaa, 0x5, 0xaa, 0x848, 0xa, 0xaa, 
       0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x84d, 0xa, 0xaa, 0x3, 
       0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x851, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 
       0x3, 0xaa, 0x5, 0xaa, 0x856, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 
       0xaa, 0x85a, 0xa, 0xaa, 0x5, 0xaa, 0x85c, 0xa, 0xaa, 0x3, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x7, 
       0xac, 0x865, 0xa, 0xac, 0xc, 0xac, 0xe, 0xac, 0x868, 0xb, 0xac, 0x3, 
       0xac, 0x5, 0xac, 0x86b, 0xa, 0xac, 0x5, 0xac, 0x86d, 0xa, 0xac, 0x3, 
       0xac, 0x3, 0xac, 0x3, 0xad, 0x5, 0xad, 0x872, 0xa, 0xad, 0x3, 0xad, 
       0x3, 0xad, 0x3, 0xad, 0x5, 0xad, 0x877, 0xa, 0xad, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x87e, 0xa, 0xae, 
       0x3, 0xae, 0x3, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x884, 0xa, 
       0xaf, 0x3, 0xb0, 0x6, 0xb0, 0x887, 0xa, 0xb0, 0xd, 0xb0, 0xe, 0xb0, 
       0x888, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x88f, 
       0xa, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x893, 0xa, 0xb1, 0x3, 
       0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x899, 0xa, 0xb2, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x7, 0xb3, 0x89e, 0xa, 0xb3, 0xc, 
       0xb3, 0xe, 0xb3, 0x8a1, 0xb, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x7, 0xb4, 0x8a8, 0xa, 0xb4, 0xc, 0xb4, 0xe, 
       0xb4, 0x8ab, 0xb, 0xb4, 0x5, 0xb4, 0x8ad, 0xa, 0xb4, 0x3, 0xb4, 0x5, 
       0xb4, 0x8b0, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x5, 0xb5, 
       0x8b5, 0xa, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x5, 
       0xb6, 0x8bb, 0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x7, 0xb6, 0x8bf, 0xa, 
       0xb6, 0xc, 0xb6, 0xe, 0xb6, 0x8c2, 0xb, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 
       0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x8c8, 0xa, 0xb6, 0x3, 0xb7, 0x3, 
       0xb7, 0x3, 0xb7, 0x7, 0xb7, 0x8cd, 0xa, 0xb7, 0xc, 0xb7, 0xe, 0xb7, 
       0x8d0, 0xb, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb9, 0x5, 0xb9, 0x8d7, 0xa, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 
       0x8db, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 
       0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8ea, 0xa, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x5, 0xbb, 0x8ee, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x8f5, 0xa, 0xbb, 0xc, 0xbb, 
       0xe, 0xbb, 0x8f8, 0xb, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8fb, 0xa, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8ff, 0xa, 0xbb, 0x3, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbf, 0x3, 
       0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
       0xbf, 0x5, 0xbf, 0x915, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc1, 
       0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x5, 0xc3, 0x920, 0xa, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x923, 0xa, 0xc3, 
       0x3, 0xc3, 0x5, 0xc3, 0x926, 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 
       0xc3, 0x92a, 0xa, 0xc3, 0x3, 0xc4, 0x5, 0xc4, 0x92d, 0xa, 0xc4, 0x3, 
       0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x932, 0xa, 0xc4, 0x3, 0xc4, 
       0x5, 0xc4, 0x935, 0xa, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x938, 0xa, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x93c, 0xa, 0xc4, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x941, 0xa, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 
       0x944, 0xa, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x947, 0xa, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x5, 0xc5, 0x94b, 0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x5, 0xc6, 0x950, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 
       0x954, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 
       0xc7, 0x95a, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x95e, 0xa, 
       0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x962, 0xa, 0xc7, 0x3, 0xc7, 
       0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x970, 0xa, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x5, 0xca, 0x97d, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x5, 0xca, 0x983, 0xa, 0xca, 0x3, 0xcb, 0x3, 0xcb, 0x3, 
       0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x996, 0xa, 0xcc, 0x3, 0xcd, 
       0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xce, 
       0x3, 0xce, 0x3, 0xce, 0x5, 0xce, 0x9a1, 0xa, 0xce, 0x3, 0xce, 0x3, 
       0xce, 0x5, 0xce, 0x9a5, 0xa, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xcf, 
       0x3, 0xcf, 0x5, 0xcf, 0x9ab, 0xa, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 
       0xcf, 0x9af, 0xa, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 0xcf, 0x9b3, 0xa, 
       0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 
       0xcf, 0x9ba, 0xa, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 
       0x3, 0xd0, 0x5, 0xd0, 0x9c1, 0xa, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0x9c4, 
       0xa, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x7, 0xd0, 0x9c8, 0xa, 0xd0, 0xc, 
       0xd0, 0xe, 0xd0, 0x9cb, 0xb, 0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 
       0x3, 0xd1, 0x5, 0xd1, 0x9d1, 0xa, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 
       0xd1, 0x5, 0xd1, 0x9d6, 0xa, 0xd1, 0x3, 0xd1, 0x5, 0xd1, 0x9d9, 0xa, 
       0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 
       0xd1, 0x5, 0xd1, 0x9e1, 0xa, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 
       0x3, 0xd2, 0x5, 0xd2, 0x9e7, 0xa, 0xd2, 0x3, 0xd3, 0x3, 0xd3, 0x5, 
       0xd3, 0x9eb, 0xa, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 
       0x5, 0xd4, 0x9f1, 0xa, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x5, 0xd4, 0x9f5, 
       0xa, 0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x3, 0xd5, 0x2, 0x2, 0xd6, 0x2, 
       0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
       0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
       0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
       0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
       0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
       0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
       0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 
       0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 
       0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 
       0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 
       0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 
       0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 
       0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 
       0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 
       0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 
       0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 
       0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 
       0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 
       0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 
       0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 0x1a8, 0x2, 
       0x16, 0x3, 0x2, 0x6d, 0x74, 0x3, 0x2, 0x75, 0x76, 0x5, 0x2, 0x2f, 
       0x2f, 0x3f, 0x3f, 0x47, 0x47, 0x3, 0x2, 0x97, 0x98, 0x4, 0x2, 0x8d, 
       0x8e, 0x99, 0x9a, 0x3, 0x2, 0x82, 0x83, 0x3, 0x2, 0x84, 0x86, 0x6, 
       0x2, 0x11, 0x11, 0x3b, 0x3b, 0x50, 0x50, 0x6d, 0x76, 0x4, 0x2, 0xd, 
       0xd, 0x1c, 0x1c, 0x4, 0x2, 0xe, 0xe, 0x5a, 0x5a, 0xe, 0x2, 0x9, 0x9, 
       0xe, 0xe, 0x23, 0x23, 0x31, 0x31, 0x39, 0x39, 0x40, 0x40, 0x42, 0x46, 
       0x4a, 0x4a, 0x4f, 0x4f, 0x5a, 0x5a, 0x5d, 0x5d, 0x5f, 0x5f, 0x4, 
       0x2, 0x22, 0x22, 0x2e, 0x2e, 0x4, 0x2, 0x10, 0x10, 0x53, 0x53, 0x4, 
       0x2, 0x84, 0x84, 0x8f, 0x8f, 0x4, 0x2, 0x2f, 0x2f, 0x3f, 0x3f, 0x4, 
       0x2, 0x24, 0x24, 0x55, 0x55, 0x3, 0x2, 0x6b, 0x6c, 0x15, 0x2, 0x9, 
       0x9, 0xc, 0xc, 0x10, 0x12, 0x14, 0x1b, 0x1d, 0x1f, 0x21, 0x28, 0x2b, 
       0x2b, 0x2d, 0x31, 0x33, 0x33, 0x36, 0x36, 0x38, 0x3b, 0x3d, 0x3d, 
       0x3f, 0x41, 0x43, 0x47, 0x49, 0x4a, 0x4d, 0x5b, 0x5d, 0x5f, 0x62, 
       0x62, 0x6d, 0x77, 0x3, 0x2, 0x46, 0x47, 0x14, 0x2, 0xa, 0xb, 0xd, 
       0xf, 0x13, 0x13, 0x20, 0x20, 0x29, 0x2a, 0x2c, 0x2c, 0x32, 0x32, 
       0x34, 0x35, 0x37, 0x37, 0x3c, 0x3c, 0x3e, 0x3e, 0x42, 0x42, 0x48, 
       0x48, 0x4b, 0x4c, 0x59, 0x59, 0x5c, 0x5c, 0x60, 0x61, 0x63, 0x64, 
       0x2, 0xaf6, 0x2, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1b7, 0x3, 0x2, 
       0x2, 0x2, 0x6, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1d1, 0x3, 0x2, 0x2, 
       0x2, 0xa, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
       0xe, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1eb, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1f2, 0x3, 0x2, 0x2, 0x2, 
       0x1a, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x208, 0x3, 0x2, 0x2, 0x2, 
       0x1e, 0x217, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21c, 0x3, 0x2, 0x2, 0x2, 
       0x22, 0x226, 0x3, 0x2, 0x2, 0x2, 0x24, 0x233, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0x235, 0x3, 0x2, 0x2, 0x2, 0x28, 0x23d, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0x245, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x24d, 0x3, 0x2, 0x2, 0x2, 
       0x2e, 0x255, 0x3, 0x2, 0x2, 0x2, 0x30, 0x25d, 0x3, 0x2, 0x2, 0x2, 
       0x32, 0x265, 0x3, 0x2, 0x2, 0x2, 0x34, 0x26d, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x275, 0x3, 0x2, 0x2, 0x2, 0x38, 0x281, 0x3, 0x2, 0x2, 0x2, 
       0x3a, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x294, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2a8, 0x3, 0x2, 0x2, 0x2, 
       0x42, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2bf, 0x3, 0x2, 0x2, 0x2, 
       0x46, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x48, 0x2dd, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x380, 0x3, 0x2, 0x2, 0x2, 
       0x4e, 0x382, 0x3, 0x2, 0x2, 0x2, 0x50, 0x386, 0x3, 0x2, 0x2, 0x2, 
       0x52, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x39e, 0x3, 0x2, 0x2, 0x2, 
       0x56, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x58, 0x3a4, 0x3, 0x2, 0x2, 0x2, 
       0x5a, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x3b0, 0x3, 0x2, 0x2, 0x2, 
       0x5e, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x3c6, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x64, 0x3cf, 0x3, 0x2, 0x2, 0x2, 
       0x66, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x68, 0x3e4, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x3fa, 0x3, 0x2, 0x2, 0x2, 
       0x6e, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x70, 0x411, 0x3, 0x2, 0x2, 0x2, 
       0x72, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x74, 0x42b, 0x3, 0x2, 0x2, 0x2, 
       0x76, 0x436, 0x3, 0x2, 0x2, 0x2, 0x78, 0x43b, 0x3, 0x2, 0x2, 0x2, 
       0x7a, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x44e, 0x3, 0x2, 0x2, 0x2, 
       0x7e, 0x457, 0x3, 0x2, 0x2, 0x2, 0x80, 0x45c, 0x3, 0x2, 0x2, 0x2, 
       0x82, 0x466, 0x3, 0x2, 0x2, 0x2, 0x84, 0x468, 0x3, 0x2, 0x2, 0x2, 
       0x86, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x476, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0x482, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x484, 0x3, 0x2, 0x2, 0x2, 
       0x8e, 0x489, 0x3, 0x2, 0x2, 0x2, 0x90, 0x48c, 0x3, 0x2, 0x2, 0x2, 
       0x92, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x94, 0x4a4, 0x3, 0x2, 0x2, 0x2, 
       0x96, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x98, 0x4b1, 0x3, 0x2, 0x2, 0x2, 
       0x9a, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x4c1, 0x3, 0x2, 0x2, 0x2, 
       0x9e, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x4c7, 0x3, 0x2, 0x2, 0x2, 
       0xa2, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 
       0xa6, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x4eb, 0x3, 0x2, 0x2, 0x2, 
       0xaa, 0x56f, 0x3, 0x2, 0x2, 0x2, 0xac, 0x571, 0x3, 0x2, 0x2, 0x2, 
       0xae, 0x58a, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x58e, 0x3, 0x2, 0x2, 0x2, 
       0xb2, 0x590, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x59b, 0x3, 0x2, 0x2, 0x2, 
       0xb6, 0x59d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x5a3, 0x3, 0x2, 0x2, 0x2, 
       0xba, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x5b5, 0x3, 0x2, 0x2, 0x2, 
       0xbe, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x5bb, 0x3, 0x2, 0x2, 0x2, 
       0xc2, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x5ca, 0x3, 0x2, 0x2, 0x2, 
       0xc6, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x5df, 0x3, 0x2, 0x2, 0x2, 
       0xca, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5f1, 0x3, 0x2, 0x2, 0x2, 
       0xce, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x5fb, 0x3, 0x2, 0x2, 0x2, 
       0xd2, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x603, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0x60b, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x614, 0x3, 0x2, 0x2, 0x2, 
       0xda, 0x61a, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x628, 0x3, 0x2, 0x2, 0x2, 
       0xde, 0x62b, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x631, 0x3, 0x2, 0x2, 0x2, 
       0xe2, 0x634, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x640, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0x646, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x652, 0x3, 0x2, 0x2, 0x2, 
       0xea, 0x656, 0x3, 0x2, 0x2, 0x2, 0xec, 0x65f, 0x3, 0x2, 0x2, 0x2, 
       0xee, 0x668, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x66c, 0x3, 0x2, 0x2, 0x2, 
       0xf2, 0x67b, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x684, 0x3, 0x2, 0x2, 0x2, 
       0xf6, 0x686, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x68e, 0x3, 0x2, 0x2, 0x2, 
       0xfa, 0x692, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x699, 0x3, 0x2, 0x2, 0x2, 
       0xfe, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x100, 0x6a8, 0x3, 0x2, 0x2, 0x2, 
       0x102, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x104, 0x6c1, 0x3, 0x2, 0x2, 0x2, 
       0x106, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x108, 0x6d6, 0x3, 0x2, 0x2, 0x2, 
       0x10a, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x6e2, 0x3, 0x2, 0x2, 0x2, 
       0x10e, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x110, 0x6f1, 0x3, 0x2, 0x2, 0x2, 
       0x112, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x114, 0x6f7, 0x3, 0x2, 0x2, 0x2, 
       0x116, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x118, 0x703, 0x3, 0x2, 0x2, 0x2, 
       0x11a, 0x705, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x70e, 0x3, 0x2, 0x2, 0x2, 
       0x11e, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x720, 0x3, 0x2, 0x2, 0x2, 
       0x122, 0x727, 0x3, 0x2, 0x2, 0x2, 0x124, 0x739, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x742, 0x3, 0x2, 0x2, 0x2, 0x128, 0x751, 0x3, 0x2, 0x2, 0x2, 
       0x12a, 0x755, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x758, 0x3, 0x2, 0x2, 0x2, 
       0x12e, 0x765, 0x3, 0x2, 0x2, 0x2, 0x130, 0x76b, 0x3, 0x2, 0x2, 0x2, 
       0x132, 0x786, 0x3, 0x2, 0x2, 0x2, 0x134, 0x788, 0x3, 0x2, 0x2, 0x2, 
       0x136, 0x78f, 0x3, 0x2, 0x2, 0x2, 0x138, 0x799, 0x3, 0x2, 0x2, 0x2, 
       0x13a, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x79e, 0x3, 0x2, 0x2, 0x2, 
       0x13e, 0x7a8, 0x3, 0x2, 0x2, 0x2, 0x140, 0x7b9, 0x3, 0x2, 0x2, 0x2, 
       0x142, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x144, 0x7ce, 0x3, 0x2, 0x2, 0x2, 
       0x146, 0x7de, 0x3, 0x2, 0x2, 0x2, 0x148, 0x7ea, 0x3, 0x2, 0x2, 0x2, 
       0x14a, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x7f3, 0x3, 0x2, 0x2, 0x2, 
       0x14e, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x150, 0x800, 0x3, 0x2, 0x2, 0x2, 
       0x152, 0x847, 0x3, 0x2, 0x2, 0x2, 0x154, 0x85d, 0x3, 0x2, 0x2, 0x2, 
       0x156, 0x860, 0x3, 0x2, 0x2, 0x2, 0x158, 0x871, 0x3, 0x2, 0x2, 0x2, 
       0x15a, 0x878, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x883, 0x3, 0x2, 0x2, 0x2, 
       0x15e, 0x886, 0x3, 0x2, 0x2, 0x2, 0x160, 0x88a, 0x3, 0x2, 0x2, 0x2, 
       0x162, 0x898, 0x3, 0x2, 0x2, 0x2, 0x164, 0x89a, 0x3, 0x2, 0x2, 0x2, 
       0x166, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x168, 0x8b4, 0x3, 0x2, 0x2, 0x2, 
       0x16a, 0x8c7, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x8c9, 0x3, 0x2, 0x2, 0x2, 
       0x16e, 0x8d1, 0x3, 0x2, 0x2, 0x2, 0x170, 0x8da, 0x3, 0x2, 0x2, 0x2, 
       0x172, 0x8dc, 0x3, 0x2, 0x2, 0x2, 0x174, 0x8fe, 0x3, 0x2, 0x2, 0x2, 
       0x176, 0x900, 0x3, 0x2, 0x2, 0x2, 0x178, 0x904, 0x3, 0x2, 0x2, 0x2, 
       0x17a, 0x908, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x914, 0x3, 0x2, 0x2, 0x2, 
       0x17e, 0x916, 0x3, 0x2, 0x2, 0x2, 0x180, 0x918, 0x3, 0x2, 0x2, 0x2, 
       0x182, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x184, 0x91c, 0x3, 0x2, 0x2, 0x2, 
       0x186, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x188, 0x93d, 0x3, 0x2, 0x2, 0x2, 
       0x18a, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x955, 0x3, 0x2, 0x2, 0x2, 
       0x18e, 0x965, 0x3, 0x2, 0x2, 0x2, 0x190, 0x971, 0x3, 0x2, 0x2, 0x2, 
       0x192, 0x974, 0x3, 0x2, 0x2, 0x2, 0x194, 0x984, 0x3, 0x2, 0x2, 0x2, 
       0x196, 0x989, 0x3, 0x2, 0x2, 0x2, 0x198, 0x997, 0x3, 0x2, 0x2, 0x2, 
       0x19a, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x9a8, 0x3, 0x2, 0x2, 0x2, 
       0x19e, 0x9c0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x9cc, 0x3, 0x2, 0x2, 0x2, 
       0x1a2, 0x9e2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x9e8, 0x3, 0x2, 0x2, 0x2, 
       0x1a6, 0x9ee, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x9f6, 0x3, 0x2, 0x2, 0x2, 
       0x1aa, 0x1ac, 0x5, 0xda, 0x6e, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 
       0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ae, 0x3, 0x2, 0x2, 
       0x2, 0x1ad, 0x1af, 0x5, 0xde, 0x70, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 
       0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x2, 0x2, 0x3, 0x1b1, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x1b2, 0x1b4, 0x5, 0x1a8, 0xd5, 0x2, 0x1b3, 0x1b5, 0x5, 
       0x18, 0xd, 0x2, 0x1b4, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 
       0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x5, 
       0xe4, 0x73, 0x2, 0x1b7, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 
       0x7, 0x7e, 0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x1a8, 0xd5, 0x2, 0x1bb, 
       0x1bd, 0x5, 0x18, 0xd, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
       0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1be, 
       0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
       0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
       0x1c9, 0x5, 0x8, 0x5, 0x2, 0x1c4, 0x1c8, 0x7, 0x8f, 0x2, 0x2, 0x1c5, 
       0x1c8, 0x5, 0x142, 0xa2, 0x2, 0x1c6, 0x1c8, 0x7, 0x84, 0x2, 0x2, 
       0x1c7, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
       0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
       0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
       0x1ca, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
       0x1cc, 0x1d2, 0x5, 0xe, 0x8, 0x2, 0x1cd, 0x1d2, 0x5, 0x16, 0xc, 0x2, 
       0x1ce, 0x1cf, 0x7, 0x5e, 0x2, 0x2, 0x1cf, 0x1d2, 0x7, 0x84, 0x2, 
       0x2, 0x1d0, 0x1d2, 0x5, 0xa, 0x6, 0x2, 0x1d1, 0x1cc, 0x3, 0x2, 0x2, 
       0x2, 0x1d1, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1ce, 0x3, 0x2, 0x2, 
       0x2, 0x1d1, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x1d3, 0x1d4, 0x7, 0x7c, 0x2, 0x2, 0x1d4, 0x1d7, 0x5, 0xc, 0x7, 
       0x2, 0x1d5, 0x1d6, 0x7, 0x7f, 0x2, 0x2, 0x1d6, 0x1d8, 0x5, 0xc, 0x7, 
       0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 
       0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 
       0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x7d, 0x2, 
       0x2, 0x1dc, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1df, 0x5, 0x6, 0x4, 
       0x2, 0x1de, 0x1e0, 0x5, 0x1a8, 0xd5, 0x2, 0x1df, 0x1de, 0x3, 0x2, 
       0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x1e1, 0x1e4, 0x5, 0x10, 0x9, 0x2, 0x1e2, 0x1e4, 0x7, 0x11, 
       0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 
       0x2, 0x2, 0x1e4, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e8, 0x5, 0x12, 
       0xa, 0x2, 0x1e6, 0x1e8, 0x5, 0x14, 0xb, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 
       0x2, 0x2, 0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x1e9, 0x1ea, 0x9, 0x2, 0x2, 0x2, 0x1ea, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x1eb, 0x1ec, 0x9, 0x3, 0x2, 0x2, 0x1ec, 0x15, 0x3, 0x2, 
       0x2, 0x2, 0x1ed, 0x1f1, 0x5, 0x4, 0x3, 0x2, 0x1ee, 0x1f1, 0x7, 0x3b, 
       0x2, 0x2, 0x1ef, 0x1f1, 0x7, 0x50, 0x2, 0x2, 0x1f0, 0x1ed, 0x3, 0x2, 
       0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ef, 0x3, 0x2, 
       0x2, 0x2, 0x1f1, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x8d, 
       0x2, 0x2, 0x1f3, 0x1f8, 0x5, 0x6, 0x4, 0x2, 0x1f4, 0x1f5, 0x7, 0x7f, 
       0x2, 0x2, 0x1f5, 0x1f7, 0x5, 0x6, 0x4, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 
       0x2, 0x2, 0x1f7, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 
       0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 0x3, 0x2, 
       0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x8e, 
       0x2, 0x2, 0x1fc, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x202, 0x5, 0x1c, 
       0xf, 0x2, 0x1fe, 0x1ff, 0x7, 0x7f, 0x2, 0x2, 0x1ff, 0x201, 0x5, 0x1c, 
       0xf, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x201, 0x204, 0x3, 0x2, 
       0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 
       0x2, 0x2, 0x203, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 
       0x2, 0x2, 0x205, 0x206, 0x5, 0x1a8, 0xd5, 0x2, 0x206, 0x207, 0x7, 
       0x80, 0x2, 0x2, 0x207, 0x209, 0x3, 0x2, 0x2, 0x2, 0x208, 0x205, 0x3, 
       0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20b, 0x3, 
       0x2, 0x2, 0x2, 0x20a, 0x20c, 0x9, 0x4, 0x2, 0x2, 0x20b, 0x20a, 0x3, 
       0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20f, 0x3, 
       0x2, 0x2, 0x2, 0x20d, 0x210, 0x7, 0x5c, 0x2, 0x2, 0x20e, 0x210, 0x5, 
       0x6, 0x4, 0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x20e, 0x3, 
       0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 
       0x2, 0x2, 0x2, 0x211, 0x212, 0x5, 0x1e, 0x10, 0x2, 0x212, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0x213, 0x218, 0x5, 0x22, 0x12, 0x2, 0x214, 0x218, 
       0x5, 0x20, 0x11, 0x2, 0x215, 0x216, 0x7, 0x47, 0x2, 0x2, 0x216, 0x218, 
       0x5, 0x20, 0x11, 0x2, 0x217, 0x213, 0x3, 0x2, 0x2, 0x2, 0x217, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x218, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x21d, 0x5, 0x78, 0x3d, 0x2, 0x21a, 0x21d, 
       0x5, 0x84, 0x43, 0x2, 0x21b, 0x21d, 0x5, 0x26, 0x14, 0x2, 0x21c, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 
       0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21e, 
       0x21f, 0x5, 0x46, 0x24, 0x2, 0x21f, 0x220, 0x5, 0x24, 0x13, 0x2, 
       0x220, 0x221, 0x5, 0x1e, 0x10, 0x2, 0x221, 0x227, 0x3, 0x2, 0x2, 
       0x2, 0x222, 0x223, 0x5, 0x46, 0x24, 0x2, 0x223, 0x224, 0x7, 0xa5, 
       0x2, 0x2, 0x224, 0x225, 0x5, 0x4c, 0x27, 0x2, 0x225, 0x227, 0x3, 
       0x2, 0x2, 0x2, 0x226, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x226, 0x222, 0x3, 
       0x2, 0x2, 0x2, 0x227, 0x23, 0x3, 0x2, 0x2, 0x2, 0x228, 0x234, 0x7, 
       0x8c, 0x2, 0x2, 0x229, 0x234, 0x7, 0x9b, 0x2, 0x2, 0x22a, 0x234, 
       0x7, 0x9c, 0x2, 0x2, 0x22b, 0x234, 0x7, 0x9d, 0x2, 0x2, 0x22c, 0x234, 
       0x7, 0x9e, 0x2, 0x2, 0x22d, 0x234, 0x7, 0x9f, 0x2, 0x2, 0x22e, 0x234, 
       0x7, 0xa0, 0x2, 0x2, 0x22f, 0x234, 0x7, 0xa1, 0x2, 0x2, 0x230, 0x234, 
       0x7, 0xa2, 0x2, 0x2, 0x231, 0x234, 0x7, 0xa4, 0x2, 0x2, 0x232, 0x234, 
       0x5, 0x17a, 0xbe, 0x2, 0x233, 0x228, 0x3, 0x2, 0x2, 0x2, 0x233, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x233, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x233, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x233, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x23b, 0x5, 0x28, 0x15, 0x2, 0x236, 0x237, 
       0x7, 0x8f, 0x2, 0x2, 0x237, 0x238, 0x5, 0x4c, 0x27, 0x2, 0x238, 0x239, 
       0x7, 0x80, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x4c, 0x27, 0x2, 0x23a, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0x236, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x243, 
       0x5, 0x2a, 0x16, 0x2, 0x23e, 0x241, 0x7, 0x91, 0x2, 0x2, 0x23f, 0x242, 
       0x5, 0x28, 0x15, 0x2, 0x240, 0x242, 0x5, 0x4e, 0x28, 0x2, 0x241, 
       0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 
       0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x243, 
       0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x29, 0x3, 0x2, 0x2, 0x2, 0x245, 
       0x24a, 0x5, 0x2c, 0x17, 0x2, 0x246, 0x247, 0x7, 0x95, 0x2, 0x2, 0x247, 
       0x249, 0x5, 0x2c, 0x17, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x249, 
       0x24c, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x24a, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x252, 0x5, 0x2e, 0x18, 0x2, 0x24e, 
       0x24f, 0x7, 0x94, 0x2, 0x2, 0x24f, 0x251, 0x5, 0x2e, 0x18, 0x2, 0x250, 
       0x24e, 0x3, 0x2, 0x2, 0x2, 0x251, 0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 
       0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 
       0x25a, 0x5, 0x30, 0x19, 0x2, 0x256, 0x257, 0x7, 0x88, 0x2, 0x2, 0x257, 
       0x259, 0x5, 0x30, 0x19, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 
       0x25c, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x25a, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x262, 0x5, 0x32, 0x1a, 0x2, 0x25e, 
       0x25f, 0x7, 0x89, 0x2, 0x2, 0x25f, 0x261, 0x5, 0x32, 0x1a, 0x2, 0x260, 
       0x25e, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x26a, 0x5, 0x34, 0x1b, 0x2, 0x266, 0x267, 0x7, 0x87, 0x2, 0x2, 0x267, 
       0x269, 0x5, 0x34, 0x1b, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x269, 
       0x26c, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26a, 
       0x26b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x26c, 
       0x26a, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x272, 0x5, 0x36, 0x1c, 0x2, 0x26e, 
       0x26f, 0x9, 0x5, 0x2, 0x2, 0x26f, 0x271, 0x5, 0x36, 0x1c, 0x2, 0x270, 
       0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 0x274, 0x3, 0x2, 0x2, 0x2, 0x272, 
       0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x275, 
       0x27e, 0x5, 0x38, 0x1d, 0x2, 0x276, 0x277, 0x9, 0x6, 0x2, 0x2, 0x277, 
       0x27d, 0x5, 0x38, 0x1d, 0x2, 0x278, 0x279, 0x7, 0x33, 0x2, 0x2, 0x279, 
       0x27d, 0x5, 0x72, 0x3a, 0x2, 0x27a, 0x27b, 0x7, 0xc, 0x2, 0x2, 0x27b, 
       0x27d, 0x5, 0x6, 0x4, 0x2, 0x27c, 0x276, 0x3, 0x2, 0x2, 0x2, 0x27c, 
       0x278, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27d, 
       0x280, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x289, 0x5, 0x3a, 0x1e, 0x2, 0x282, 
       0x285, 0x7, 0xa3, 0x2, 0x2, 0x283, 0x285, 0x5, 0x178, 0xbd, 0x2, 
       0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x283, 0x3, 0x2, 0x2, 0x2, 
       0x285, 0x286, 0x3, 0x2, 0x2, 0x2, 0x286, 0x288, 0x5, 0x3a, 0x1e, 
       0x2, 0x287, 0x284, 0x3, 0x2, 0x2, 0x2, 0x288, 0x28b, 0x3, 0x2, 0x2, 
       0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 
       0x2, 0x28a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 0x2, 
       0x2, 0x28c, 0x291, 0x5, 0x3c, 0x1f, 0x2, 0x28d, 0x28e, 0x9, 0x7, 
       0x2, 0x2, 0x28e, 0x290, 0x5, 0x3c, 0x1f, 0x2, 0x28f, 0x28d, 0x3, 
       0x2, 0x2, 0x2, 0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 0x291, 0x28f, 0x3, 
       0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0x3b, 0x3, 
       0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x294, 0x299, 0x5, 
       0x3e, 0x20, 0x2, 0x295, 0x296, 0x9, 0x8, 0x2, 0x2, 0x296, 0x298, 
       0x5, 0x3e, 0x20, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29b, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x29c, 0x2a6, 0x5, 0x44, 0x23, 0x2, 0x29d, 0x29e, 
       0x7, 0x52, 0x2, 0x2, 0x29e, 0x2a3, 0x7, 0x78, 0x2, 0x2, 0x29f, 0x2a1, 
       0x5, 0x40, 0x21, 0x2, 0x2a0, 0x2a2, 0x7, 0x7f, 0x2, 0x2, 0x2a1, 0x2a0, 
       0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x2a3, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a7, 
       0x7, 0x79, 0x2, 0x2, 0x2a6, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 
       0x3, 0x2, 0x2, 0x2, 0x2a7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2ad, 
       0x5, 0x42, 0x22, 0x2, 0x2a9, 0x2aa, 0x7, 0x7f, 0x2, 0x2, 0x2aa, 0x2ac, 
       0x5, 0x42, 0x22, 0x2, 0x2ab, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2af, 
       0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 
       0x3, 0x2, 0x2, 0x2, 0x2ae, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ad, 
       0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b2, 0x5, 0x1e, 0x10, 0x2, 0x2b1, 0x2b3, 
       0x5, 0xbe, 0x60, 0x2, 0x2b2, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 
       0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b5, 
       0x5, 0x176, 0xbc, 0x2, 0x2b5, 0x2b6, 0x5, 0x4c, 0x27, 0x2, 0x2b6, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2c0, 0x5, 0x46, 0x24, 0x2, 0x2b8, 
       0x2ba, 0x5, 0x46, 0x24, 0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
       0x2bd, 0x7, 0xa6, 0x2, 0x2, 0x2bc, 0x2be, 0x5, 0x46, 0x24, 0x2, 0x2bd, 
       0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2be, 
       0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2bf, 
       0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x45, 0x3, 0x2, 0x2, 0x2, 0x2c1, 
       0x2dc, 0x5, 0x48, 0x25, 0x2, 0x2c2, 0x2c3, 0x7, 0x82, 0x2, 0x2, 0x2c3, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2c4, 0x2c5, 0x7, 0x83, 0x2, 0x2, 0x2c5, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2c6, 0x2c7, 0x7, 0x8a, 0x2, 0x2, 0x2c7, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2c8, 0x2c9, 0x7, 0x8b, 0x2, 0x2, 0x2c9, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2ca, 0x2cb, 0x7, 0x92, 0x2, 0x2, 0x2cb, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2cc, 0x2cd, 0x7, 0x93, 0x2, 0x2, 0x2cd, 
       0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2ce, 0x2cf, 0x7, 0x7c, 0x2, 0x2, 0x2cf, 
       0x2d0, 0x5, 0x6, 0x4, 0x2, 0x2d0, 0x2d1, 0x7, 0x7d, 0x2, 0x2, 0x2d1, 
       0x2d2, 0x5, 0x46, 0x24, 0x2, 0x2d2, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
       0x2d4, 0x7, 0xf, 0x2, 0x2, 0x2d4, 0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2d5, 
       0x2d6, 0x7, 0x87, 0x2, 0x2, 0x2d6, 0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2d7, 
       0x2d8, 0x7, 0x84, 0x2, 0x2, 0x2d8, 0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2d9, 
       0x2da, 0x7, 0x89, 0x2, 0x2, 0x2da, 0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2db, 
       0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2df, 0x5, 0x4a, 0x26, 0x2, 0x2de, 
       0x2e0, 0x7, 0x8a, 0x2, 0x2, 0x2df, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2df, 
       0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e1, 
       0x2e3, 0x5, 0x52, 0x2a, 0x2, 0x2e2, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 
       0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
       0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e9, 0x7, 0x8a, 0x2, 0x2, 0x2e8, 
       0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 
       0x300, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2f1, 0x5, 0x50, 0x29, 0x2, 0x2eb, 
       0x2f1, 0x5, 0x1a4, 0xd3, 0x2, 0x2ec, 0x2f1, 0x7, 0x92, 0x2, 0x2, 
       0x2ed, 0x2f1, 0x7, 0x93, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x96, 0x2, 
       0x2, 0x2ef, 0x2f1, 0x5, 0x1a8, 0xd5, 0x2, 0x2f0, 0x2ea, 0x3, 0x2, 
       0x2, 0x2, 0x2f0, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ec, 0x3, 0x2, 
       0x2, 0x2, 0x2f0, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 
       0x2, 0x2, 0x2f1, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f4, 0x7, 0x8a, 
       0x2, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x3, 0x2, 
       0x2, 0x2, 0x2f4, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f7, 0x5, 0x52, 
       0x2a, 0x2, 0x2f6, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2fa, 0x3, 0x2, 
       0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 
       0x2, 0x2, 0x2f9, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 
       0x2, 0x2, 0x2fb, 0x2fd, 0x7, 0x8a, 0x2, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 
       0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2ff, 0x3, 0x2, 
       0x2, 0x2, 0x2fe, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x302, 0x3, 0x2, 
       0x2, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 0x2, 
       0x2, 0x2, 0x301, 0x49, 0x3, 0x2, 0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 
       0x2, 0x2, 0x303, 0x37d, 0x5, 0x17c, 0xbf, 0x2, 0x304, 0x306, 0x5, 
       0x1a8, 0xd5, 0x2, 0x305, 0x307, 0x5, 0x18, 0xd, 0x2, 0x306, 0x305, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 0x3, 0x2, 0x2, 0x2, 0x307, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x7, 0x7c, 0x2, 0x2, 0x309, 0x30a, 
       0x5, 0x1e, 0x10, 0x2, 0x30a, 0x30b, 0x7, 0x7d, 0x2, 0x2, 0x30b, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x37d, 0x5, 0x56, 0x2c, 0x2, 0x30d, 0x37d, 
       0x5, 0xe4, 0x73, 0x2, 0x30e, 0x37d, 0x7, 0x65, 0x2, 0x2, 0x30f, 0x37d, 
       0x7, 0x53, 0x2, 0x2, 0x310, 0x31a, 0x7, 0x10, 0x2, 0x2, 0x311, 0x312, 
       0x7, 0x7e, 0x2, 0x2, 0x312, 0x314, 0x5, 0x1a8, 0xd5, 0x2, 0x313, 
       0x315, 0x5, 0x18, 0xd, 0x2, 0x314, 0x313, 0x3, 0x2, 0x2, 0x2, 0x314, 
       0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x316, 
       0x317, 0x7, 0x7a, 0x2, 0x2, 0x317, 0x318, 0x5, 0x58, 0x2d, 0x2, 0x318, 
       0x319, 0x7, 0x7b, 0x2, 0x2, 0x319, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x311, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x316, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x37d, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x339, 0x7, 0x39, 0x2, 0x2, 0x31d, 
       0x333, 0x5, 0x6, 0x4, 0x2, 0x31e, 0x334, 0x5, 0x1a6, 0xd4, 0x2, 0x31f, 
       0x334, 0x5, 0x5a, 0x2e, 0x2, 0x320, 0x321, 0x7, 0x7a, 0x2, 0x2, 0x321, 
       0x322, 0x5, 0x58, 0x2d, 0x2, 0x322, 0x326, 0x7, 0x7b, 0x2, 0x2, 0x323, 
       0x325, 0x5, 0x142, 0xa2, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 0x3, 0x2, 0x2, 0x2, 0x326, 
       0x327, 0x3, 0x2, 0x2, 0x2, 0x327, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x328, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32b, 0x5, 0x144, 0xa3, 0x2, 0x32a, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32b, 
       0x334, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32e, 0x5, 0x142, 0xa2, 0x2, 0x32d, 
       0x32c, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32f, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 0x5, 0x144, 0xa3, 0x2, 0x332, 
       0x334, 0x3, 0x2, 0x2, 0x2, 0x333, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x333, 
       0x31f, 0x3, 0x2, 0x2, 0x2, 0x333, 0x320, 0x3, 0x2, 0x2, 0x2, 0x333, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x334, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x33a, 0x5, 0x68, 0x35, 0x2, 0x336, 0x337, 0x5, 0x142, 0xa2, 0x2, 
       0x337, 0x338, 0x5, 0x144, 0xa3, 0x2, 0x338, 0x33a, 0x3, 0x2, 0x2, 
       0x2, 0x339, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x339, 0x335, 0x3, 0x2, 0x2, 
       0x2, 0x339, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x37d, 0x3, 0x2, 0x2, 
       0x2, 0x33b, 0x33c, 0x7, 0x7c, 0x2, 0x2, 0x33c, 0x33f, 0x5, 0x1c, 
       0xf, 0x2, 0x33d, 0x33e, 0x7, 0x7f, 0x2, 0x2, 0x33e, 0x340, 0x5, 0x1c, 
       0xf, 0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 
       0x2, 0x2, 0x341, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x3, 0x2, 
       0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x7, 0x7d, 
       0x2, 0x2, 0x344, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x7, 0x57, 
       0x2, 0x2, 0x346, 0x34a, 0x7, 0x7c, 0x2, 0x2, 0x347, 0x34b, 0x5, 0x6e, 
       0x38, 0x2, 0x348, 0x34b, 0x5, 0x6, 0x4, 0x2, 0x349, 0x34b, 0x7, 0x5e, 
       0x2, 0x2, 0x34a, 0x347, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x348, 0x3, 0x2, 
       0x2, 0x2, 0x34a, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 
       0x2, 0x2, 0x34c, 0x37d, 0x7, 0x7d, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x16, 
       0x2, 0x2, 0x34e, 0x34f, 0x7, 0x7c, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x1e, 
       0x10, 0x2, 0x350, 0x351, 0x7, 0x7d, 0x2, 0x2, 0x351, 0x37d, 0x3, 
       0x2, 0x2, 0x2, 0x352, 0x353, 0x7, 0x58, 0x2, 0x2, 0x353, 0x354, 0x7, 
       0x7c, 0x2, 0x2, 0x354, 0x355, 0x5, 0x1e, 0x10, 0x2, 0x355, 0x356, 
       0x7, 0x7d, 0x2, 0x2, 0x356, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x357, 0x35c, 
       0x7, 0x1a, 0x2, 0x2, 0x358, 0x359, 0x7, 0x7c, 0x2, 0x2, 0x359, 0x35a, 
       0x5, 0x6, 0x4, 0x2, 0x35a, 0x35b, 0x7, 0x7d, 0x2, 0x2, 0x35b, 0x35d, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 
       0x3, 0x2, 0x2, 0x2, 0x35d, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x360, 
       0x7, 0xe, 0x2, 0x2, 0x35f, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 0x367, 
       0x7, 0x1b, 0x2, 0x2, 0x362, 0x364, 0x7, 0x7c, 0x2, 0x2, 0x363, 0x365, 
       0x5, 0x7c, 0x3f, 0x2, 0x364, 0x363, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 
       0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 0x2, 0x2, 0x2, 0x366, 0x368, 
       0x7, 0x7d, 0x2, 0x2, 0x367, 0x362, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 
       0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 0x369, 0x37d, 
       0x5, 0xac, 0x57, 0x2, 0x36a, 0x36b, 0x7, 0x4d, 0x2, 0x2, 0x36b, 0x36c, 
       0x7, 0x7c, 0x2, 0x2, 0x36c, 0x36d, 0x5, 0x6, 0x4, 0x2, 0x36d, 0x36e, 
       0x7, 0x7d, 0x2, 0x2, 0x36e, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 
       0x7, 0x37, 0x2, 0x2, 0x370, 0x376, 0x7, 0x7c, 0x2, 0x2, 0x371, 0x372, 
       0x5, 0x1a8, 0xd5, 0x2, 0x372, 0x373, 0x7, 0x7e, 0x2, 0x2, 0x373, 
       0x375, 0x3, 0x2, 0x2, 0x2, 0x374, 0x371, 0x3, 0x2, 0x2, 0x2, 0x375, 
       0x378, 0x3, 0x2, 0x2, 0x2, 0x376, 0x374, 0x3, 0x2, 0x2, 0x2, 0x376, 
       0x377, 0x3, 0x2, 0x2, 0x2, 0x377, 0x379, 0x3, 0x2, 0x2, 0x2, 0x378, 
       0x376, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x5, 0x1a8, 0xd5, 0x2, 0x37a, 
       0x37b, 0x7, 0x7d, 0x2, 0x2, 0x37b, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x303, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x304, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x308, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x30d, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x310, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x31c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x345, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x352, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x357, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x35f, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x36f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x37e, 
       0x381, 0x5, 0x1e, 0x10, 0x2, 0x37f, 0x381, 0x5, 0x4e, 0x28, 0x2, 
       0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x37f, 0x3, 0x2, 0x2, 0x2, 
       0x381, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 0x7, 0x54, 0x2, 0x2, 
       0x383, 0x384, 0x5, 0x1e, 0x10, 0x2, 0x384, 0x4f, 0x3, 0x2, 0x2, 0x2, 
       0x385, 0x387, 0x7, 0x8f, 0x2, 0x2, 0x386, 0x385, 0x3, 0x2, 0x2, 0x2, 
       0x386, 0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 
       0x388, 0x389, 0x7, 0x7e, 0x2, 0x2, 0x389, 0x38b, 0x5, 0x1a8, 0xd5, 
       0x2, 0x38a, 0x38c, 0x5, 0x18, 0xd, 0x2, 0x38b, 0x38a, 0x3, 0x2, 0x2, 
       0x2, 0x38b, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x51, 0x3, 0x2, 0x2, 
       0x2, 0x38d, 0x38f, 0x7, 0x8f, 0x2, 0x2, 0x38e, 0x38d, 0x3, 0x2, 0x2, 
       0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x3, 0x2, 0x2, 
       0x2, 0x390, 0x391, 0x7, 0x7a, 0x2, 0x2, 0x391, 0x396, 0x5, 0x54, 
       0x2b, 0x2, 0x392, 0x393, 0x7, 0x7f, 0x2, 0x2, 0x393, 0x395, 0x5, 
       0x54, 0x2b, 0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x395, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 
       0x3, 0x2, 0x2, 0x2, 0x397, 0x399, 0x3, 0x2, 0x2, 0x2, 0x398, 0x396, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x7b, 0x2, 0x2, 0x39a, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x5, 0x1a8, 0xd5, 0x2, 0x39c, 0x39d, 
       0x7, 0x80, 0x2, 0x2, 0x39d, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39b, 
       0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x5, 0x1e, 0x10, 0x2, 0x3a1, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x9, 0x9, 0x2, 0x2, 0x3a3, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a9, 0x5, 0x1e, 0x10, 0x2, 0x3a5, 0x3a6, 
       0x7, 0x7f, 0x2, 0x2, 0x3a6, 0x3a8, 0x5, 0x1e, 0x10, 0x2, 0x3a7, 0x3a5, 
       0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a7, 
       0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3af, 
       0x5, 0x5c, 0x2f, 0x2, 0x3ad, 0x3af, 0x5, 0x64, 0x33, 0x2, 0x3ae, 
       0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3af, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b5, 0x7, 0x78, 0x2, 0x2, 0x3b1, 
       0x3b3, 0x5, 0x5e, 0x30, 0x2, 0x3b2, 0x3b4, 0x7, 0x7f, 0x2, 0x2, 0x3b3, 
       0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b4, 
       0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
       0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3b8, 0x7, 0x79, 0x2, 0x2, 0x3b8, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3be, 0x5, 0x60, 0x31, 0x2, 0x3ba, 0x3bb, 0x7, 0x7f, 0x2, 0x2, 0x3bb, 
       0x3bd, 0x5, 0x60, 0x31, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bd, 
       0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3be, 
       0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3c0, 
       0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c7, 0x5, 0x1a8, 0xd5, 0x2, 0x3c2, 
       0x3c3, 0x7, 0x7a, 0x2, 0x2, 0x3c3, 0x3c4, 0x5, 0x1e, 0x10, 0x2, 0x3c4, 
       0x3c5, 0x7, 0x7b, 0x2, 0x2, 0x3c5, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
       0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c7, 
       0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 0x8c, 0x2, 0x2, 0x3c9, 
       0x3ca, 0x5, 0x62, 0x32, 0x2, 0x3ca, 0x61, 0x3, 0x2, 0x2, 0x2, 0x3cb, 
       0x3ce, 0x5, 0x1e, 0x10, 0x2, 0x3cc, 0x3ce, 0x5, 0x5a, 0x2e, 0x2, 
       0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 
       0x3ce, 0x63, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0x78, 0x2, 0x2, 
       0x3d0, 0x3d5, 0x5, 0x66, 0x34, 0x2, 0x3d1, 0x3d2, 0x7, 0x7f, 0x2, 
       0x2, 0x3d2, 0x3d4, 0x5, 0x66, 0x34, 0x2, 0x3d3, 0x3d1, 0x3, 0x2, 
       0x2, 0x2, 0x3d4, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d3, 0x3, 0x2, 
       0x2, 0x2, 0x3d5, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 0x3, 0x2, 
       0x2, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3da, 0x7, 0x7f, 
       0x2, 0x2, 0x3d9, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x3, 0x2, 
       0x2, 0x2, 0x3da, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x7, 0x79, 
       0x2, 0x2, 0x3dc, 0x65, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3e3, 0x5, 0x20, 
       0x11, 0x2, 0x3de, 0x3df, 0x7, 0x78, 0x2, 0x2, 0x3df, 0x3e0, 0x5, 
       0x58, 0x2d, 0x2, 0x3e0, 0x3e1, 0x7, 0x79, 0x2, 0x2, 0x3e1, 0x3e3, 
       0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3de, 
       0x3, 0x2, 0x2, 0x2, 0x3e3, 0x67, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e9, 
       0x7, 0x78, 0x2, 0x2, 0x3e5, 0x3e7, 0x5, 0x6a, 0x36, 0x2, 0x3e6, 0x3e8, 
       0x7, 0x7f, 0x2, 0x2, 0x3e7, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 
       0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3e5, 
       0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 
       0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x7, 0x79, 0x2, 0x2, 0x3ec, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3f2, 0x5, 0x6c, 0x37, 0x2, 0x3ee, 0x3ef, 
       0x7, 0x7f, 0x2, 0x2, 0x3ef, 0x3f1, 0x5, 0x6c, 0x37, 0x2, 0x3f0, 0x3ee, 
       0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f0, 
       0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3fb, 
       0x5, 0x48, 0x25, 0x2, 0x3f6, 0x3f7, 0x5, 0x1a8, 0xd5, 0x2, 0x3f7, 
       0x3f8, 0x7, 0x8c, 0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0x1e, 0x10, 0x2, 0x3f9, 
       0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3fa, 
       0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x3fc, 
       0x405, 0x5, 0x1a8, 0xd5, 0x2, 0x3fd, 0x3ff, 0x5, 0x70, 0x39, 0x2, 
       0x3fe, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x3, 0x2, 0x2, 0x2, 
       0x3ff, 0x406, 0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x7, 0x90, 0x2, 0x2, 
       0x401, 0x403, 0x5, 0x1a8, 0xd5, 0x2, 0x402, 0x404, 0x5, 0x70, 0x39, 
       0x2, 0x403, 0x402, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 
       0x2, 0x404, 0x406, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3fe, 0x3, 0x2, 0x2, 
       0x2, 0x405, 0x400, 0x3, 0x2, 0x2, 0x2, 0x406, 0x40e, 0x3, 0x2, 0x2, 
       0x2, 0x407, 0x408, 0x7, 0x7e, 0x2, 0x2, 0x408, 0x40a, 0x5, 0x1a8, 
       0xd5, 0x2, 0x409, 0x40b, 0x5, 0x70, 0x39, 0x2, 0x40a, 0x409, 0x3, 
       0x2, 0x2, 0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40d, 0x3, 
       0x2, 0x2, 0x2, 0x40c, 0x407, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x410, 0x3, 
       0x2, 0x2, 0x2, 0x40e, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 
       0x2, 0x2, 0x2, 0x40f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x410, 0x40e, 0x3, 
       0x2, 0x2, 0x2, 0x411, 0x415, 0x7, 0x8d, 0x2, 0x2, 0x412, 0x414, 0x7, 
       0x7f, 0x2, 0x2, 0x413, 0x412, 0x3, 0x2, 0x2, 0x2, 0x414, 0x417, 0x3, 
       0x2, 0x2, 0x2, 0x415, 0x413, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 
       0x2, 0x2, 0x2, 0x416, 0x418, 0x3, 0x2, 0x2, 0x2, 0x417, 0x415, 0x3, 
       0x2, 0x2, 0x2, 0x418, 0x419, 0x7, 0x8e, 0x2, 0x2, 0x419, 0x71, 0x3, 
       0x2, 0x2, 0x2, 0x41a, 0x41f, 0x5, 0x8, 0x5, 0x2, 0x41b, 0x41e, 0x5, 
       0x142, 0xa2, 0x2, 0x41c, 0x41e, 0x7, 0x84, 0x2, 0x2, 0x41d, 0x41b, 
       0x3, 0x2, 0x2, 0x2, 0x41d, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x421, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x423, 0x3, 0x2, 0x2, 0x2, 0x421, 0x41f, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x424, 0x7, 0x8f, 0x2, 0x2, 0x423, 0x422, 
       0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x427, 0x5, 0x74, 0x3b, 0x2, 0x426, 0x425, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x428, 0x42a, 0x5, 0x1a8, 0xd5, 0x2, 0x429, 0x428, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x42b, 0x42c, 0x7, 0x78, 0x2, 0x2, 0x42c, 0x431, 
       0x5, 0x76, 0x3c, 0x2, 0x42d, 0x42e, 0x7, 0x7f, 0x2, 0x2, 0x42e, 0x430, 
       0x5, 0x76, 0x3c, 0x2, 0x42f, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x430, 0x433, 
       0x3, 0x2, 0x2, 0x2, 0x431, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 
       0x3, 0x2, 0x2, 0x2, 0x432, 0x434, 0x3, 0x2, 0x2, 0x2, 0x433, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x7, 0x79, 0x2, 0x2, 0x435, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 0x5, 0x1a8, 0xd5, 0x2, 0x437, 0x438, 
       0x7, 0x80, 0x2, 0x2, 0x438, 0x439, 0x5, 0x1e, 0x10, 0x2, 0x439, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x43a, 0x43c, 0x7, 0xe, 0x2, 0x2, 0x43b, 0x43a, 
       0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 
       0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x5, 0x7a, 0x3e, 0x2, 0x43e, 0x43f, 
       0x5, 0x176, 0xbc, 0x2, 0x43f, 0x440, 0x5, 0x82, 0x42, 0x2, 0x440, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x7, 0x7c, 0x2, 0x2, 0x442, 
       0x44d, 0x7, 0x7d, 0x2, 0x2, 0x443, 0x444, 0x7, 0x7c, 0x2, 0x2, 0x444, 
       0x445, 0x5, 0x7c, 0x3f, 0x2, 0x445, 0x446, 0x7, 0x7d, 0x2, 0x2, 0x446, 
       0x44d, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 0x7, 0x7c, 0x2, 0x2, 0x448, 
       0x449, 0x5, 0x80, 0x41, 0x2, 0x449, 0x44a, 0x7, 0x7d, 0x2, 0x2, 0x44a, 
       0x44d, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44d, 0x5, 0x1a8, 0xd5, 0x2, 0x44c, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44c, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44d, 
       0x7b, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x453, 0x5, 0x7e, 0x40, 0x2, 0x44f, 
       0x450, 0x7, 0x7f, 0x2, 0x2, 0x450, 0x452, 0x5, 0x7e, 0x40, 0x2, 0x451, 
       0x44f, 0x3, 0x2, 0x2, 0x2, 0x452, 0x455, 0x3, 0x2, 0x2, 0x2, 0x453, 
       0x451, 0x3, 0x2, 0x2, 0x2, 0x453, 0x454, 0x3, 0x2, 0x2, 0x2, 0x454, 
       0x7d, 0x3, 0x2, 0x2, 0x2, 0x455, 0x453, 0x3, 0x2, 0x2, 0x2, 0x456, 
       0x458, 0x9, 0x4, 0x2, 0x2, 0x457, 0x456, 0x3, 0x2, 0x2, 0x2, 0x457, 
       0x458, 0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 0x3, 0x2, 0x2, 0x2, 0x459, 
       0x45a, 0x5, 0x6, 0x4, 0x2, 0x45a, 0x45b, 0x5, 0x1a8, 0xd5, 0x2, 0x45b, 
       0x7f, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x461, 0x5, 0x1a8, 0xd5, 0x2, 0x45d, 
       0x45e, 0x7, 0x7f, 0x2, 0x2, 0x45e, 0x460, 0x5, 0x1a8, 0xd5, 0x2, 
       0x45f, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x460, 0x463, 0x3, 0x2, 0x2, 0x2, 
       0x461, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 
       0x462, 0x81, 0x3, 0x2, 0x2, 0x2, 0x463, 0x461, 0x3, 0x2, 0x2, 0x2, 
       0x464, 0x467, 0x5, 0x4c, 0x27, 0x2, 0x465, 0x467, 0x5, 0xac, 0x57, 
       0x2, 0x466, 0x464, 0x3, 0x2, 0x2, 0x2, 0x466, 0x465, 0x3, 0x2, 0x2, 
       0x2, 0x467, 0x83, 0x3, 0x2, 0x2, 0x2, 0x468, 0x469, 0x5, 0x86, 0x44, 
       0x2, 0x469, 0x46a, 0x5, 0x88, 0x45, 0x2, 0x46a, 0x85, 0x3, 0x2, 0x2, 
       0x2, 0x46b, 0x46d, 0x7, 0x29, 0x2, 0x2, 0x46c, 0x46e, 0x5, 0x6, 0x4, 
       0x2, 0x46d, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x3, 0x2, 0x2, 
       0x2, 0x46e, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0x5, 0x1a8, 
       0xd5, 0x2, 0x470, 0x471, 0x7, 0x2f, 0x2, 0x2, 0x471, 0x472, 0x5, 
       0x1e, 0x10, 0x2, 0x472, 0x87, 0x3, 0x2, 0x2, 0x2, 0x473, 0x475, 0x5, 
       0x8a, 0x46, 0x2, 0x474, 0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x478, 
       0x3, 0x2, 0x2, 0x2, 0x476, 0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 
       0x3, 0x2, 0x2, 0x2, 0x477, 0x479, 0x3, 0x2, 0x2, 0x2, 0x478, 0x476, 
       0x3, 0x2, 0x2, 0x2, 0x479, 0x47b, 0x5, 0x96, 0x4c, 0x2, 0x47a, 0x47c, 
       0x5, 0x98, 0x4d, 0x2, 0x47b, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 
       0x3, 0x2, 0x2, 0x2, 0x47c, 0x89, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x483, 
       0x5, 0x86, 0x44, 0x2, 0x47e, 0x483, 0x5, 0x8c, 0x47, 0x2, 0x47f, 
       0x483, 0x5, 0x8e, 0x48, 0x2, 0x480, 0x483, 0x5, 0x90, 0x49, 0x2, 
       0x481, 0x483, 0x5, 0x92, 0x4a, 0x2, 0x482, 0x47d, 0x3, 0x2, 0x2, 
       0x2, 0x482, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x482, 0x47f, 0x3, 0x2, 0x2, 
       0x2, 0x482, 0x480, 0x3, 0x2, 0x2, 0x2, 0x482, 0x481, 0x3, 0x2, 0x2, 
       0x2, 0x483, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x7, 0x35, 0x2, 
       0x2, 0x485, 0x486, 0x5, 0x1a8, 0xd5, 0x2, 0x486, 0x487, 0x7, 0x8c, 
       0x2, 0x2, 0x487, 0x488, 0x5, 0x1e, 0x10, 0x2, 0x488, 0x8d, 0x3, 0x2, 
       0x2, 0x2, 0x489, 0x48a, 0x7, 0x61, 0x2, 0x2, 0x48a, 0x48b, 0x5, 0x1e, 
       0x10, 0x2, 0x48b, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48e, 0x7, 0x34, 
       0x2, 0x2, 0x48d, 0x48f, 0x5, 0x6, 0x4, 0x2, 0x48e, 0x48d, 0x3, 0x2, 
       0x2, 0x2, 0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 0x3, 0x2, 
       0x2, 0x2, 0x490, 0x491, 0x5, 0x1a8, 0xd5, 0x2, 0x491, 0x492, 0x7, 
       0x2f, 0x2, 0x2, 0x492, 0x493, 0x5, 0x1e, 0x10, 0x2, 0x493, 0x494, 
       0x7, 0x3c, 0x2, 0x2, 0x494, 0x495, 0x5, 0x1e, 0x10, 0x2, 0x495, 0x496, 
       0x7, 0x20, 0x2, 0x2, 0x496, 0x499, 0x5, 0x1e, 0x10, 0x2, 0x497, 0x498, 
       0x7, 0x32, 0x2, 0x2, 0x498, 0x49a, 0x5, 0x1a8, 0xd5, 0x2, 0x499, 
       0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 0x7, 0x3e, 0x2, 0x2, 0x49c, 
       0x4a1, 0x5, 0x94, 0x4b, 0x2, 0x49d, 0x49e, 0x7, 0x7f, 0x2, 0x2, 0x49e, 
       0x4a0, 0x5, 0x94, 0x4b, 0x2, 0x49f, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x4a0, 
       0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4a1, 
       0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4a3, 
       0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a6, 0x5, 0x1e, 0x10, 0x2, 0x4a5, 
       0x4a7, 0x9, 0xa, 0x2, 0x2, 0x4a6, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a6, 
       0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x95, 0x3, 0x2, 0x2, 0x2, 0x4a8, 
       0x4a9, 0x7, 0x4b, 0x2, 0x2, 0x4a9, 0x4b0, 0x5, 0x1e, 0x10, 0x2, 0x4aa, 
       0x4ab, 0x7, 0x2c, 0x2, 0x2, 0x4ab, 0x4ac, 0x5, 0x1e, 0x10, 0x2, 0x4ac, 
       0x4ad, 0x7, 0x13, 0x2, 0x2, 0x4ad, 0x4ae, 0x5, 0x1e, 0x10, 0x2, 0x4ae, 
       0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4b2, 0x7, 0x32, 0x2, 0x2, 0x4b2, 0x4b3, 0x5, 0x1a8, 0xd5, 0x2, 
       0x4b3, 0x4b4, 0x5, 0x88, 0x45, 0x2, 0x4b4, 0x99, 0x3, 0x2, 0x2, 0x2, 
       0x4b5, 0x4b9, 0x5, 0xa6, 0x54, 0x2, 0x4b6, 0x4b9, 0x5, 0x9c, 0x4f, 
       0x2, 0x4b7, 0x4b9, 0x5, 0xa8, 0x55, 0x2, 0x4b8, 0x4b5, 0x3, 0x2, 
       0x2, 0x2, 0x4b8, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b7, 0x3, 0x2, 
       0x2, 0x2, 0x4b9, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bb, 0x5, 0xae, 
       0x58, 0x2, 0x4bb, 0x4bc, 0x7, 0x81, 0x2, 0x2, 0x4bc, 0x4c2, 0x3, 
       0x2, 0x2, 0x2, 0x4bd, 0x4be, 0x5, 0xb6, 0x5c, 0x2, 0x4be, 0x4bf, 
       0x7, 0x81, 0x2, 0x2, 0x4bf, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c2, 
       0x5, 0x9e, 0x50, 0x2, 0x4c1, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bd, 
       0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x5, 0xa0, 0x51, 0x2, 0x4c4, 0x4c5, 
       0x5, 0xa4, 0x53, 0x2, 0x4c5, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c8, 
       0x5, 0xa2, 0x52, 0x2, 0x4c7, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c8, 
       0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 
       0x5, 0x112, 0x8a, 0x2, 0x4ca, 0x4cc, 0x5, 0x1a8, 0xd5, 0x2, 0x4cb, 
       0x4cd, 0x5, 0xe6, 0x74, 0x2, 0x4cc, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4ce, 
       0x4d0, 0x7, 0x7c, 0x2, 0x2, 0x4cf, 0x4d1, 0x5, 0x118, 0x8d, 0x2, 
       0x4d0, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 0x2, 0x2, 
       0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d4, 0x7, 0x7d, 0x2, 0x2, 
       0x4d3, 0x4d5, 0x5, 0xee, 0x78, 0x2, 0x4d4, 0x4d3, 0x3, 0x2, 0x2, 
       0x2, 0x4d4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0xa1, 0x3, 0x2, 0x2, 
       0x2, 0x4d6, 0x4d8, 0x9, 0xb, 0x2, 0x2, 0x4d7, 0x4d9, 0x7, 0x4f, 0x2, 
       0x2, 0x4d8, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x3, 0x2, 0x2, 
       0x2, 0x4d9, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x4f, 0x2, 
       0x2, 0x4db, 0x4dd, 0x9, 0xb, 0x2, 0x2, 0x4dc, 0x4d6, 0x3, 0x2, 0x2, 
       0x2, 0x4dc, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0xa3, 0x3, 0x2, 0x2, 
       0x2, 0x4de, 0x4e4, 0x5, 0xac, 0x57, 0x2, 0x4df, 0x4e0, 0x5, 0x176, 
       0xbc, 0x2, 0x4e0, 0x4e1, 0x5, 0x4c, 0x27, 0x2, 0x4e1, 0x4e2, 0x7, 
       0x81, 0x2, 0x2, 0x4e2, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4de, 0x3, 
       0x2, 0x2, 0x2, 0x4e3, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0xa5, 0x3, 
       0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x5, 0x1a8, 0xd5, 0x2, 0x4e6, 0x4e7, 
       0x7, 0x80, 0x2, 0x2, 0x4e7, 0x4e8, 0x5, 0x9a, 0x4e, 0x2, 0x4e8, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ec, 0x5, 0xac, 0x57, 0x2, 0x4ea, 0x4ec, 
       0x5, 0xaa, 0x56, 0x2, 0x4eb, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ea, 
       0x3, 0x2, 0x2, 0x2, 0x4ec, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x570, 
       0x7, 0x81, 0x2, 0x2, 0x4ee, 0x4ef, 0x5, 0x1e, 0x10, 0x2, 0x4ef, 0x4f0, 
       0x7, 0x81, 0x2, 0x2, 0x4f0, 0x570, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f2, 
       0x7, 0x2d, 0x2, 0x2, 0x4f2, 0x4f3, 0x7, 0x7c, 0x2, 0x2, 0x4f3, 0x4f4, 
       0x5, 0x1e, 0x10, 0x2, 0x4f4, 0x4f5, 0x7, 0x7d, 0x2, 0x2, 0x4f5, 0x4f8, 
       0x5, 0xb8, 0x5d, 0x2, 0x4f6, 0x4f7, 0x7, 0x1e, 0x2, 0x2, 0x4f7, 0x4f9, 
       0x5, 0xb8, 0x5d, 0x2, 0x4f8, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x4f9, 
       0x3, 0x2, 0x2, 0x2, 0x4f9, 0x570, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 
       0x7, 0x52, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x7c, 0x2, 0x2, 0x4fc, 0x4fd, 
       0x5, 0x1e, 0x10, 0x2, 0x4fd, 0x4fe, 0x7, 0x7d, 0x2, 0x2, 0x4fe, 0x502, 
       0x7, 0x78, 0x2, 0x2, 0x4ff, 0x501, 0x5, 0xba, 0x5e, 0x2, 0x500, 0x4ff, 
       0x3, 0x2, 0x2, 0x2, 0x501, 0x504, 0x3, 0x2, 0x2, 0x2, 0x502, 0x500, 
       0x3, 0x2, 0x2, 0x2, 0x502, 0x503, 0x3, 0x2, 0x2, 0x2, 0x503, 0x505, 
       0x3, 0x2, 0x2, 0x2, 0x504, 0x502, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 
       0x7, 0x79, 0x2, 0x2, 0x506, 0x570, 0x3, 0x2, 0x2, 0x2, 0x507, 0x508, 
       0x7, 0x62, 0x2, 0x2, 0x508, 0x509, 0x7, 0x7c, 0x2, 0x2, 0x509, 0x50a, 
       0x5, 0x1e, 0x10, 0x2, 0x50a, 0x50b, 0x7, 0x7d, 0x2, 0x2, 0x50b, 0x50c, 
       0x5, 0xa8, 0x55, 0x2, 0x50c, 0x570, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 
       0x7, 0x1d, 0x2, 0x2, 0x50e, 0x50f, 0x5, 0xa8, 0x55, 0x2, 0x50f, 0x510, 
       0x7, 0x62, 0x2, 0x2, 0x510, 0x511, 0x7, 0x7c, 0x2, 0x2, 0x511, 0x512, 
       0x5, 0x1e, 0x10, 0x2, 0x512, 0x513, 0x7, 0x7d, 0x2, 0x2, 0x513, 0x514, 
       0x7, 0x81, 0x2, 0x2, 0x514, 0x570, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 
       0x7, 0x27, 0x2, 0x2, 0x516, 0x518, 0x7, 0x7c, 0x2, 0x2, 0x517, 0x519, 
       0x5, 0xc2, 0x62, 0x2, 0x518, 0x517, 0x3, 0x2, 0x2, 0x2, 0x518, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x519, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51c, 
       0x7, 0x81, 0x2, 0x2, 0x51b, 0x51d, 0x5, 0x1e, 0x10, 0x2, 0x51c, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x51e, 0x520, 0x7, 0x81, 0x2, 0x2, 0x51f, 0x521, 
       0x5, 0xc4, 0x63, 0x2, 0x520, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x520, 0x521, 
       0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 
       0x7, 0x7d, 0x2, 0x2, 0x523, 0x570, 0x5, 0xa8, 0x55, 0x2, 0x524, 0x526, 
       0x7, 0xf, 0x2, 0x2, 0x525, 0x524, 0x3, 0x2, 0x2, 0x2, 0x525, 0x526, 
       0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x3, 0x2, 0x2, 0x2, 0x527, 0x528, 
       0x7, 0x28, 0x2, 0x2, 0x528, 0x529, 0x7, 0x7c, 0x2, 0x2, 0x529, 0x52a, 
       0x5, 0xb0, 0x59, 0x2, 0x52a, 0x52b, 0x5, 0x1a8, 0xd5, 0x2, 0x52b, 
       0x52c, 0x7, 0x2f, 0x2, 0x2, 0x52c, 0x52d, 0x5, 0x1e, 0x10, 0x2, 0x52d, 
       0x52e, 0x7, 0x7d, 0x2, 0x2, 0x52e, 0x52f, 0x5, 0xa8, 0x55, 0x2, 0x52f, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x7, 0x12, 0x2, 0x2, 0x531, 
       0x570, 0x7, 0x81, 0x2, 0x2, 0x532, 0x533, 0x7, 0x19, 0x2, 0x2, 0x533, 
       0x570, 0x7, 0x81, 0x2, 0x2, 0x534, 0x539, 0x7, 0x2b, 0x2, 0x2, 0x535, 
       0x53a, 0x5, 0x1a8, 0xd5, 0x2, 0x536, 0x537, 0x7, 0x14, 0x2, 0x2, 
       0x537, 0x53a, 0x5, 0x1e, 0x10, 0x2, 0x538, 0x53a, 0x7, 0x1a, 0x2, 
       0x2, 0x539, 0x535, 0x3, 0x2, 0x2, 0x2, 0x539, 0x536, 0x3, 0x2, 0x2, 
       0x2, 0x539, 0x538, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 
       0x2, 0x53b, 0x570, 0x7, 0x81, 0x2, 0x2, 0x53c, 0x53e, 0x7, 0x49, 
       0x2, 0x2, 0x53d, 0x53f, 0x5, 0x1e, 0x10, 0x2, 0x53e, 0x53d, 0x3, 
       0x2, 0x2, 0x2, 0x53e, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x540, 0x3, 
       0x2, 0x2, 0x2, 0x540, 0x570, 0x7, 0x81, 0x2, 0x2, 0x541, 0x543, 0x7, 
       0x54, 0x2, 0x2, 0x542, 0x544, 0x5, 0x1e, 0x10, 0x2, 0x543, 0x542, 
       0x3, 0x2, 0x2, 0x2, 0x543, 0x544, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 
       0x3, 0x2, 0x2, 0x2, 0x545, 0x570, 0x7, 0x81, 0x2, 0x2, 0x546, 0x547, 
       0x7, 0x56, 0x2, 0x2, 0x547, 0x54d, 0x5, 0xac, 0x57, 0x2, 0x548, 0x54a, 
       0x5, 0xc6, 0x64, 0x2, 0x549, 0x54b, 0x5, 0xce, 0x68, 0x2, 0x54a, 
       0x549, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 
       0x54e, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 0x5, 0xce, 0x68, 0x2, 0x54d, 
       0x548, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54e, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x16, 0x2, 0x2, 0x550, 
       0x570, 0x5, 0xac, 0x57, 0x2, 0x551, 0x552, 0x7, 0x58, 0x2, 0x2, 0x552, 
       0x570, 0x5, 0xac, 0x57, 0x2, 0x553, 0x554, 0x7, 0x36, 0x2, 0x2, 0x554, 
       0x555, 0x7, 0x7c, 0x2, 0x2, 0x555, 0x556, 0x5, 0x1e, 0x10, 0x2, 0x556, 
       0x557, 0x7, 0x7d, 0x2, 0x2, 0x557, 0x558, 0x5, 0xa8, 0x55, 0x2, 0x558, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x5b, 0x2, 0x2, 0x55a, 
       0x55b, 0x7, 0x7c, 0x2, 0x2, 0x55b, 0x55c, 0x5, 0xd0, 0x69, 0x2, 0x55c, 
       0x55d, 0x7, 0x7d, 0x2, 0x2, 0x55d, 0x55e, 0x5, 0xa8, 0x55, 0x2, 0x55e, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x563, 0x7, 0x63, 0x2, 0x2, 0x560, 
       0x561, 0x7, 0x49, 0x2, 0x2, 0x561, 0x564, 0x5, 0x1e, 0x10, 0x2, 0x562, 
       0x564, 0x7, 0x12, 0x2, 0x2, 0x563, 0x560, 0x3, 0x2, 0x2, 0x2, 0x563, 
       0x562, 0x3, 0x2, 0x2, 0x2, 0x564, 0x565, 0x3, 0x2, 0x2, 0x2, 0x565, 
       0x570, 0x7, 0x81, 0x2, 0x2, 0x566, 0x567, 0x7, 0x5a, 0x2, 0x2, 0x567, 
       0x570, 0x5, 0xac, 0x57, 0x2, 0x568, 0x569, 0x7, 0x26, 0x2, 0x2, 0x569, 
       0x56a, 0x7, 0x7c, 0x2, 0x2, 0x56a, 0x56b, 0x5, 0x16a, 0xb6, 0x2, 
       0x56b, 0x56c, 0x5, 0x16c, 0xb7, 0x2, 0x56c, 0x56d, 0x7, 0x7d, 0x2, 
       0x2, 0x56d, 0x56e, 0x5, 0xa8, 0x55, 0x2, 0x56e, 0x570, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x4ee, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x4fa, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x507, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x50d, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x515, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x525, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x530, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x532, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x534, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x53c, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x541, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x546, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x551, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x553, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x559, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x566, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x568, 0x3, 0x2, 0x2, 0x2, 0x570, 0xab, 0x3, 0x2, 
       0x2, 0x2, 0x571, 0x573, 0x7, 0x78, 0x2, 0x2, 0x572, 0x574, 0x5, 0xc0, 
       0x61, 0x2, 0x573, 0x572, 0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 0x3, 0x2, 
       0x2, 0x2, 0x574, 0x575, 0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 0x7, 0x79, 
       0x2, 0x2, 0x576, 0xad, 0x3, 0x2, 0x2, 0x2, 0x577, 0x57c, 0x7, 0x5b, 
       0x2, 0x2, 0x578, 0x57c, 0x7, 0x47, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x47, 
       0x2, 0x2, 0x57a, 0x57c, 0x7, 0x46, 0x2, 0x2, 0x57b, 0x577, 0x3, 0x2, 
       0x2, 0x2, 0x57b, 0x578, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x579, 0x3, 0x2, 
       0x2, 0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x3, 0x2, 
       0x2, 0x2, 0x57d, 0x57e, 0x5, 0xb0, 0x59, 0x2, 0x57e, 0x583, 0x5, 
       0xb2, 0x5a, 0x2, 0x57f, 0x580, 0x7, 0x7f, 0x2, 0x2, 0x580, 0x582, 
       0x5, 0xb2, 0x5a, 0x2, 0x581, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x582, 0x585, 
       0x3, 0x2, 0x2, 0x2, 0x583, 0x581, 0x3, 0x2, 0x2, 0x2, 0x583, 0x584, 
       0x3, 0x2, 0x2, 0x2, 0x584, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x585, 0x583, 
       0x3, 0x2, 0x2, 0x2, 0x586, 0x587, 0x7, 0x26, 0x2, 0x2, 0x587, 0x588, 
       0x5, 0x16a, 0xb6, 0x2, 0x588, 0x589, 0x5, 0x16c, 0xb7, 0x2, 0x589, 
       0x58b, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x58a, 
       0x586, 0x3, 0x2, 0x2, 0x2, 0x58b, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x58c, 
       0x58f, 0x7, 0x5c, 0x2, 0x2, 0x58d, 0x58f, 0x5, 0x6, 0x4, 0x2, 0x58e, 
       0x58c, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58d, 0x3, 0x2, 0x2, 0x2, 0x58f, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0x590, 0x596, 0x5, 0x1a8, 0xd5, 0x2, 0x591, 
       0x593, 0x7, 0x8c, 0x2, 0x2, 0x592, 0x594, 0x7, 0x47, 0x2, 0x2, 0x593, 
       0x592, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 0x3, 0x2, 0x2, 0x2, 0x594, 
       0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 0x597, 0x5, 0xb4, 0x5b, 0x2, 0x596, 
       0x591, 0x3, 0x2, 0x2, 0x2, 0x596, 0x597, 0x3, 0x2, 0x2, 0x2, 0x597, 
       0xb3, 0x3, 0x2, 0x2, 0x2, 0x598, 0x59c, 0x5, 0x1e, 0x10, 0x2, 0x599, 
       0x59c, 0x5, 0x144, 0xa3, 0x2, 0x59a, 0x59c, 0x5, 0x174, 0xbb, 0x2, 
       0x59b, 0x598, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x599, 0x3, 0x2, 0x2, 0x2, 
       0x59b, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59c, 0xb5, 0x3, 0x2, 0x2, 0x2, 
       0x59d, 0x59e, 0x7, 0x18, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0x6, 0x4, 0x2, 
       0x59f, 0x5a0, 0x5, 0x108, 0x85, 0x2, 0x5a0, 0xb7, 0x3, 0x2, 0x2, 
       0x2, 0x5a1, 0x5a4, 0x5, 0xac, 0x57, 0x2, 0x5a2, 0x5a4, 0x5, 0xaa, 
       0x56, 0x2, 0x5a3, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a2, 0x3, 0x2, 
       0x2, 0x2, 0x5a4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a7, 0x5, 0xbc, 
       0x5f, 0x2, 0x5a6, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 
       0x2, 0x2, 0x5a8, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x3, 0x2, 
       0x2, 0x2, 0x5a9, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x5, 0xc0, 
       0x61, 0x2, 0x5ab, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0x14, 
       0x2, 0x2, 0x5ad, 0x5af, 0x5, 0x1e, 0x10, 0x2, 0x5ae, 0x5b0, 0x5, 
       0xbe, 0x60, 0x2, 0x5af, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 
       0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 
       0x7, 0x80, 0x2, 0x2, 0x5b2, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b4, 
       0x7, 0x1a, 0x2, 0x2, 0x5b4, 0x5b6, 0x7, 0x80, 0x2, 0x2, 0x5b5, 0x5ac, 
       0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x60, 0x2, 0x2, 0x5b8, 0x5b9, 
       0x5, 0x1e, 0x10, 0x2, 0x5b9, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bc, 
       0x5, 0x9a, 0x4e, 0x2, 0x5bb, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bd, 
       0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5be, 
       0x3, 0x2, 0x2, 0x2, 0x5be, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c9, 
       0x5, 0xae, 0x58, 0x2, 0x5c0, 0x5c5, 0x5, 0x1e, 0x10, 0x2, 0x5c1, 
       0x5c2, 0x7, 0x7f, 0x2, 0x2, 0x5c2, 0x5c4, 0x5, 0x1e, 0x10, 0x2, 0x5c3, 
       0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c5, 
       0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c6, 
       0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c8, 
       0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c9, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cf, 0x5, 0x1e, 0x10, 0x2, 0x5cb, 
       0x5cc, 0x7, 0x7f, 0x2, 0x2, 0x5cc, 0x5ce, 0x5, 0x1e, 0x10, 0x2, 0x5cd, 
       0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5cf, 
       0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d0, 
       0xc5, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5d2, 
       0x5d6, 0x5, 0xc8, 0x65, 0x2, 0x5d3, 0x5d5, 0x5, 0xc8, 0x65, 0x2, 
       0x5d4, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d8, 0x3, 0x2, 0x2, 0x2, 
       0x5d6, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d7, 0x3, 0x2, 0x2, 0x2, 
       0x5d7, 0x5da, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d6, 0x3, 0x2, 0x2, 0x2, 
       0x5d9, 0x5db, 0x5, 0xca, 0x66, 0x2, 0x5da, 0x5d9, 0x3, 0x2, 0x2, 
       0x2, 0x5da, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5de, 0x3, 0x2, 0x2, 
       0x2, 0x5dc, 0x5de, 0x5, 0xca, 0x66, 0x2, 0x5dd, 0x5d2, 0x3, 0x2, 
       0x2, 0x2, 0x5dd, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5de, 0xc7, 0x3, 0x2, 
       0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x15, 0x2, 0x2, 0x5e0, 0x5e1, 0x7, 0x7c, 
       0x2, 0x2, 0x5e1, 0x5e3, 0x5, 0x16, 0xc, 0x2, 0x5e2, 0x5e4, 0x5, 0x1a8, 
       0xd5, 0x2, 0x5e3, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e4, 0x3, 0x2, 
       0x2, 0x2, 0x5e4, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e7, 0x7, 0x7d, 
       0x2, 0x2, 0x5e6, 0x5e8, 0x5, 0xcc, 0x67, 0x2, 0x5e7, 0x5e6, 0x3, 
       0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e9, 0x3, 
       0x2, 0x2, 0x2, 0x5e9, 0x5ea, 0x5, 0xac, 0x57, 0x2, 0x5ea, 0xc9, 0x3, 
       0x2, 0x2, 0x2, 0x5eb, 0x5ed, 0x7, 0x15, 0x2, 0x2, 0x5ec, 0x5ee, 0x5, 
       0xcc, 0x67, 0x2, 0x5ed, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ee, 
       0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 
       0x5, 0xac, 0x57, 0x2, 0x5f0, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f2, 
       0x7, 0x60, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x7c, 0x2, 0x2, 0x5f3, 0x5f4, 
       0x5, 0x1e, 0x10, 0x2, 0x5f4, 0x5f5, 0x7, 0x7d, 0x2, 0x2, 0x5f5, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x25, 0x2, 0x2, 0x5f7, 0x5f8, 
       0x5, 0xac, 0x57, 0x2, 0x5f8, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fc, 
       0x5, 0xae, 0x58, 0x2, 0x5fa, 0x5fc, 0x5, 0x1e, 0x10, 0x2, 0x5fb, 
       0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fc, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fe, 0x7, 0x38, 0x2, 0x2, 0x5fe, 
       0x5ff, 0x5, 0xd4, 0x6b, 0x2, 0x5ff, 0x601, 0x5, 0xd6, 0x6c, 0x2, 
       0x600, 0x602, 0x7, 0x81, 0x2, 0x2, 0x601, 0x600, 0x3, 0x2, 0x2, 0x2, 
       0x601, 0x602, 0x3, 0x2, 0x2, 0x2, 0x602, 0xd3, 0x3, 0x2, 0x2, 0x2, 
       0x603, 0x608, 0x5, 0x1a8, 0xd5, 0x2, 0x604, 0x605, 0x7, 0x7e, 0x2, 
       0x2, 0x605, 0x607, 0x5, 0x1a8, 0xd5, 0x2, 0x606, 0x604, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x60a, 0x3, 0x2, 0x2, 0x2, 0x608, 0x606, 0x3, 0x2, 
       0x2, 0x2, 0x608, 0x609, 0x3, 0x2, 0x2, 0x2, 0x609, 0xd5, 0x3, 0x2, 
       0x2, 0x2, 0x60a, 0x608, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60d, 0x7, 0x78, 
       0x2, 0x2, 0x60c, 0x60e, 0x5, 0xda, 0x6e, 0x2, 0x60d, 0x60c, 0x3, 
       0x2, 0x2, 0x2, 0x60d, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x610, 0x3, 
       0x2, 0x2, 0x2, 0x60f, 0x611, 0x5, 0xde, 0x70, 0x2, 0x610, 0x60f, 
       0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 0x3, 0x2, 0x2, 0x2, 0x611, 0x612, 
       0x3, 0x2, 0x2, 0x2, 0x612, 0x613, 0x7, 0x79, 0x2, 0x2, 0x613, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 0x7, 0x23, 0x2, 0x2, 0x615, 0x616, 
       0x7, 0xb, 0x2, 0x2, 0x616, 0x617, 0x5, 0x1a8, 0xd5, 0x2, 0x617, 0x618, 
       0x7, 0x81, 0x2, 0x2, 0x618, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61b, 
       0x5, 0xdc, 0x6f, 0x2, 0x61a, 0x619, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 
       0x3, 0x2, 0x2, 0x2, 0x61c, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x61d, 
       0x3, 0x2, 0x2, 0x2, 0x61d, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x61f, 
       0x7, 0x5b, 0x2, 0x2, 0x61f, 0x620, 0x5, 0x1a8, 0xd5, 0x2, 0x620, 
       0x621, 0x7, 0x8c, 0x2, 0x2, 0x621, 0x622, 0x5, 0x4, 0x3, 0x2, 0x622, 
       0x623, 0x7, 0x81, 0x2, 0x2, 0x623, 0x629, 0x3, 0x2, 0x2, 0x2, 0x624, 
       0x625, 0x7, 0x5b, 0x2, 0x2, 0x625, 0x626, 0x5, 0x4, 0x3, 0x2, 0x626, 
       0x627, 0x7, 0x81, 0x2, 0x2, 0x627, 0x629, 0x3, 0x2, 0x2, 0x2, 0x628, 
       0x61e, 0x3, 0x2, 0x2, 0x2, 0x628, 0x624, 0x3, 0x2, 0x2, 0x2, 0x629, 
       0xdd, 0x3, 0x2, 0x2, 0x2, 0x62a, 0x62c, 0x5, 0xe0, 0x71, 0x2, 0x62b, 
       0x62a, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x62d, 
       0x62b, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62e, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x632, 0x5, 0xd2, 0x6a, 0x2, 0x630, 
       0x632, 0x5, 0xe2, 0x72, 0x2, 0x631, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x631, 
       0x630, 0x3, 0x2, 0x2, 0x2, 0x632, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x633, 
       0x635, 0x5, 0x15e, 0xb0, 0x2, 0x634, 0x633, 0x3, 0x2, 0x2, 0x2, 0x634, 
       0x635, 0x3, 0x2, 0x2, 0x2, 0x635, 0x637, 0x3, 0x2, 0x2, 0x2, 0x636, 
       0x638, 0x5, 0x100, 0x81, 0x2, 0x637, 0x636, 0x3, 0x2, 0x2, 0x2, 0x637, 
       0x638, 0x3, 0x2, 0x2, 0x2, 0x638, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x63f, 0x5, 0x184, 0xc3, 0x2, 0x63a, 0x63f, 0x5, 0x186, 0xc4, 0x2, 
       0x63b, 0x63f, 0x5, 0x188, 0xc5, 0x2, 0x63c, 0x63f, 0x5, 0x18a, 0xc6, 
       0x2, 0x63d, 0x63f, 0x5, 0x18c, 0xc7, 0x2, 0x63e, 0x639, 0x3, 0x2, 
       0x2, 0x2, 0x63e, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63b, 0x3, 0x2, 
       0x2, 0x2, 0x63e, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63d, 0x3, 0x2, 
       0x2, 0x2, 0x63f, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x5, 0x1a8, 
       0xd5, 0x2, 0x641, 0x642, 0x7, 0x90, 0x2, 0x2, 0x642, 0x644, 0x5, 
       0x1a8, 0xd5, 0x2, 0x643, 0x645, 0x5, 0x18, 0xd, 0x2, 0x644, 0x643, 
       0x3, 0x2, 0x2, 0x2, 0x644, 0x645, 0x3, 0x2, 0x2, 0x2, 0x645, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 0x7, 0x8d, 0x2, 0x2, 0x647, 0x64c, 
       0x5, 0xe8, 0x75, 0x2, 0x648, 0x649, 0x7, 0x7f, 0x2, 0x2, 0x649, 0x64b, 
       0x5, 0xe8, 0x75, 0x2, 0x64a, 0x648, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64e, 
       0x3, 0x2, 0x2, 0x2, 0x64c, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 
       0x3, 0x2, 0x2, 0x2, 0x64d, 0x64f, 0x3, 0x2, 0x2, 0x2, 0x64e, 0x64c, 
       0x3, 0x2, 0x2, 0x2, 0x64f, 0x650, 0x7, 0x8e, 0x2, 0x2, 0x650, 0xe7, 
       0x3, 0x2, 0x2, 0x2, 0x651, 0x653, 0x5, 0x15e, 0xb0, 0x2, 0x652, 0x651, 
       0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 
       0x3, 0x2, 0x2, 0x2, 0x654, 0x655, 0x5, 0x1a8, 0xd5, 0x2, 0x655, 0xe9, 
       0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0x7, 0x80, 0x2, 0x2, 0x657, 0x65c, 
       0x5, 0x16, 0xc, 0x2, 0x658, 0x659, 0x7, 0x7f, 0x2, 0x2, 0x659, 0x65b, 
       0x5, 0x4, 0x3, 0x2, 0x65a, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65e, 
       0x3, 0x2, 0x2, 0x2, 0x65c, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 
       0x3, 0x2, 0x2, 0x2, 0x65d, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x65e, 0x65c, 
       0x3, 0x2, 0x2, 0x2, 0x65f, 0x664, 0x5, 0x4, 0x3, 0x2, 0x660, 0x661, 
       0x7, 0x7f, 0x2, 0x2, 0x661, 0x663, 0x5, 0x4, 0x3, 0x2, 0x662, 0x660, 
       0x3, 0x2, 0x2, 0x2, 0x663, 0x666, 0x3, 0x2, 0x2, 0x2, 0x664, 0x662, 
       0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x3, 0x2, 0x2, 0x2, 0x665, 0xed, 
       0x3, 0x2, 0x2, 0x2, 0x666, 0x664, 0x3, 0x2, 0x2, 0x2, 0x667, 0x669, 
       0x5, 0xf0, 0x79, 0x2, 0x668, 0x667, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 
       0x3, 0x2, 0x2, 0x2, 0x66a, 0x668, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 
       0x3, 0x2, 0x2, 0x2, 0x66b, 0xef, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 
       0x7, 0x61, 0x2, 0x2, 0x66d, 0x66e, 0x5, 0x1a8, 0xd5, 0x2, 0x66e, 
       0x66f, 0x7, 0x80, 0x2, 0x2, 0x66f, 0x670, 0x5, 0xf2, 0x7a, 0x2, 0x670, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x671, 0x67c, 0x5, 0xf8, 0x7d, 0x2, 0x672, 
       0x675, 0x5, 0xf4, 0x7b, 0x2, 0x673, 0x674, 0x7, 0x7f, 0x2, 0x2, 0x674, 
       0x676, 0x5, 0xf6, 0x7c, 0x2, 0x675, 0x673, 0x3, 0x2, 0x2, 0x2, 0x675, 
       0x676, 0x3, 0x2, 0x2, 0x2, 0x676, 0x679, 0x3, 0x2, 0x2, 0x2, 0x677, 
       0x678, 0x7, 0x7f, 0x2, 0x2, 0x678, 0x67a, 0x5, 0xf8, 0x7d, 0x2, 0x679, 
       0x677, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x67a, 
       0x67c, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x671, 0x3, 0x2, 0x2, 0x2, 0x67b, 
       0x672, 0x3, 0x2, 0x2, 0x2, 0x67c, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x67d, 
       0x685, 0x5, 0x16, 0xc, 0x2, 0x67e, 0x680, 0x7, 0x17, 0x2, 0x2, 0x67f, 
       0x681, 0x7, 0x8f, 0x2, 0x2, 0x680, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x680, 
       0x681, 0x3, 0x2, 0x2, 0x2, 0x681, 0x685, 0x3, 0x2, 0x2, 0x2, 0x682, 
       0x685, 0x7, 0x51, 0x2, 0x2, 0x683, 0x685, 0x7, 0x59, 0x2, 0x2, 0x684, 
       0x67d, 0x3, 0x2, 0x2, 0x2, 0x684, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x684, 
       0x682, 0x3, 0x2, 0x2, 0x2, 0x684, 0x683, 0x3, 0x2, 0x2, 0x2, 0x685, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0x686, 0x68b, 0x5, 0x4, 0x3, 0x2, 0x687, 
       0x688, 0x7, 0x7f, 0x2, 0x2, 0x688, 0x68a, 0x5, 0x4, 0x3, 0x2, 0x689, 
       0x687, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x68b, 
       0x689, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68c, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68b, 0x3, 0x2, 0x2, 0x2, 0x68e, 
       0x68f, 0x7, 0x39, 0x2, 0x2, 0x68f, 0x690, 0x7, 0x7c, 0x2, 0x2, 0x690, 
       0x691, 0x7, 0x7d, 0x2, 0x2, 0x691, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x692, 
       0x694, 0x7, 0x78, 0x2, 0x2, 0x693, 0x695, 0x5, 0xfc, 0x7f, 0x2, 0x694, 
       0x693, 0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0x3, 0x2, 0x2, 0x2, 0x695, 
       0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 0x697, 0x7, 0x79, 0x2, 0x2, 0x697, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0x698, 0x69a, 0x5, 0xfe, 0x80, 0x2, 0x699, 
       0x698, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x69b, 
       0x699, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69c, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69f, 0x5, 0x15e, 0xb0, 0x2, 0x69e, 
       0x69d, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69f, 
       0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a2, 0x5, 0x100, 0x81, 0x2, 0x6a1, 
       0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a2, 
       0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6a3, 0x6a6, 0x5, 0x104, 0x83, 0x2, 0x6a4, 
       0x6a6, 0x5, 0x198, 0xcd, 0x2, 0x6a5, 0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a5, 
       0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6a7, 
       0x6a9, 0x5, 0x102, 0x82, 0x2, 0x6a8, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a9, 
       0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6aa, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x101, 0x3, 0x2, 0x2, 0x2, 0x6ac, 
       0x6ad, 0x9, 0xc, 0x2, 0x2, 0x6ad, 0x103, 0x3, 0x2, 0x2, 0x2, 0x6ae, 
       0x6c2, 0x5, 0x194, 0xcb, 0x2, 0x6af, 0x6c2, 0x5, 0x106, 0x84, 0x2, 
       0x6b0, 0x6c2, 0x5, 0x18e, 0xc8, 0x2, 0x6b1, 0x6b7, 0x5, 0x134, 0x9b, 
       0x2, 0x6b2, 0x6b8, 0x5, 0x138, 0x9d, 0x2, 0x6b3, 0x6b4, 0x5, 0x176, 
       0xbc, 0x2, 0x6b4, 0x6b5, 0x5, 0x4c, 0x27, 0x2, 0x6b5, 0x6b6, 0x7, 
       0x81, 0x2, 0x2, 0x6b6, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b2, 0x3, 
       0x2, 0x2, 0x2, 0x6b7, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6c2, 0x3, 
       0x2, 0x2, 0x2, 0x6b9, 0x6c2, 0x5, 0x19a, 0xce, 0x2, 0x6ba, 0x6bb, 
       0x7, 0x5e, 0x2, 0x2, 0x6bb, 0x6c2, 0x5, 0x19c, 0xcf, 0x2, 0x6bc, 
       0x6c2, 0x5, 0x184, 0xc3, 0x2, 0x6bd, 0x6c2, 0x5, 0x186, 0xc4, 0x2, 
       0x6be, 0x6c2, 0x5, 0x188, 0xc5, 0x2, 0x6bf, 0x6c2, 0x5, 0x18a, 0xc6, 
       0x2, 0x6c0, 0x6c2, 0x5, 0x18c, 0xc7, 0x2, 0x6c1, 0x6ae, 0x3, 0x2, 
       0x2, 0x2, 0x6c1, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6b0, 0x3, 0x2, 
       0x2, 0x2, 0x6c1, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6b9, 0x3, 0x2, 
       0x2, 0x2, 0x6c1, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6bc, 0x3, 0x2, 
       0x2, 0x2, 0x6c1, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6be, 0x3, 0x2, 
       0x2, 0x2, 0x6c1, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6c0, 0x3, 0x2, 
       0x2, 0x2, 0x6c2, 0x105, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c9, 0x7, 0x47, 
       0x2, 0x2, 0x6c4, 0x6c5, 0x7, 0x46, 0x2, 0x2, 0x6c5, 0x6c9, 0x7, 0x47, 
       0x2, 0x2, 0x6c6, 0x6c7, 0x7, 0x47, 0x2, 0x2, 0x6c7, 0x6c9, 0x7, 0x46, 
       0x2, 0x2, 0x6c8, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c4, 0x3, 0x2, 
       0x2, 0x2, 0x6c8, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x3, 0x2, 
       0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6d4, 0x5, 0x6, 
       0x4, 0x2, 0x6cb, 0x6cc, 0x5, 0x4, 0x3, 0x2, 0x6cc, 0x6cd, 0x7, 0x7e, 
       0x2, 0x2, 0x6cd, 0x6ce, 0x5, 0x196, 0xcc, 0x2, 0x6ce, 0x6d5, 0x3, 
       0x2, 0x2, 0x2, 0x6cf, 0x6d5, 0x5, 0x19c, 0xcf, 0x2, 0x6d0, 0x6d5, 
       0x5, 0x192, 0xca, 0x2, 0x6d1, 0x6d5, 0x5, 0x196, 0xcc, 0x2, 0x6d2, 
       0x6d5, 0x5, 0x1a0, 0xd1, 0x2, 0x6d3, 0x6d5, 0x5, 0x190, 0xc9, 0x2, 
       0x6d4, 0x6cb, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6cf, 0x3, 0x2, 0x2, 0x2, 
       0x6d4, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d1, 0x3, 0x2, 0x2, 0x2, 
       0x6d4, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d3, 0x3, 0x2, 0x2, 0x2, 
       0x6d5, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6db, 0x5, 0x10a, 0x86, 
       0x2, 0x6d7, 0x6d8, 0x7, 0x7f, 0x2, 0x2, 0x6d8, 0x6da, 0x5, 0x10a, 
       0x86, 0x2, 0x6d9, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6dd, 0x3, 0x2, 
       0x2, 0x2, 0x6db, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x3, 0x2, 
       0x2, 0x2, 0x6dc, 0x109, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6db, 0x3, 0x2, 
       0x2, 0x2, 0x6de, 0x6df, 0x5, 0x1a8, 0xd5, 0x2, 0x6df, 0x6e0, 0x7, 
       0x8c, 0x2, 0x2, 0x6e0, 0x6e1, 0x5, 0x1e, 0x10, 0x2, 0x6e1, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e7, 0x5, 0x10e, 0x88, 0x2, 0x6e3, 0x6e4, 
       0x7, 0x7f, 0x2, 0x2, 0x6e4, 0x6e6, 0x5, 0x10e, 0x88, 0x2, 0x6e5, 
       0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
       0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e8, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6ea, 
       0x6ed, 0x5, 0x1a8, 0xd5, 0x2, 0x6eb, 0x6ec, 0x7, 0x8c, 0x2, 0x2, 
       0x6ec, 0x6ee, 0x5, 0x110, 0x89, 0x2, 0x6ed, 0x6eb, 0x3, 0x2, 0x2, 
       0x2, 0x6ed, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x10f, 0x3, 0x2, 0x2, 
       0x2, 0x6ef, 0x6f2, 0x5, 0x1e, 0x10, 0x2, 0x6f0, 0x6f2, 0x5, 0x144, 
       0xa3, 0x2, 0x6f1, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f0, 0x3, 0x2, 
       0x2, 0x2, 0x6f2, 0x111, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f6, 0x5, 0x6, 
       0x4, 0x2, 0x6f4, 0x6f6, 0x7, 0x5e, 0x2, 0x2, 0x6f5, 0x6f3, 0x3, 0x2, 
       0x2, 0x2, 0x6f5, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f6, 0x113, 0x3, 0x2, 
       0x2, 0x2, 0x6f7, 0x6f8, 0x5, 0x4, 0x3, 0x2, 0x6f8, 0x115, 0x3, 0x2, 
       0x2, 0x2, 0x6f9, 0x6fc, 0x5, 0xac, 0x57, 0x2, 0x6fa, 0x6fc, 0x7, 
       0x81, 0x2, 0x2, 0x6fb, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6fa, 0x3, 
       0x2, 0x2, 0x2, 0x6fc, 0x117, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x704, 0x5, 
       0x120, 0x91, 0x2, 0x6fe, 0x701, 0x5, 0x11a, 0x8e, 0x2, 0x6ff, 0x700, 
       0x7, 0x7f, 0x2, 0x2, 0x700, 0x702, 0x5, 0x120, 0x91, 0x2, 0x701, 
       0x6ff, 0x3, 0x2, 0x2, 0x2, 0x701, 0x702, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x704, 0x3, 0x2, 0x2, 0x2, 0x703, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x703, 
       0x6fe, 0x3, 0x2, 0x2, 0x2, 0x704, 0x119, 0x3, 0x2, 0x2, 0x2, 0x705, 
       0x70a, 0x5, 0x11c, 0x8f, 0x2, 0x706, 0x707, 0x7, 0x7f, 0x2, 0x2, 
       0x707, 0x709, 0x5, 0x11c, 0x8f, 0x2, 0x708, 0x706, 0x3, 0x2, 0x2, 
       0x2, 0x709, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x708, 0x3, 0x2, 0x2, 
       0x2, 0x70a, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x11b, 0x3, 0x2, 0x2, 
       0x2, 0x70c, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x70f, 0x5, 0x15e, 
       0xb0, 0x2, 0x70e, 0x70d, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x70f, 0x3, 0x2, 
       0x2, 0x2, 0x70f, 0x711, 0x3, 0x2, 0x2, 0x2, 0x710, 0x712, 0x5, 0x11e, 
       0x90, 0x2, 0x711, 0x710, 0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 0x3, 0x2, 
       0x2, 0x2, 0x712, 0x713, 0x3, 0x2, 0x2, 0x2, 0x713, 0x714, 0x5, 0x1a2, 
       0xd2, 0x2, 0x714, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x715, 0x71e, 0x7, 0x47, 
       0x2, 0x2, 0x716, 0x71e, 0x7, 0x3f, 0x2, 0x2, 0x717, 0x71e, 0x7, 0x2f, 
       0x2, 0x2, 0x718, 0x719, 0x7, 0x47, 0x2, 0x2, 0x719, 0x71e, 0x7, 0x53, 
       0x2, 0x2, 0x71a, 0x71b, 0x7, 0x2f, 0x2, 0x2, 0x71b, 0x71e, 0x7, 0x53, 
       0x2, 0x2, 0x71c, 0x71e, 0x7, 0x53, 0x2, 0x2, 0x71d, 0x715, 0x3, 0x2, 
       0x2, 0x2, 0x71d, 0x716, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x717, 0x3, 0x2, 
       0x2, 0x2, 0x71d, 0x718, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71a, 0x3, 0x2, 
       0x2, 0x2, 0x71d, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71e, 0x11f, 0x3, 0x2, 
       0x2, 0x2, 0x71f, 0x721, 0x5, 0x15e, 0xb0, 0x2, 0x720, 0x71f, 0x3, 
       0x2, 0x2, 0x2, 0x720, 0x721, 0x3, 0x2, 0x2, 0x2, 0x721, 0x722, 0x3, 
       0x2, 0x2, 0x2, 0x722, 0x723, 0x7, 0x41, 0x2, 0x2, 0x723, 0x724, 0x5, 
       0x140, 0xa1, 0x2, 0x724, 0x725, 0x5, 0x1a8, 0xd5, 0x2, 0x725, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x726, 0x728, 0x5, 0x15e, 0xb0, 0x2, 0x727, 0x726, 
       0x3, 0x2, 0x2, 0x2, 0x727, 0x728, 0x3, 0x2, 0x2, 0x2, 0x728, 0x72a, 
       0x3, 0x2, 0x2, 0x2, 0x729, 0x72b, 0x5, 0x128, 0x95, 0x2, 0x72a, 0x729, 
       0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x736, 
       0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 0x7, 0x2a, 0x2, 0x2, 0x72d, 0x72f, 
       0x5, 0x12a, 0x96, 0x2, 0x72e, 0x730, 0x5, 0x126, 0x94, 0x2, 0x72f, 
       0x72e, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x730, 0x3, 0x2, 0x2, 0x2, 0x730, 
       0x737, 0x3, 0x2, 0x2, 0x2, 0x731, 0x732, 0x7, 0x4c, 0x2, 0x2, 0x732, 
       0x734, 0x5, 0x12a, 0x96, 0x2, 0x733, 0x735, 0x5, 0x124, 0x93, 0x2, 
       0x734, 0x733, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 0x3, 0x2, 0x2, 0x2, 
       0x735, 0x737, 0x3, 0x2, 0x2, 0x2, 0x736, 0x72c, 0x3, 0x2, 0x2, 0x2, 
       0x736, 0x731, 0x3, 0x2, 0x2, 0x2, 0x737, 0x123, 0x3, 0x2, 0x2, 0x2, 
       0x738, 0x73a, 0x5, 0x15e, 0xb0, 0x2, 0x739, 0x738, 0x3, 0x2, 0x2, 
       0x2, 0x739, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x73c, 0x3, 0x2, 0x2, 
       0x2, 0x73b, 0x73d, 0x5, 0x128, 0x95, 0x2, 0x73c, 0x73b, 0x3, 0x2, 
       0x2, 0x2, 0x73c, 0x73d, 0x3, 0x2, 0x2, 0x2, 0x73d, 0x73e, 0x3, 0x2, 
       0x2, 0x2, 0x73e, 0x73f, 0x7, 0x2a, 0x2, 0x2, 0x73f, 0x740, 0x5, 0x12a, 
       0x96, 0x2, 0x740, 0x125, 0x3, 0x2, 0x2, 0x2, 0x741, 0x743, 0x5, 0x15e, 
       0xb0, 0x2, 0x742, 0x741, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 0x3, 0x2, 
       0x2, 0x2, 0x743, 0x745, 0x3, 0x2, 0x2, 0x2, 0x744, 0x746, 0x5, 0x128, 
       0x95, 0x2, 0x745, 0x744, 0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 0x3, 0x2, 
       0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 0x748, 0x7, 0x4c, 
       0x2, 0x2, 0x748, 0x749, 0x5, 0x12a, 0x96, 0x2, 0x749, 0x127, 0x3, 
       0x2, 0x2, 0x2, 0x74a, 0x752, 0x7, 0x44, 0x2, 0x2, 0x74b, 0x752, 0x7, 
       0x31, 0x2, 0x2, 0x74c, 0x752, 0x7, 0x43, 0x2, 0x2, 0x74d, 0x74e, 
       0x7, 0x44, 0x2, 0x2, 0x74e, 0x752, 0x7, 0x31, 0x2, 0x2, 0x74f, 0x750, 
       0x7, 0x31, 0x2, 0x2, 0x750, 0x752, 0x7, 0x44, 0x2, 0x2, 0x751, 0x74a, 
       0x3, 0x2, 0x2, 0x2, 0x751, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x751, 0x74c, 
       0x3, 0x2, 0x2, 0x2, 0x751, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x751, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x752, 0x129, 0x3, 0x2, 0x2, 0x2, 0x753, 0x756, 
       0x5, 0xac, 0x57, 0x2, 0x754, 0x756, 0x7, 0x81, 0x2, 0x2, 0x755, 0x753, 
       0x3, 0x2, 0x2, 0x2, 0x755, 0x754, 0x3, 0x2, 0x2, 0x2, 0x756, 0x12b, 
       0x3, 0x2, 0x2, 0x2, 0x757, 0x759, 0x5, 0x15e, 0xb0, 0x2, 0x758, 0x757, 
       0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 0x3, 0x2, 0x2, 0x2, 0x759, 0x762, 
       0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x7, 0xa, 0x2, 0x2, 0x75b, 0x75c, 
       0x5, 0xac, 0x57, 0x2, 0x75c, 0x75d, 0x5, 0x130, 0x99, 0x2, 0x75d, 
       0x763, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 0x7, 0x48, 0x2, 0x2, 0x75f, 
       0x760, 0x5, 0xac, 0x57, 0x2, 0x760, 0x761, 0x5, 0x12e, 0x98, 0x2, 
       0x761, 0x763, 0x3, 0x2, 0x2, 0x2, 0x762, 0x75a, 0x3, 0x2, 0x2, 0x2, 
       0x762, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x763, 0x12d, 0x3, 0x2, 0x2, 0x2, 
       0x764, 0x766, 0x5, 0x15e, 0xb0, 0x2, 0x765, 0x764, 0x3, 0x2, 0x2, 
       0x2, 0x765, 0x766, 0x3, 0x2, 0x2, 0x2, 0x766, 0x767, 0x3, 0x2, 0x2, 
       0x2, 0x767, 0x768, 0x7, 0xa, 0x2, 0x2, 0x768, 0x769, 0x5, 0xac, 0x57, 
       0x2, 0x769, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76c, 0x5, 0x15e, 
       0xb0, 0x2, 0x76b, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x76c, 0x3, 0x2, 
       0x2, 0x2, 0x76c, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76e, 0x7, 0x48, 
       0x2, 0x2, 0x76e, 0x76f, 0x5, 0xac, 0x57, 0x2, 0x76f, 0x131, 0x3, 
       0x2, 0x2, 0x2, 0x770, 0x787, 0x7, 0x82, 0x2, 0x2, 0x771, 0x787, 0x7, 
       0x83, 0x2, 0x2, 0x772, 0x787, 0x7, 0x8a, 0x2, 0x2, 0x773, 0x787, 
       0x7, 0x8b, 0x2, 0x2, 0x774, 0x787, 0x7, 0x92, 0x2, 0x2, 0x775, 0x787, 
       0x7, 0x93, 0x2, 0x2, 0x776, 0x787, 0x7, 0x55, 0x2, 0x2, 0x777, 0x787, 
       0x7, 0x24, 0x2, 0x2, 0x778, 0x787, 0x7, 0x84, 0x2, 0x2, 0x779, 0x787, 
       0x7, 0x85, 0x2, 0x2, 0x77a, 0x787, 0x7, 0x86, 0x2, 0x2, 0x77b, 0x787, 
       0x7, 0x87, 0x2, 0x2, 0x77c, 0x787, 0x7, 0x88, 0x2, 0x2, 0x77d, 0x787, 
       0x7, 0x89, 0x2, 0x2, 0x77e, 0x787, 0x7, 0xa3, 0x2, 0x2, 0x77f, 0x787, 
       0x5, 0x178, 0xbd, 0x2, 0x780, 0x787, 0x7, 0x97, 0x2, 0x2, 0x781, 
       0x787, 0x7, 0x98, 0x2, 0x2, 0x782, 0x787, 0x7, 0x8e, 0x2, 0x2, 0x783, 
       0x787, 0x7, 0x8d, 0x2, 0x2, 0x784, 0x787, 0x7, 0x9a, 0x2, 0x2, 0x785, 
       0x787, 0x7, 0x99, 0x2, 0x2, 0x786, 0x770, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x771, 0x3, 0x2, 0x2, 0x2, 0x786, 0x772, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x773, 0x3, 0x2, 0x2, 0x2, 0x786, 0x774, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x775, 0x3, 0x2, 0x2, 0x2, 0x786, 0x776, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x777, 0x3, 0x2, 0x2, 0x2, 0x786, 0x778, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x779, 0x3, 0x2, 0x2, 0x2, 0x786, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x77b, 0x3, 0x2, 0x2, 0x2, 0x786, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x77d, 0x3, 0x2, 0x2, 0x2, 0x786, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x77f, 0x3, 0x2, 0x2, 0x2, 0x786, 0x780, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x781, 0x3, 0x2, 0x2, 0x2, 0x786, 0x782, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x783, 0x3, 0x2, 0x2, 0x2, 0x786, 0x784, 0x3, 0x2, 0x2, 0x2, 0x786, 
       0x785, 0x3, 0x2, 0x2, 0x2, 0x787, 0x133, 0x3, 0x2, 0x2, 0x2, 0x788, 
       0x789, 0x9, 0xd, 0x2, 0x2, 0x789, 0x78a, 0x7, 0x3d, 0x2, 0x2, 0x78a, 
       0x78b, 0x5, 0x6, 0x4, 0x2, 0x78b, 0x78c, 0x7, 0x7c, 0x2, 0x2, 0x78c, 
       0x78d, 0x5, 0x1a2, 0xd2, 0x2, 0x78d, 0x78e, 0x7, 0x7d, 0x2, 0x2, 
       0x78e, 0x135, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x790, 0x7, 0x80, 0x2, 0x2, 
       0x790, 0x791, 0x9, 0xe, 0x2, 0x2, 0x791, 0x793, 0x7, 0x7c, 0x2, 0x2, 
       0x792, 0x794, 0x5, 0x1a, 0xe, 0x2, 0x793, 0x792, 0x3, 0x2, 0x2, 0x2, 
       0x793, 0x794, 0x3, 0x2, 0x2, 0x2, 0x794, 0x795, 0x3, 0x2, 0x2, 0x2, 
       0x795, 0x796, 0x7, 0x7d, 0x2, 0x2, 0x796, 0x137, 0x3, 0x2, 0x2, 0x2, 
       0x797, 0x79a, 0x5, 0xac, 0x57, 0x2, 0x798, 0x79a, 0x7, 0x81, 0x2, 
       0x2, 0x799, 0x797, 0x3, 0x2, 0x2, 0x2, 0x799, 0x798, 0x3, 0x2, 0x2, 
       0x2, 0x79a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 0x7, 0x80, 0x2, 
       0x2, 0x79c, 0x79d, 0x5, 0xec, 0x77, 0x2, 0x79d, 0x13b, 0x3, 0x2, 
       0x2, 0x2, 0x79e, 0x7a2, 0x7, 0x78, 0x2, 0x2, 0x79f, 0x7a1, 0x5, 0x13e, 
       0xa0, 0x2, 0x7a0, 0x79f, 0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a4, 0x3, 0x2, 
       0x2, 0x2, 0x7a2, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a3, 0x3, 0x2, 
       0x2, 0x2, 0x7a3, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x7a2, 0x3, 0x2, 
       0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0x79, 0x2, 0x2, 0x7a6, 0x13d, 0x3, 0x2, 
       0x2, 0x2, 0x7a7, 0x7a9, 0x5, 0x15e, 0xb0, 0x2, 0x7a8, 0x7a7, 0x3, 
       0x2, 0x2, 0x2, 0x7a8, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7ab, 0x3, 
       0x2, 0x2, 0x2, 0x7aa, 0x7ac, 0x5, 0x100, 0x81, 0x2, 0x7ab, 0x7aa, 
       0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7b7, 
       0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7b8, 0x5, 0x104, 0x83, 0x2, 0x7ae, 0x7af, 
       0x7, 0x26, 0x2, 0x2, 0x7af, 0x7b1, 0x5, 0x6, 0x4, 0x2, 0x7b0, 0x7b2, 
       0x5, 0x172, 0xba, 0x2, 0x7b1, 0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b3, 
       0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b4, 
       0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b5, 0x7b6, 
       0x7, 0x81, 0x2, 0x2, 0x7b6, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7ad, 
       0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7ae, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x13f, 
       0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7c1, 0x5, 0x8, 0x5, 0x2, 0x7ba, 0x7bc, 
       0x9, 0xf, 0x2, 0x2, 0x7bb, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bf, 
       0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 
       0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7bd, 
       0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7c2, 0x5, 0x142, 0xa2, 0x2, 0x7c1, 0x7bd, 
       0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c1, 
       0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c4, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c9, 0x7, 0x7a, 0x2, 0x2, 0x7c6, 0x7c8, 
       0x7, 0x7f, 0x2, 0x2, 0x7c7, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7cb, 
       0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7ca, 
       0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x7c9, 
       0x3, 0x2, 0x2, 0x2, 0x7cc, 0x7cd, 0x7, 0x7b, 0x2, 0x2, 0x7cd, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7da, 0x7, 0x78, 0x2, 0x2, 0x7cf, 0x7d4, 
       0x5, 0x110, 0x89, 0x2, 0x7d0, 0x7d1, 0x7, 0x7f, 0x2, 0x2, 0x7d1, 
       0x7d3, 0x5, 0x110, 0x89, 0x2, 0x7d2, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d3, 
       0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d4, 
       0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7d6, 
       0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d9, 0x7, 0x7f, 0x2, 0x2, 0x7d8, 
       0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 
       0x7db, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x7da, 
       0x7db, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 
       0x7dd, 0x7, 0x79, 0x2, 0x2, 0x7dd, 0x145, 0x3, 0x2, 0x2, 0x2, 0x7de, 
       0x7df, 0x7, 0x8d, 0x2, 0x2, 0x7df, 0x7e4, 0x5, 0x148, 0xa5, 0x2, 
       0x7e0, 0x7e1, 0x7, 0x7f, 0x2, 0x2, 0x7e1, 0x7e3, 0x5, 0x148, 0xa5, 
       0x2, 0x7e2, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e6, 0x3, 0x2, 0x2, 
       0x2, 0x7e4, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e4, 0x7e5, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7e6, 0x7e4, 0x3, 0x2, 0x2, 
       0x2, 0x7e7, 0x7e8, 0x7, 0x8e, 0x2, 0x2, 0x7e8, 0x147, 0x3, 0x2, 0x2, 
       0x2, 0x7e9, 0x7eb, 0x5, 0x15e, 0xb0, 0x2, 0x7ea, 0x7e9, 0x3, 0x2, 
       0x2, 0x2, 0x7ea, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ed, 0x3, 0x2, 
       0x2, 0x2, 0x7ec, 0x7ee, 0x5, 0x14a, 0xa6, 0x2, 0x7ed, 0x7ec, 0x3, 
       0x2, 0x2, 0x2, 0x7ed, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ef, 0x3, 
       0x2, 0x2, 0x2, 0x7ef, 0x7f0, 0x5, 0x1a8, 0xd5, 0x2, 0x7f0, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0x9, 0x10, 0x2, 0x2, 0x7f2, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f4, 0x7, 0x80, 0x2, 0x2, 0x7f4, 0x7f5, 
       0x5, 0xec, 0x77, 0x2, 0x7f5, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7fa, 
       0x7, 0x78, 0x2, 0x2, 0x7f7, 0x7f9, 0x5, 0x150, 0xa9, 0x2, 0x7f8, 
       0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fa, 
       0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7fa, 0x7fb, 0x3, 0x2, 0x2, 0x2, 0x7fb, 
       0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fd, 
       0x7fe, 0x7, 0x79, 0x2, 0x2, 0x7fe, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x7ff, 
       0x801, 0x5, 0x15e, 0xb0, 0x2, 0x800, 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x800, 
       0x801, 0x3, 0x2, 0x2, 0x2, 0x801, 0x803, 0x3, 0x2, 0x2, 0x2, 0x802, 
       0x804, 0x7, 0x39, 0x2, 0x2, 0x803, 0x802, 0x3, 0x2, 0x2, 0x2, 0x803, 
       0x804, 0x3, 0x2, 0x2, 0x2, 0x804, 0x844, 0x3, 0x2, 0x2, 0x2, 0x805, 
       0x807, 0x7, 0x5a, 0x2, 0x2, 0x806, 0x805, 0x3, 0x2, 0x2, 0x2, 0x806, 
       0x807, 0x3, 0x2, 0x2, 0x2, 0x807, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x80e, 0x7, 0x47, 0x2, 0x2, 0x809, 0x80a, 0x7, 0x47, 0x2, 0x2, 0x80a, 
       0x80e, 0x7, 0x46, 0x2, 0x2, 0x80b, 0x80c, 0x7, 0x46, 0x2, 0x2, 0x80c, 
       0x80e, 0x7, 0x47, 0x2, 0x2, 0x80d, 0x808, 0x3, 0x2, 0x2, 0x2, 0x80d, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80d, 
       0x80e, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x3, 0x2, 0x2, 0x2, 0x80f, 
       0x82b, 0x5, 0x6, 0x4, 0x2, 0x810, 0x812, 0x5, 0x1a8, 0xd5, 0x2, 0x811, 
       0x813, 0x5, 0xe6, 0x74, 0x2, 0x812, 0x811, 0x3, 0x2, 0x2, 0x2, 0x812, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x813, 0x814, 0x3, 0x2, 0x2, 0x2, 0x814, 
       0x816, 0x7, 0x7c, 0x2, 0x2, 0x815, 0x817, 0x5, 0x118, 0x8d, 0x2, 
       0x816, 0x815, 0x3, 0x2, 0x2, 0x2, 0x816, 0x817, 0x3, 0x2, 0x2, 0x2, 
       0x817, 0x818, 0x3, 0x2, 0x2, 0x2, 0x818, 0x81a, 0x7, 0x7d, 0x2, 0x2, 
       0x819, 0x81b, 0x5, 0xee, 0x78, 0x2, 0x81a, 0x819, 0x3, 0x2, 0x2, 
       0x2, 0x81a, 0x81b, 0x3, 0x2, 0x2, 0x2, 0x81b, 0x81c, 0x3, 0x2, 0x2, 
       0x2, 0x81c, 0x81d, 0x7, 0x81, 0x2, 0x2, 0x81d, 0x82c, 0x3, 0x2, 0x2, 
       0x2, 0x81e, 0x81f, 0x5, 0x1a8, 0xd5, 0x2, 0x81f, 0x820, 0x7, 0x78, 
       0x2, 0x2, 0x820, 0x821, 0x5, 0x152, 0xaa, 0x2, 0x821, 0x822, 0x7, 
       0x79, 0x2, 0x2, 0x822, 0x82c, 0x3, 0x2, 0x2, 0x2, 0x823, 0x824, 0x7, 
       0x53, 0x2, 0x2, 0x824, 0x825, 0x7, 0x7a, 0x2, 0x2, 0x825, 0x826, 
       0x5, 0x118, 0x8d, 0x2, 0x826, 0x827, 0x7, 0x7b, 0x2, 0x2, 0x827, 
       0x828, 0x7, 0x78, 0x2, 0x2, 0x828, 0x829, 0x5, 0x152, 0xaa, 0x2, 
       0x829, 0x82a, 0x7, 0x79, 0x2, 0x2, 0x82a, 0x82c, 0x3, 0x2, 0x2, 0x2, 
       0x82b, 0x810, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x81e, 0x3, 0x2, 0x2, 0x2, 
       0x82b, 0x823, 0x3, 0x2, 0x2, 0x2, 0x82c, 0x845, 0x3, 0x2, 0x2, 0x2, 
       0x82d, 0x82f, 0x7, 0x5a, 0x2, 0x2, 0x82e, 0x82d, 0x3, 0x2, 0x2, 0x2, 
       0x82e, 0x82f, 0x3, 0x2, 0x2, 0x2, 0x82f, 0x830, 0x3, 0x2, 0x2, 0x2, 
       0x830, 0x831, 0x7, 0x5e, 0x2, 0x2, 0x831, 0x833, 0x5, 0x1a8, 0xd5, 
       0x2, 0x832, 0x834, 0x5, 0xe6, 0x74, 0x2, 0x833, 0x832, 0x3, 0x2, 
       0x2, 0x2, 0x833, 0x834, 0x3, 0x2, 0x2, 0x2, 0x834, 0x835, 0x3, 0x2, 
       0x2, 0x2, 0x835, 0x837, 0x7, 0x7c, 0x2, 0x2, 0x836, 0x838, 0x5, 0x118, 
       0x8d, 0x2, 0x837, 0x836, 0x3, 0x2, 0x2, 0x2, 0x837, 0x838, 0x3, 0x2, 
       0x2, 0x2, 0x838, 0x839, 0x3, 0x2, 0x2, 0x2, 0x839, 0x83b, 0x7, 0x7d, 
       0x2, 0x2, 0x83a, 0x83c, 0x5, 0xee, 0x78, 0x2, 0x83b, 0x83a, 0x3, 
       0x2, 0x2, 0x2, 0x83b, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83d, 0x3, 
       0x2, 0x2, 0x2, 0x83d, 0x83e, 0x7, 0x81, 0x2, 0x2, 0x83e, 0x845, 0x3, 
       0x2, 0x2, 0x2, 0x83f, 0x840, 0x7, 0x21, 0x2, 0x2, 0x840, 0x841, 0x5, 
       0x6, 0x4, 0x2, 0x841, 0x842, 0x5, 0x1a8, 0xd5, 0x2, 0x842, 0x843, 
       0x7, 0x81, 0x2, 0x2, 0x843, 0x845, 0x3, 0x2, 0x2, 0x2, 0x844, 0x806, 
       0x3, 0x2, 0x2, 0x2, 0x844, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x844, 0x83f, 
       0x3, 0x2, 0x2, 0x2, 0x845, 0x151, 0x3, 0x2, 0x2, 0x2, 0x846, 0x848, 
       0x5, 0x15e, 0xb0, 0x2, 0x847, 0x846, 0x3, 0x2, 0x2, 0x2, 0x847, 0x848, 
       0x3, 0x2, 0x2, 0x2, 0x848, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x849, 0x84a, 
       0x7, 0x2a, 0x2, 0x2, 0x84a, 0x850, 0x7, 0x81, 0x2, 0x2, 0x84b, 0x84d, 
       0x5, 0x15e, 0xb0, 0x2, 0x84c, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84c, 0x84d, 
       0x3, 0x2, 0x2, 0x2, 0x84d, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x84f, 
       0x7, 0x4c, 0x2, 0x2, 0x84f, 0x851, 0x7, 0x81, 0x2, 0x2, 0x850, 0x84c, 
       0x3, 0x2, 0x2, 0x2, 0x850, 0x851, 0x3, 0x2, 0x2, 0x2, 0x851, 0x85c, 
       0x3, 0x2, 0x2, 0x2, 0x852, 0x853, 0x7, 0x4c, 0x2, 0x2, 0x853, 0x859, 
       0x7, 0x81, 0x2, 0x2, 0x854, 0x856, 0x5, 0x15e, 0xb0, 0x2, 0x855, 
       0x854, 0x3, 0x2, 0x2, 0x2, 0x855, 0x856, 0x3, 0x2, 0x2, 0x2, 0x856, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x857, 0x858, 0x7, 0x2a, 0x2, 0x2, 0x858, 
       0x85a, 0x7, 0x81, 0x2, 0x2, 0x859, 0x855, 0x3, 0x2, 0x2, 0x2, 0x859, 
       0x85a, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85b, 
       0x849, 0x3, 0x2, 0x2, 0x2, 0x85b, 0x852, 0x3, 0x2, 0x2, 0x2, 0x85c, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x85e, 0x7, 0x80, 0x2, 0x2, 0x85e, 
       0x85f, 0x5, 0x6, 0x4, 0x2, 0x85f, 0x155, 0x3, 0x2, 0x2, 0x2, 0x860, 
       0x86c, 0x7, 0x78, 0x2, 0x2, 0x861, 0x866, 0x5, 0x158, 0xad, 0x2, 
       0x862, 0x863, 0x7, 0x7f, 0x2, 0x2, 0x863, 0x865, 0x5, 0x158, 0xad, 
       0x2, 0x864, 0x862, 0x3, 0x2, 0x2, 0x2, 0x865, 0x868, 0x3, 0x2, 0x2, 
       0x2, 0x866, 0x864, 0x3, 0x2, 0x2, 0x2, 0x866, 0x867, 0x3, 0x2, 0x2, 
       0x2, 0x867, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x868, 0x866, 0x3, 0x2, 0x2, 
       0x2, 0x869, 0x86b, 0x7, 0x7f, 0x2, 0x2, 0x86a, 0x869, 0x3, 0x2, 0x2, 
       0x2, 0x86a, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86d, 0x3, 0x2, 0x2, 
       0x2, 0x86c, 0x861, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 0x3, 0x2, 0x2, 
       0x2, 0x86d, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 0x7, 0x79, 0x2, 
       0x2, 0x86f, 0x157, 0x3, 0x2, 0x2, 0x2, 0x870, 0x872, 0x5, 0x15e, 
       0xb0, 0x2, 0x871, 0x870, 0x3, 0x2, 0x2, 0x2, 0x871, 0x872, 0x3, 0x2, 
       0x2, 0x2, 0x872, 0x873, 0x3, 0x2, 0x2, 0x2, 0x873, 0x876, 0x5, 0x1a8, 
       0xd5, 0x2, 0x874, 0x875, 0x7, 0x8c, 0x2, 0x2, 0x875, 0x877, 0x5, 
       0x1e, 0x10, 0x2, 0x876, 0x874, 0x3, 0x2, 0x2, 0x2, 0x876, 0x877, 
       0x3, 0x2, 0x2, 0x2, 0x877, 0x159, 0x3, 0x2, 0x2, 0x2, 0x878, 0x879, 
       0x7, 0x7a, 0x2, 0x2, 0x879, 0x87a, 0x5, 0x15c, 0xaf, 0x2, 0x87a, 
       0x87b, 0x7, 0x80, 0x2, 0x2, 0x87b, 0x87d, 0x5, 0x164, 0xb3, 0x2, 
       0x87c, 0x87e, 0x7, 0x7f, 0x2, 0x2, 0x87d, 0x87c, 0x3, 0x2, 0x2, 0x2, 
       0x87d, 0x87e, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x87f, 0x3, 0x2, 0x2, 0x2, 
       0x87f, 0x880, 0x7, 0x7b, 0x2, 0x2, 0x880, 0x15b, 0x3, 0x2, 0x2, 0x2, 
       0x881, 0x884, 0x5, 0x182, 0xc2, 0x2, 0x882, 0x884, 0x5, 0x1a8, 0xd5, 
       0x2, 0x883, 0x881, 0x3, 0x2, 0x2, 0x2, 0x883, 0x882, 0x3, 0x2, 0x2, 
       0x2, 0x884, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x885, 0x887, 0x5, 0x160, 
       0xb1, 0x2, 0x886, 0x885, 0x3, 0x2, 0x2, 0x2, 0x887, 0x888, 0x3, 0x2, 
       0x2, 0x2, 0x888, 0x886, 0x3, 0x2, 0x2, 0x2, 0x888, 0x889, 0x3, 0x2, 
       0x2, 0x2, 0x889, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88e, 0x7, 0x7a, 
       0x2, 0x2, 0x88b, 0x88c, 0x5, 0x162, 0xb2, 0x2, 0x88c, 0x88d, 0x7, 
       0x80, 0x2, 0x2, 0x88d, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88e, 0x88b, 0x3, 
       0x2, 0x2, 0x2, 0x88e, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x890, 0x3, 
       0x2, 0x2, 0x2, 0x890, 0x892, 0x5, 0x164, 0xb3, 0x2, 0x891, 0x893, 
       0x7, 0x7f, 0x2, 0x2, 0x892, 0x891, 0x3, 0x2, 0x2, 0x2, 0x892, 0x893, 
       0x3, 0x2, 0x2, 0x2, 0x893, 0x894, 0x3, 0x2, 0x2, 0x2, 0x894, 0x895, 
       0x7, 0x7b, 0x2, 0x2, 0x895, 0x161, 0x3, 0x2, 0x2, 0x2, 0x896, 0x899, 
       0x5, 0x182, 0xc2, 0x2, 0x897, 0x899, 0x5, 0x1a8, 0xd5, 0x2, 0x898, 
       0x896, 0x3, 0x2, 0x2, 0x2, 0x898, 0x897, 0x3, 0x2, 0x2, 0x2, 0x899, 
       0x163, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x89f, 0x5, 0x166, 0xb4, 0x2, 0x89b, 
       0x89c, 0x7, 0x7f, 0x2, 0x2, 0x89c, 0x89e, 0x5, 0x166, 0xb4, 0x2, 
       0x89d, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x8a1, 0x3, 0x2, 0x2, 0x2, 
       0x89f, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a0, 0x3, 0x2, 0x2, 0x2, 
       0x8a0, 0x165, 0x3, 0x2, 0x2, 0x2, 0x8a1, 0x89f, 0x3, 0x2, 0x2, 0x2, 
       0x8a2, 0x8af, 0x5, 0x4, 0x3, 0x2, 0x8a3, 0x8ac, 0x7, 0x7c, 0x2, 0x2, 
       0x8a4, 0x8a9, 0x5, 0x168, 0xb5, 0x2, 0x8a5, 0x8a6, 0x7, 0x7f, 0x2, 
       0x2, 0x8a6, 0x8a8, 0x5, 0x168, 0xb5, 0x2, 0x8a7, 0x8a5, 0x3, 0x2, 
       0x2, 0x2, 0x8a8, 0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x8a7, 0x3, 0x2, 
       0x2, 0x2, 0x8a9, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ad, 0x3, 0x2, 
       0x2, 0x2, 0x8ab, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8a4, 0x3, 0x2, 
       0x2, 0x2, 0x8ac, 0x8ad, 0x3, 0x2, 0x2, 0x2, 0x8ad, 0x8ae, 0x3, 0x2, 
       0x2, 0x2, 0x8ae, 0x8b0, 0x7, 0x7d, 0x2, 0x2, 0x8af, 0x8a3, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x167, 0x3, 0x2, 
       0x2, 0x2, 0x8b1, 0x8b2, 0x5, 0x1a8, 0xd5, 0x2, 0x8b2, 0x8b3, 0x7, 
       0x80, 0x2, 0x2, 0x8b3, 0x8b5, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b1, 0x3, 
       0x2, 0x2, 0x2, 0x8b4, 0x8b5, 0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8b6, 0x3, 
       0x2, 0x2, 0x2, 0x8b6, 0x8b7, 0x5, 0x1e, 0x10, 0x2, 0x8b7, 0x169, 
       0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8bb, 0x5, 0xe, 0x8, 0x2, 0x8b9, 0x8bb, 
       0x5, 0x16, 0xc, 0x2, 0x8ba, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8b9, 
       0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8bf, 
       0x5, 0x142, 0xa2, 0x2, 0x8bd, 0x8bf, 0x7, 0x8f, 0x2, 0x2, 0x8be, 
       0x8bc, 0x3, 0x2, 0x2, 0x2, 0x8be, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8bf, 
       0x8c2, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x8c0, 
       0x8c1, 0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x8c2, 
       0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8c3, 0x8c4, 0x7, 0x84, 0x2, 0x2, 0x8c4, 
       0x8c8, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c6, 0x7, 0x5e, 0x2, 0x2, 0x8c6, 
       0x8c8, 0x7, 0x84, 0x2, 0x2, 0x8c7, 0x8ba, 0x3, 0x2, 0x2, 0x2, 0x8c7, 
       0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x8c9, 
       0x8ce, 0x5, 0x16e, 0xb8, 0x2, 0x8ca, 0x8cb, 0x7, 0x7f, 0x2, 0x2, 
       0x8cb, 0x8cd, 0x5, 0x16e, 0xb8, 0x2, 0x8cc, 0x8ca, 0x3, 0x2, 0x2, 
       0x2, 0x8cd, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8cc, 0x3, 0x2, 0x2, 
       0x2, 0x8ce, 0x8cf, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x16d, 0x3, 0x2, 0x2, 
       0x2, 0x8d0, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8d2, 0x5, 0x1a8, 
       0xd5, 0x2, 0x8d2, 0x8d3, 0x7, 0x8c, 0x2, 0x2, 0x8d3, 0x8d4, 0x5, 
       0x170, 0xb9, 0x2, 0x8d4, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8d7, 
       0x7, 0x87, 0x2, 0x2, 0x8d6, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d7, 
       0x3, 0x2, 0x2, 0x2, 0x8d7, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8d8, 0x8db, 
       0x5, 0x1e, 0x10, 0x2, 0x8d9, 0x8db, 0x5, 0x174, 0xbb, 0x2, 0x8da, 
       0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x8d9, 0x3, 0x2, 0x2, 0x2, 0x8db, 
       0x171, 0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8dd, 0x5, 0x1a8, 0xd5, 0x2, 0x8dd, 
       0x8de, 0x7, 0x7a, 0x2, 0x2, 0x8de, 0x8df, 0x5, 0x1e, 0x10, 0x2, 0x8df, 
       0x8e0, 0x7, 0x7b, 0x2, 0x2, 0x8e0, 0x173, 0x3, 0x2, 0x2, 0x2, 0x8e1, 
       0x8e2, 0x7, 0x4e, 0x2, 0x2, 0x8e2, 0x8e3, 0x5, 0x6, 0x4, 0x2, 0x8e3, 
       0x8e4, 0x7, 0x7a, 0x2, 0x2, 0x8e4, 0x8e5, 0x5, 0x1e, 0x10, 0x2, 0x8e5, 
       0x8e6, 0x7, 0x7b, 0x2, 0x2, 0x8e6, 0x8ff, 0x3, 0x2, 0x2, 0x2, 0x8e7, 
       0x8e9, 0x7, 0x4e, 0x2, 0x2, 0x8e8, 0x8ea, 0x5, 0x6, 0x4, 0x2, 0x8e9, 
       0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8e9, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8ea, 
       0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8eb, 0x8ed, 0x7, 0x7a, 0x2, 0x2, 0x8ec, 
       0x8ee, 0x5, 0x1e, 0x10, 0x2, 0x8ed, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ed, 
       0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8ef, 
       0x8f0, 0x7, 0x7b, 0x2, 0x2, 0x8f0, 0x8f1, 0x7, 0x78, 0x2, 0x2, 0x8f1, 
       0x8f6, 0x5, 0x1e, 0x10, 0x2, 0x8f2, 0x8f3, 0x7, 0x7f, 0x2, 0x2, 0x8f3, 
       0x8f5, 0x5, 0x1e, 0x10, 0x2, 0x8f4, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f5, 
       0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x8f6, 
       0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f7, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8f8, 
       0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fb, 0x7, 0x7f, 0x2, 0x2, 0x8fa, 
       0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8fa, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x8fb, 
       0x8fc, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x8fd, 0x7, 0x79, 0x2, 0x2, 0x8fd, 
       0x8ff, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x8fe, 
       0x8e7, 0x3, 0x2, 0x2, 0x2, 0x8ff, 0x175, 0x3, 0x2, 0x2, 0x2, 0x900, 
       0x901, 0x7, 0x8c, 0x2, 0x2, 0x901, 0x902, 0x7, 0x8e, 0x2, 0x2, 0x902, 
       0x903, 0x6, 0xbc, 0x2, 0x3, 0x903, 0x177, 0x3, 0x2, 0x2, 0x2, 0x904, 
       0x905, 0x7, 0x8e, 0x2, 0x2, 0x905, 0x906, 0x7, 0x8e, 0x2, 0x2, 0x906, 
       0x907, 0x6, 0xbd, 0x3, 0x3, 0x907, 0x179, 0x3, 0x2, 0x2, 0x2, 0x908, 
       0x909, 0x7, 0x8e, 0x2, 0x2, 0x909, 0x90a, 0x7, 0x9a, 0x2, 0x2, 0x90a, 
       0x90b, 0x6, 0xbe, 0x4, 0x3, 0x90b, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x90c, 
       0x915, 0x5, 0x17e, 0xc0, 0x2, 0x90d, 0x915, 0x5, 0x180, 0xc1, 0x2, 
       0x90e, 0x915, 0x7, 0x66, 0x2, 0x2, 0x90f, 0x915, 0x7, 0x67, 0x2, 
       0x2, 0x910, 0x915, 0x7, 0x68, 0x2, 0x2, 0x911, 0x915, 0x7, 0x69, 
       0x2, 0x2, 0x912, 0x915, 0x7, 0x6a, 0x2, 0x2, 0x913, 0x915, 0x7, 0x3a, 
       0x2, 0x2, 0x914, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x914, 0x90d, 0x3, 0x2, 
       0x2, 0x2, 0x914, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x914, 0x90f, 0x3, 0x2, 
       0x2, 0x2, 0x914, 0x910, 0x3, 0x2, 0x2, 0x2, 0x914, 0x911, 0x3, 0x2, 
       0x2, 0x2, 0x914, 0x912, 0x3, 0x2, 0x2, 0x2, 0x914, 0x913, 0x3, 0x2, 
       0x2, 0x2, 0x915, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 0x9, 0x11, 
       0x2, 0x2, 0x917, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x918, 0x919, 0x9, 0x12, 
       0x2, 0x2, 0x919, 0x181, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x91b, 0x9, 0x13, 
       0x2, 0x2, 0x91b, 0x183, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x7, 0x17, 
       0x2, 0x2, 0x91d, 0x91f, 0x5, 0x1a8, 0xd5, 0x2, 0x91e, 0x920, 0x5, 
       0xe6, 0x74, 0x2, 0x91f, 0x91e, 0x3, 0x2, 0x2, 0x2, 0x91f, 0x920, 
       0x3, 0x2, 0x2, 0x2, 0x920, 0x922, 0x3, 0x2, 0x2, 0x2, 0x921, 0x923, 
       0x5, 0xea, 0x76, 0x2, 0x922, 0x921, 0x3, 0x2, 0x2, 0x2, 0x922, 0x923, 
       0x3, 0x2, 0x2, 0x2, 0x923, 0x925, 0x3, 0x2, 0x2, 0x2, 0x924, 0x926, 
       0x5, 0xee, 0x78, 0x2, 0x925, 0x924, 0x3, 0x2, 0x2, 0x2, 0x925, 0x926, 
       0x3, 0x2, 0x2, 0x2, 0x926, 0x927, 0x3, 0x2, 0x2, 0x2, 0x927, 0x929, 
       0x5, 0xfa, 0x7e, 0x2, 0x928, 0x92a, 0x7, 0x81, 0x2, 0x2, 0x929, 0x928, 
       0x3, 0x2, 0x2, 0x2, 0x929, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x92a, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x92b, 0x92d, 0x9, 0x14, 0x2, 0x2, 0x92c, 0x92b, 
       0x3, 0x2, 0x2, 0x2, 0x92c, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 
       0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 0x7, 0x51, 0x2, 0x2, 0x92f, 0x931, 
       0x5, 0x1a8, 0xd5, 0x2, 0x930, 0x932, 0x5, 0xe6, 0x74, 0x2, 0x931, 
       0x930, 0x3, 0x2, 0x2, 0x2, 0x931, 0x932, 0x3, 0x2, 0x2, 0x2, 0x932, 
       0x934, 0x3, 0x2, 0x2, 0x2, 0x933, 0x935, 0x5, 0x13a, 0x9e, 0x2, 0x934, 
       0x933, 0x3, 0x2, 0x2, 0x2, 0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 
       0x937, 0x3, 0x2, 0x2, 0x2, 0x936, 0x938, 0x5, 0xee, 0x78, 0x2, 0x937, 
       0x936, 0x3, 0x2, 0x2, 0x2, 0x937, 0x938, 0x3, 0x2, 0x2, 0x2, 0x938, 
       0x939, 0x3, 0x2, 0x2, 0x2, 0x939, 0x93b, 0x5, 0x13c, 0x9f, 0x2, 0x93a, 
       0x93c, 0x7, 0x81, 0x2, 0x2, 0x93b, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93b, 
       0x93c, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x187, 0x3, 0x2, 0x2, 0x2, 0x93d, 
       0x93e, 0x7, 0x30, 0x2, 0x2, 0x93e, 0x940, 0x5, 0x1a8, 0xd5, 0x2, 
       0x93f, 0x941, 0x5, 0x146, 0xa4, 0x2, 0x940, 0x93f, 0x3, 0x2, 0x2, 
       0x2, 0x940, 0x941, 0x3, 0x2, 0x2, 0x2, 0x941, 0x943, 0x3, 0x2, 0x2, 
       0x2, 0x942, 0x944, 0x5, 0x14c, 0xa7, 0x2, 0x943, 0x942, 0x3, 0x2, 
       0x2, 0x2, 0x943, 0x944, 0x3, 0x2, 0x2, 0x2, 0x944, 0x946, 0x3, 0x2, 
       0x2, 0x2, 0x945, 0x947, 0x5, 0xee, 0x78, 0x2, 0x946, 0x945, 0x3, 
       0x2, 0x2, 0x2, 0x946, 0x947, 0x3, 0x2, 0x2, 0x2, 0x947, 0x948, 0x3, 
       0x2, 0x2, 0x2, 0x948, 0x94a, 0x5, 0xfa, 0x7e, 0x2, 0x949, 0x94b, 
       0x7, 0x81, 0x2, 0x2, 0x94a, 0x949, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94b, 
       0x3, 0x2, 0x2, 0x2, 0x94b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x94c, 0x94d, 
       0x7, 0x1f, 0x2, 0x2, 0x94d, 0x94f, 0x5, 0x1a8, 0xd5, 0x2, 0x94e, 
       0x950, 0x5, 0x154, 0xab, 0x2, 0x94f, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x94f, 
       0x950, 0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 0x3, 0x2, 0x2, 0x2, 0x951, 
       0x953, 0x5, 0x156, 0xac, 0x2, 0x952, 0x954, 0x7, 0x81, 0x2, 0x2, 
       0x953, 0x952, 0x3, 0x2, 0x2, 0x2, 0x953, 0x954, 0x3, 0x2, 0x2, 0x2, 
       0x954, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 0x7, 0x1b, 0x2, 0x2, 
       0x956, 0x957, 0x5, 0x112, 0x8a, 0x2, 0x957, 0x959, 0x5, 0x1a8, 0xd5, 
       0x2, 0x958, 0x95a, 0x5, 0x146, 0xa4, 0x2, 0x959, 0x958, 0x3, 0x2, 
       0x2, 0x2, 0x959, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 0x3, 0x2, 
       0x2, 0x2, 0x95b, 0x95d, 0x7, 0x7c, 0x2, 0x2, 0x95c, 0x95e, 0x5, 0x118, 
       0x8d, 0x2, 0x95d, 0x95c, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x95e, 0x3, 0x2, 
       0x2, 0x2, 0x95e, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x961, 0x7, 0x7d, 
       0x2, 0x2, 0x960, 0x962, 0x5, 0xee, 0x78, 0x2, 0x961, 0x960, 0x3, 
       0x2, 0x2, 0x2, 0x961, 0x962, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 0x3, 
       0x2, 0x2, 0x2, 0x963, 0x964, 0x7, 0x81, 0x2, 0x2, 0x964, 0x18d, 0x3, 
       0x2, 0x2, 0x2, 0x965, 0x966, 0x7, 0x21, 0x2, 0x2, 0x966, 0x96f, 0x5, 
       0x6, 0x4, 0x2, 0x967, 0x968, 0x5, 0x10c, 0x87, 0x2, 0x968, 0x969, 
       0x7, 0x81, 0x2, 0x2, 0x969, 0x970, 0x3, 0x2, 0x2, 0x2, 0x96a, 0x96b, 
       0x5, 0x114, 0x8b, 0x2, 0x96b, 0x96c, 0x7, 0x78, 0x2, 0x2, 0x96c, 
       0x96d, 0x5, 0x12c, 0x97, 0x2, 0x96d, 0x96e, 0x7, 0x79, 0x2, 0x2, 
       0x96e, 0x970, 0x3, 0x2, 0x2, 0x2, 0x96f, 0x967, 0x3, 0x2, 0x2, 0x2, 
       0x96f, 0x96a, 0x3, 0x2, 0x2, 0x2, 0x970, 0x18f, 0x3, 0x2, 0x2, 0x2, 
       0x971, 0x972, 0x5, 0x10c, 0x87, 0x2, 0x972, 0x973, 0x7, 0x81, 0x2, 
       0x2, 0x973, 0x191, 0x3, 0x2, 0x2, 0x2, 0x974, 0x982, 0x5, 0x114, 
  };
  static const uint16_t serializedATNSegment1[] = {
    0x8b, 0x2, 0x975, 0x976, 0x7, 0x78, 0x2, 0x2, 0x976, 0x977, 0x5, 0x122, 
       0x92, 0x2, 0x977, 0x97c, 0x7, 0x79, 0x2, 0x2, 0x978, 0x979, 0x7, 
       0x8c, 0x2, 0x2, 0x979, 0x97a, 0x5, 0x110, 0x89, 0x2, 0x97a, 0x97b, 
       0x7, 0x81, 0x2, 0x2, 0x97b, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x978, 
       0x3, 0x2, 0x2, 0x2, 0x97c, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x97d, 0x983, 
       0x3, 0x2, 0x2, 0x2, 0x97e, 0x97f, 0x5, 0x176, 0xbc, 0x2, 0x97f, 0x980, 
       0x5, 0x4c, 0x27, 0x2, 0x980, 0x981, 0x7, 0x81, 0x2, 0x2, 0x981, 0x983, 
       0x3, 0x2, 0x2, 0x2, 0x982, 0x975, 0x3, 0x2, 0x2, 0x2, 0x982, 0x97e, 
       0x3, 0x2, 0x2, 0x2, 0x983, 0x193, 0x3, 0x2, 0x2, 0x2, 0x984, 0x985, 
       0x7, 0x18, 0x2, 0x2, 0x985, 0x986, 0x5, 0x6, 0x4, 0x2, 0x986, 0x987, 
       0x5, 0x108, 0x85, 0x2, 0x987, 0x988, 0x7, 0x81, 0x2, 0x2, 0x988, 
       0x195, 0x3, 0x2, 0x2, 0x2, 0x989, 0x98a, 0x7, 0x53, 0x2, 0x2, 0x98a, 
       0x98b, 0x7, 0x7a, 0x2, 0x2, 0x98b, 0x98c, 0x5, 0x118, 0x8d, 0x2, 
       0x98c, 0x995, 0x7, 0x7b, 0x2, 0x2, 0x98d, 0x98e, 0x7, 0x78, 0x2, 
       0x2, 0x98e, 0x98f, 0x5, 0x122, 0x92, 0x2, 0x98f, 0x990, 0x7, 0x79, 
       0x2, 0x2, 0x990, 0x996, 0x3, 0x2, 0x2, 0x2, 0x991, 0x992, 0x5, 0x176, 
       0xbc, 0x2, 0x992, 0x993, 0x5, 0x4c, 0x27, 0x2, 0x993, 0x994, 0x7, 
       0x81, 0x2, 0x2, 0x994, 0x996, 0x3, 0x2, 0x2, 0x2, 0x995, 0x98d, 0x3, 
       0x2, 0x2, 0x2, 0x995, 0x991, 0x3, 0x2, 0x2, 0x2, 0x996, 0x197, 0x3, 
       0x2, 0x2, 0x2, 0x997, 0x998, 0x7, 0x8b, 0x2, 0x2, 0x998, 0x999, 0x5, 
       0x1a8, 0xd5, 0x2, 0x999, 0x99a, 0x7, 0x7c, 0x2, 0x2, 0x99a, 0x99b, 
       0x7, 0x7d, 0x2, 0x2, 0x99b, 0x99c, 0x5, 0x138, 0x9d, 0x2, 0x99c, 
       0x199, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99e, 0x5, 0x1a8, 0xd5, 0x2, 0x99e, 
       0x9a0, 0x7, 0x7c, 0x2, 0x2, 0x99f, 0x9a1, 0x5, 0x118, 0x8d, 0x2, 
       0x9a0, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 0x3, 0x2, 0x2, 0x2, 
       0x9a1, 0x9a2, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9a4, 0x7, 0x7d, 0x2, 0x2, 
       0x9a3, 0x9a5, 0x5, 0x136, 0x9c, 0x2, 0x9a4, 0x9a3, 0x3, 0x2, 0x2, 
       0x2, 0x9a4, 0x9a5, 0x3, 0x2, 0x2, 0x2, 0x9a5, 0x9a6, 0x3, 0x2, 0x2, 
       0x2, 0x9a6, 0x9a7, 0x5, 0x138, 0x9d, 0x2, 0x9a7, 0x19b, 0x3, 0x2, 
       0x2, 0x2, 0x9a8, 0x9aa, 0x5, 0x19e, 0xd0, 0x2, 0x9a9, 0x9ab, 0x5, 
       0xe6, 0x74, 0x2, 0x9aa, 0x9a9, 0x3, 0x2, 0x2, 0x2, 0x9aa, 0x9ab, 
       0x3, 0x2, 0x2, 0x2, 0x9ab, 0x9ac, 0x3, 0x2, 0x2, 0x2, 0x9ac, 0x9ae, 
       0x7, 0x7c, 0x2, 0x2, 0x9ad, 0x9af, 0x5, 0x118, 0x8d, 0x2, 0x9ae, 
       0x9ad, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x9af, 
       0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9b0, 0x9b2, 0x7, 0x7d, 0x2, 0x2, 0x9b1, 
       0x9b3, 0x5, 0xee, 0x78, 0x2, 0x9b2, 0x9b1, 0x3, 0x2, 0x2, 0x2, 0x9b2, 
       0x9b3, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b9, 0x3, 0x2, 0x2, 0x2, 0x9b4, 
       0x9ba, 0x5, 0x116, 0x8c, 0x2, 0x9b5, 0x9b6, 0x5, 0x176, 0xbc, 0x2, 
       0x9b6, 0x9b7, 0x5, 0x4c, 0x27, 0x2, 0x9b7, 0x9b8, 0x7, 0x81, 0x2, 
       0x2, 0x9b8, 0x9ba, 0x3, 0x2, 0x2, 0x2, 0x9b9, 0x9b4, 0x3, 0x2, 0x2, 
       0x2, 0x9b9, 0x9b5, 0x3, 0x2, 0x2, 0x2, 0x9ba, 0x19d, 0x3, 0x2, 0x2, 
       0x2, 0x9bb, 0x9c1, 0x5, 0x1a8, 0xd5, 0x2, 0x9bc, 0x9bd, 0x5, 0x1a8, 
       0xd5, 0x2, 0x9bd, 0x9be, 0x7, 0x90, 0x2, 0x2, 0x9be, 0x9bf, 0x5, 
       0x1a8, 0xd5, 0x2, 0x9bf, 0x9c1, 0x3, 0x2, 0x2, 0x2, 0x9c0, 0x9bb, 
       0x3, 0x2, 0x2, 0x2, 0x9c0, 0x9bc, 0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9c9, 
       0x3, 0x2, 0x2, 0x2, 0x9c2, 0x9c4, 0x5, 0x18, 0xd, 0x2, 0x9c3, 0x9c2, 
       0x3, 0x2, 0x2, 0x2, 0x9c3, 0x9c4, 0x3, 0x2, 0x2, 0x2, 0x9c4, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9c5, 0x9c6, 0x7, 0x7e, 0x2, 0x2, 0x9c6, 0x9c8, 
       0x5, 0x1a8, 0xd5, 0x2, 0x9c7, 0x9c3, 0x3, 0x2, 0x2, 0x2, 0x9c8, 0x9cb, 
       0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9c7, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9ca, 
       0x3, 0x2, 0x2, 0x2, 0x9ca, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x9cb, 0x9c9, 
       0x3, 0x2, 0x2, 0x2, 0x9cc, 0x9cd, 0x7, 0x3d, 0x2, 0x2, 0x9cd, 0x9ce, 
       0x5, 0x132, 0x9a, 0x2, 0x9ce, 0x9d0, 0x7, 0x7c, 0x2, 0x2, 0x9cf, 
       0x9d1, 0x7, 0x2f, 0x2, 0x2, 0x9d0, 0x9cf, 0x3, 0x2, 0x2, 0x2, 0x9d0, 
       0x9d1, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d2, 0x3, 0x2, 0x2, 0x2, 0x9d2, 
       0x9d8, 0x5, 0x1a2, 0xd2, 0x2, 0x9d3, 0x9d5, 0x7, 0x7f, 0x2, 0x2, 
       0x9d4, 0x9d6, 0x7, 0x2f, 0x2, 0x2, 0x9d5, 0x9d4, 0x3, 0x2, 0x2, 0x2, 
       0x9d5, 0x9d6, 0x3, 0x2, 0x2, 0x2, 0x9d6, 0x9d7, 0x3, 0x2, 0x2, 0x2, 
       0x9d7, 0x9d9, 0x5, 0x1a2, 0xd2, 0x2, 0x9d8, 0x9d3, 0x3, 0x2, 0x2, 
       0x2, 0x9d8, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9d9, 0x9da, 0x3, 0x2, 0x2, 
       0x2, 0x9da, 0x9e0, 0x7, 0x7d, 0x2, 0x2, 0x9db, 0x9e1, 0x5, 0x138, 
       0x9d, 0x2, 0x9dc, 0x9dd, 0x5, 0x176, 0xbc, 0x2, 0x9dd, 0x9de, 0x5, 
       0x4c, 0x27, 0x2, 0x9de, 0x9df, 0x7, 0x81, 0x2, 0x2, 0x9df, 0x9e1, 
       0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9db, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9dc, 
       0x3, 0x2, 0x2, 0x2, 0x9e1, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x9e2, 0x9e3, 
       0x5, 0x6, 0x4, 0x2, 0x9e3, 0x9e6, 0x5, 0x1a8, 0xd5, 0x2, 0x9e4, 0x9e5, 
       0x7, 0x8c, 0x2, 0x2, 0x9e5, 0x9e7, 0x5, 0x1e, 0x10, 0x2, 0x9e6, 0x9e4, 
       0x3, 0x2, 0x2, 0x2, 0x9e6, 0x9e7, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x1a3, 
       0x3, 0x2, 0x2, 0x2, 0x9e8, 0x9ea, 0x7, 0x7c, 0x2, 0x2, 0x9e9, 0x9eb, 
       0x5, 0x1a, 0xe, 0x2, 0x9ea, 0x9e9, 0x3, 0x2, 0x2, 0x2, 0x9ea, 0x9eb, 
       0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9ec, 0x9ed, 
       0x7, 0x7d, 0x2, 0x2, 0x9ed, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x9ee, 0x9f0, 
       0x7, 0x7c, 0x2, 0x2, 0x9ef, 0x9f1, 0x5, 0x1a, 0xe, 0x2, 0x9f0, 0x9ef, 
       0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9f1, 0x3, 0x2, 0x2, 0x2, 0x9f1, 0x9f2, 
       0x3, 0x2, 0x2, 0x2, 0x9f2, 0x9f4, 0x7, 0x7d, 0x2, 0x2, 0x9f3, 0x9f5, 
       0x5, 0x5a, 0x2e, 0x2, 0x9f4, 0x9f3, 0x3, 0x2, 0x2, 0x2, 0x9f4, 0x9f5, 
       0x3, 0x2, 0x2, 0x2, 0x9f5, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f7, 
       0x9, 0x15, 0x2, 0x2, 0x9f7, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x1ab, 
       0x1ae, 0x1b4, 0x1b7, 0x1bc, 0x1c0, 0x1c7, 0x1c9, 0x1d1, 0x1d9, 0x1df, 
       0x1e3, 0x1e7, 0x1f0, 0x1f8, 0x202, 0x208, 0x20b, 0x20f, 0x217, 0x21c, 
       0x226, 0x233, 0x23b, 0x241, 0x243, 0x24a, 0x252, 0x25a, 0x262, 0x26a, 
       0x272, 0x27c, 0x27e, 0x284, 0x289, 0x291, 0x299, 0x2a1, 0x2a3, 0x2a6, 
       0x2ad, 0x2b2, 0x2b9, 0x2bd, 0x2bf, 0x2db, 0x2df, 0x2e4, 0x2e8, 0x2f0, 
       0x2f3, 0x2f8, 0x2fc, 0x300, 0x306, 0x314, 0x31a, 0x326, 0x32a, 0x32f, 
       0x333, 0x339, 0x341, 0x34a, 0x35c, 0x35f, 0x364, 0x367, 0x376, 0x37c, 
       0x380, 0x386, 0x38b, 0x38e, 0x396, 0x39e, 0x3a9, 0x3ae, 0x3b3, 0x3b5, 
       0x3be, 0x3c6, 0x3cd, 0x3d5, 0x3d9, 0x3e2, 0x3e7, 0x3e9, 0x3f2, 0x3fa, 
       0x3fe, 0x403, 0x405, 0x40a, 0x40e, 0x415, 0x41d, 0x41f, 0x423, 0x426, 
       0x429, 0x431, 0x43b, 0x44c, 0x453, 0x457, 0x461, 0x466, 0x46d, 0x476, 
       0x47b, 0x482, 0x48e, 0x499, 0x4a1, 0x4a6, 0x4af, 0x4b8, 0x4c1, 0x4c7, 
       0x4cc, 0x4d0, 0x4d4, 0x4d8, 0x4dc, 0x4e3, 0x4eb, 0x4f8, 0x502, 0x518, 
       0x51c, 0x520, 0x525, 0x539, 0x53e, 0x543, 0x54a, 0x54d, 0x563, 0x56f, 
       0x573, 0x57b, 0x583, 0x58a, 0x58e, 0x593, 0x596, 0x59b, 0x5a3, 0x5a8, 
       0x5af, 0x5b5, 0x5bd, 0x5c5, 0x5c8, 0x5cf, 0x5d6, 0x5da, 0x5dd, 0x5e3, 
       0x5e7, 0x5ed, 0x5fb, 0x601, 0x608, 0x60d, 0x610, 0x61c, 0x628, 0x62d, 
       0x631, 0x634, 0x637, 0x63e, 0x644, 0x64c, 0x652, 0x65c, 0x664, 0x66a, 
       0x675, 0x679, 0x67b, 0x680, 0x684, 0x68b, 0x694, 0x69b, 0x69e, 0x6a1, 
       0x6a5, 0x6aa, 0x6b7, 0x6c1, 0x6c8, 0x6d4, 0x6db, 0x6e7, 0x6ed, 0x6f1, 
       0x6f5, 0x6fb, 0x701, 0x703, 0x70a, 0x70e, 0x711, 0x71d, 0x720, 0x727, 
       0x72a, 0x72f, 0x734, 0x736, 0x739, 0x73c, 0x742, 0x745, 0x751, 0x755, 
       0x758, 0x762, 0x765, 0x76b, 0x786, 0x793, 0x799, 0x7a2, 0x7a8, 0x7ab, 
       0x7b3, 0x7b7, 0x7bd, 0x7c3, 0x7c9, 0x7d4, 0x7d8, 0x7da, 0x7e4, 0x7ea, 
       0x7ed, 0x7fa, 0x800, 0x803, 0x806, 0x80d, 0x812, 0x816, 0x81a, 0x82b, 
       0x82e, 0x833, 0x837, 0x83b, 0x844, 0x847, 0x84c, 0x850, 0x855, 0x859, 
       0x85b, 0x866, 0x86a, 0x86c, 0x871, 0x876, 0x87d, 0x883, 0x888, 0x88e, 
       0x892, 0x898, 0x89f, 0x8a9, 0x8ac, 0x8af, 0x8b4, 0x8ba, 0x8be, 0x8c0, 
       0x8c7, 0x8ce, 0x8d6, 0x8da, 0x8e9, 0x8ed, 0x8f6, 0x8fa, 0x8fe, 0x914, 
       0x91f, 0x922, 0x925, 0x929, 0x92c, 0x931, 0x934, 0x937, 0x93b, 0x940, 
       0x943, 0x946, 0x94a, 0x94f, 0x953, 0x959, 0x95d, 0x961, 0x96f, 0x97c, 
       0x982, 0x995, 0x9a0, 0x9a4, 0x9aa, 0x9ae, 0x9b2, 0x9b9, 0x9c0, 0x9c3, 
       0x9c9, 0x9d0, 0x9d5, 0x9d8, 0x9e0, 0x9e6, 0x9ea, 0x9f0, 0x9f4, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HuTaoParser::Initializer HuTaoParser::_init;
