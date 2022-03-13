
// Generated from SysYParser.g4 by ANTLR 4.9.2


#include "sysy/Frontend/SysYParserVisitor.h"

#include "sysy/Frontend/SysYParser.h"


using namespace antlrcpp;
using namespace antlr4;

SysYParser::SysYParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SysYParser::~SysYParser() {
  delete _interpreter;
}

std::string SysYParser::getGrammarFileName() const {
  return "SysYParser.g4";
}

const std::vector<std::string>& SysYParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SysYParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysYParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::CompUnitContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::CompUnit_Context* SysYParser::CompUnitContext::compUnit_() {
  return getRuleContext<SysYParser::CompUnit_Context>(0);
}

SysYParser::FuncDefContext* SysYParser::CompUnitContext::funcDef() {
  return getRuleContext<SysYParser::FuncDefContext>(0);
}


size_t SysYParser::CompUnitContext::getRuleIndex() const {
  return SysYParser::RuleCompUnit;
}


antlrcpp::Any SysYParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CompUnitContext* SysYParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysYParser::RuleCompUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      decl();
      setState(67);
      compUnit_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(69);
      funcDef();
      setState(70);
      compUnit_();
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

//----------------- CompUnit_Context ------------------------------------------------------------------

SysYParser::CompUnit_Context::CompUnit_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::CompUnit_Context::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::CompUnit_Context* SysYParser::CompUnit_Context::compUnit_() {
  return getRuleContext<SysYParser::CompUnit_Context>(0);
}

SysYParser::FuncDefContext* SysYParser::CompUnit_Context::funcDef() {
  return getRuleContext<SysYParser::FuncDefContext>(0);
}


size_t SysYParser::CompUnit_Context::getRuleIndex() const {
  return SysYParser::RuleCompUnit_;
}


antlrcpp::Any SysYParser::CompUnit_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCompUnit_(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CompUnit_Context* SysYParser::compUnit_() {
  CompUnit_Context *_localctx = _tracker.createInstance<CompUnit_Context>(_ctx, getState());
  enterRule(_localctx, 2, SysYParser::RuleCompUnit_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(74);
      decl();
      setState(75);
      compUnit_();
      break;
    }

    case 2: {
      setState(77);
      funcDef();
      setState(78);
      compUnit_();
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

//----------------- DeclContext ------------------------------------------------------------------

SysYParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ConstDeclContext* SysYParser::DeclContext::constDecl() {
  return getRuleContext<SysYParser::ConstDeclContext>(0);
}

SysYParser::VarDeclContext* SysYParser::DeclContext::varDecl() {
  return getRuleContext<SysYParser::VarDeclContext>(0);
}


size_t SysYParser::DeclContext::getRuleIndex() const {
  return SysYParser::RuleDecl;
}


antlrcpp::Any SysYParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::DeclContext* SysYParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, SysYParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        constDecl();
        break;
      }

      case SysYParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(83);
        varDecl();
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

//----------------- ConstDeclContext ------------------------------------------------------------------

SysYParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ConstDeclContext::CONST() {
  return getToken(SysYParser::CONST, 0);
}

SysYParser::BTypeContext* SysYParser::ConstDeclContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::ConstDefContext *> SysYParser::ConstDeclContext::constDef() {
  return getRuleContexts<SysYParser::ConstDefContext>();
}

SysYParser::ConstDefContext* SysYParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<SysYParser::ConstDefContext>(i);
}

tree::TerminalNode* SysYParser::ConstDeclContext::SEMI() {
  return getToken(SysYParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDeclContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::ConstDeclContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::ConstDeclContext::getRuleIndex() const {
  return SysYParser::RuleConstDecl;
}


antlrcpp::Any SysYParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstDeclContext* SysYParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, SysYParser::RuleConstDecl);
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
    setState(86);
    match(SysYParser::CONST);
    setState(87);
    bType();
    setState(88);
    constDef();
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(89);
      match(SysYParser::COMMA);
      setState(90);
      constDef();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
    match(SysYParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysYParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BTypeContext::INT() {
  return getToken(SysYParser::INT, 0);
}


size_t SysYParser::BTypeContext::getRuleIndex() const {
  return SysYParser::RuleBType;
}


antlrcpp::Any SysYParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BTypeContext* SysYParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, SysYParser::RuleBType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(SysYParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

SysYParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ConstDefContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

tree::TerminalNode* SysYParser::ConstDefContext::AGN() {
  return getToken(SysYParser::AGN, 0);
}

SysYParser::ConstInitValContext* SysYParser::ConstDefContext::constInitVal() {
  return getRuleContext<SysYParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDefContext::LSBRA() {
  return getTokens(SysYParser::LSBRA);
}

tree::TerminalNode* SysYParser::ConstDefContext::LSBRA(size_t i) {
  return getToken(SysYParser::LSBRA, i);
}

std::vector<SysYParser::ConstExpContext *> SysYParser::ConstDefContext::constExp() {
  return getRuleContexts<SysYParser::ConstExpContext>();
}

SysYParser::ConstExpContext* SysYParser::ConstDefContext::constExp(size_t i) {
  return getRuleContext<SysYParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::ConstDefContext::RSBRA() {
  return getTokens(SysYParser::RSBRA);
}

tree::TerminalNode* SysYParser::ConstDefContext::RSBRA(size_t i) {
  return getToken(SysYParser::RSBRA, i);
}


size_t SysYParser::ConstDefContext::getRuleIndex() const {
  return SysYParser::RuleConstDef;
}


antlrcpp::Any SysYParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstDefContext* SysYParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 10, SysYParser::RuleConstDef);
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
    setState(100);
    match(SysYParser::Ident);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::LSBRA) {
      setState(101);
      match(SysYParser::LSBRA);
      setState(102);
      constExp();
      setState(103);
      match(SysYParser::RSBRA);
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(SysYParser::AGN);
    setState(111);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

SysYParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ConstExpContext* SysYParser::ConstInitValContext::constExp() {
  return getRuleContext<SysYParser::ConstExpContext>(0);
}

tree::TerminalNode* SysYParser::ConstInitValContext::LCBRA() {
  return getToken(SysYParser::LCBRA, 0);
}

tree::TerminalNode* SysYParser::ConstInitValContext::RCBRA() {
  return getToken(SysYParser::RCBRA, 0);
}

std::vector<SysYParser::ConstInitValContext *> SysYParser::ConstInitValContext::constInitVal() {
  return getRuleContexts<SysYParser::ConstInitValContext>();
}

SysYParser::ConstInitValContext* SysYParser::ConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<SysYParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::ConstInitValContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::ConstInitValContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::ConstInitValContext::getRuleIndex() const {
  return SysYParser::RuleConstInitVal;
}


antlrcpp::Any SysYParser::ConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstInitVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstInitValContext* SysYParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 12, SysYParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::ADD:
      case SysYParser::SUB:
      case SysYParser::NOT:
      case SysYParser::Ident:
      case SysYParser::DEC:
      case SysYParser::OCT:
      case SysYParser::HEX:
      case SysYParser::LBRA: {
        enterOuterAlt(_localctx, 1);
        setState(113);
        constExp();
        break;
      }

      case SysYParser::LCBRA: {
        enterOuterAlt(_localctx, 2);
        setState(114);
        match(SysYParser::LCBRA);
        setState(123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysYParser::ADD)
          | (1ULL << SysYParser::SUB)
          | (1ULL << SysYParser::NOT)
          | (1ULL << SysYParser::Ident)
          | (1ULL << SysYParser::DEC)
          | (1ULL << SysYParser::OCT)
          | (1ULL << SysYParser::HEX)
          | (1ULL << SysYParser::LBRA)
          | (1ULL << SysYParser::LCBRA))) != 0)) {
          setState(115);
          constInitVal();
          setState(120);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysYParser::COMMA) {
            setState(116);
            match(SysYParser::COMMA);
            setState(117);
            constInitVal();
            setState(122);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(125);
        match(SysYParser::RCBRA);
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

//----------------- VarDeclContext ------------------------------------------------------------------

SysYParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::VarDeclContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::VarDefContext *> SysYParser::VarDeclContext::varDef() {
  return getRuleContexts<SysYParser::VarDefContext>();
}

SysYParser::VarDefContext* SysYParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<SysYParser::VarDefContext>(i);
}

tree::TerminalNode* SysYParser::VarDeclContext::SEMI() {
  return getToken(SysYParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> SysYParser::VarDeclContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::VarDeclContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::VarDeclContext::getRuleIndex() const {
  return SysYParser::RuleVarDecl;
}


antlrcpp::Any SysYParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::VarDeclContext* SysYParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, SysYParser::RuleVarDecl);
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
    setState(128);
    bType();
    setState(129);
    varDef();
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(130);
      match(SysYParser::COMMA);
      setState(131);
      varDef();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    match(SysYParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

SysYParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::VarDefContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::VarDefContext::LSBRA() {
  return getTokens(SysYParser::LSBRA);
}

tree::TerminalNode* SysYParser::VarDefContext::LSBRA(size_t i) {
  return getToken(SysYParser::LSBRA, i);
}

std::vector<SysYParser::ConstExpContext *> SysYParser::VarDefContext::constExp() {
  return getRuleContexts<SysYParser::ConstExpContext>();
}

SysYParser::ConstExpContext* SysYParser::VarDefContext::constExp(size_t i) {
  return getRuleContext<SysYParser::ConstExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::VarDefContext::RSBRA() {
  return getTokens(SysYParser::RSBRA);
}

tree::TerminalNode* SysYParser::VarDefContext::RSBRA(size_t i) {
  return getToken(SysYParser::RSBRA, i);
}

tree::TerminalNode* SysYParser::VarDefContext::AGN() {
  return getToken(SysYParser::AGN, 0);
}

SysYParser::InitValContext* SysYParser::VarDefContext::initVal() {
  return getRuleContext<SysYParser::InitValContext>(0);
}


size_t SysYParser::VarDefContext::getRuleIndex() const {
  return SysYParser::RuleVarDef;
}


antlrcpp::Any SysYParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::VarDefContext* SysYParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 16, SysYParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(139);
      match(SysYParser::Ident);
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(140);
        match(SysYParser::LSBRA);
        setState(141);
        constExp();
        setState(142);
        match(SysYParser::RSBRA);
        setState(148);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(SysYParser::Ident);
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(150);
        match(SysYParser::LSBRA);
        setState(151);
        constExp();
        setState(152);
        match(SysYParser::RSBRA);
        setState(158);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(159);
      match(SysYParser::AGN);
      setState(160);
      initVal();
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

//----------------- InitValContext ------------------------------------------------------------------

SysYParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ExpContext* SysYParser::InitValContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

std::vector<tree::TerminalNode *> SysYParser::InitValContext::LCBRA() {
  return getTokens(SysYParser::LCBRA);
}

tree::TerminalNode* SysYParser::InitValContext::LCBRA(size_t i) {
  return getToken(SysYParser::LCBRA, i);
}

std::vector<tree::TerminalNode *> SysYParser::InitValContext::RCBRA() {
  return getTokens(SysYParser::RCBRA);
}

tree::TerminalNode* SysYParser::InitValContext::RCBRA(size_t i) {
  return getToken(SysYParser::RCBRA, i);
}

std::vector<SysYParser::InitValContext *> SysYParser::InitValContext::initVal() {
  return getRuleContexts<SysYParser::InitValContext>();
}

SysYParser::InitValContext* SysYParser::InitValContext::initVal(size_t i) {
  return getRuleContext<SysYParser::InitValContext>(i);
}

tree::TerminalNode* SysYParser::InitValContext::COMMA() {
  return getToken(SysYParser::COMMA, 0);
}


size_t SysYParser::InitValContext::getRuleIndex() const {
  return SysYParser::RuleInitVal;
}


antlrcpp::Any SysYParser::InitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitInitVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::InitValContext* SysYParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 18, SysYParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::ADD:
      case SysYParser::SUB:
      case SysYParser::NOT:
      case SysYParser::Ident:
      case SysYParser::DEC:
      case SysYParser::OCT:
      case SysYParser::HEX:
      case SysYParser::LBRA: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        exp();
        break;
      }

      case SysYParser::LCBRA: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        match(SysYParser::LCBRA);
        setState(171);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysYParser::ADD)
          | (1ULL << SysYParser::SUB)
          | (1ULL << SysYParser::NOT)
          | (1ULL << SysYParser::Ident)
          | (1ULL << SysYParser::DEC)
          | (1ULL << SysYParser::OCT)
          | (1ULL << SysYParser::HEX)
          | (1ULL << SysYParser::LBRA)
          | (1ULL << SysYParser::LCBRA))) != 0)) {
          setState(165);
          initVal();
          setState(166);
          match(SysYParser::LCBRA);
          setState(167);
          match(SysYParser::COMMA);
          setState(168);
          initVal();
          setState(169);
          match(SysYParser::RCBRA);
        }
        setState(173);
        match(SysYParser::RCBRA);
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

//----------------- FuncDefContext ------------------------------------------------------------------

SysYParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::FuncTypeContext* SysYParser::FuncDefContext::funcType() {
  return getRuleContext<SysYParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncDefContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::LBRA() {
  return getToken(SysYParser::LBRA, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::RBRA() {
  return getToken(SysYParser::RBRA, 0);
}

SysYParser::BlockContext* SysYParser::FuncDefContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

SysYParser::FuncFParamsContext* SysYParser::FuncDefContext::funcFParams() {
  return getRuleContext<SysYParser::FuncFParamsContext>(0);
}


size_t SysYParser::FuncDefContext::getRuleIndex() const {
  return SysYParser::RuleFuncDef;
}


antlrcpp::Any SysYParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncDefContext* SysYParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 20, SysYParser::RuleFuncDef);
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
    setState(176);
    funcType();
    setState(177);
    match(SysYParser::Ident);
    setState(178);
    match(SysYParser::LBRA);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::INT) {
      setState(179);
      funcFParams();
    }
    setState(182);
    match(SysYParser::RBRA);
    setState(183);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysYParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::FuncTypeContext::VOID() {
  return getToken(SysYParser::VOID, 0);
}

tree::TerminalNode* SysYParser::FuncTypeContext::INT() {
  return getToken(SysYParser::INT, 0);
}


size_t SysYParser::FuncTypeContext::getRuleIndex() const {
  return SysYParser::RuleFuncType;
}


antlrcpp::Any SysYParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncTypeContext* SysYParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, SysYParser::RuleFuncType);
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
    setState(185);
    _la = _input->LA(1);
    if (!(_la == SysYParser::INT

    || _la == SysYParser::VOID)) {
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

//----------------- FuncFParamsContext ------------------------------------------------------------------

SysYParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::FuncFParamContext *> SysYParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<SysYParser::FuncFParamContext>();
}

SysYParser::FuncFParamContext* SysYParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<SysYParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamsContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::FuncFParamsContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::FuncFParamsContext::getRuleIndex() const {
  return SysYParser::RuleFuncFParams;
}


antlrcpp::Any SysYParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncFParamsContext* SysYParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 24, SysYParser::RuleFuncFParams);
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
    setState(187);
    funcFParam();
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(188);
      match(SysYParser::COMMA);
      setState(189);
      funcFParam();
      setState(194);
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

//----------------- FuncFParamContext ------------------------------------------------------------------

SysYParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::FuncFParamContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncFParamContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::LSBRA() {
  return getTokens(SysYParser::LSBRA);
}

tree::TerminalNode* SysYParser::FuncFParamContext::LSBRA(size_t i) {
  return getToken(SysYParser::LSBRA, i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::RSBRA() {
  return getTokens(SysYParser::RSBRA);
}

tree::TerminalNode* SysYParser::FuncFParamContext::RSBRA(size_t i) {
  return getToken(SysYParser::RSBRA, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::FuncFParamContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::FuncFParamContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}


size_t SysYParser::FuncFParamContext::getRuleIndex() const {
  return SysYParser::RuleFuncFParam;
}


antlrcpp::Any SysYParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncFParamContext* SysYParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 26, SysYParser::RuleFuncFParam);
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
    setState(195);
    bType();
    setState(196);
    match(SysYParser::Ident);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::LSBRA) {
      setState(197);
      match(SysYParser::LSBRA);
      setState(198);
      match(SysYParser::RSBRA);
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(199);
        match(SysYParser::LSBRA);
        setState(200);
        exp();
        setState(201);
        match(SysYParser::RSBRA);
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- BlockContext ------------------------------------------------------------------

SysYParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BlockContext::LCBRA() {
  return getToken(SysYParser::LCBRA, 0);
}

tree::TerminalNode* SysYParser::BlockContext::RCBRA() {
  return getToken(SysYParser::RCBRA, 0);
}

std::vector<SysYParser::BlockItemContext *> SysYParser::BlockContext::blockItem() {
  return getRuleContexts<SysYParser::BlockItemContext>();
}

SysYParser::BlockItemContext* SysYParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysYParser::BlockItemContext>(i);
}


size_t SysYParser::BlockContext::getRuleIndex() const {
  return SysYParser::RuleBlock;
}


antlrcpp::Any SysYParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockContext* SysYParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 28, SysYParser::RuleBlock);
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
    setState(210);
    match(SysYParser::LCBRA);
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysYParser::INT)
      | (1ULL << SysYParser::CONST)
      | (1ULL << SysYParser::IF)
      | (1ULL << SysYParser::WHILE)
      | (1ULL << SysYParser::BREAK)
      | (1ULL << SysYParser::CONTINUE)
      | (1ULL << SysYParser::RETURN)
      | (1ULL << SysYParser::ADD)
      | (1ULL << SysYParser::SUB)
      | (1ULL << SysYParser::NOT)
      | (1ULL << SysYParser::Ident)
      | (1ULL << SysYParser::DEC)
      | (1ULL << SysYParser::OCT)
      | (1ULL << SysYParser::HEX)
      | (1ULL << SysYParser::SEMI)
      | (1ULL << SysYParser::LBRA)
      | (1ULL << SysYParser::LCBRA))) != 0)) {
      setState(211);
      blockItem();
      setState(216);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(217);
    match(SysYParser::RCBRA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysYParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::BlockItemContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::StmtContext* SysYParser::BlockItemContext::stmt() {
  return getRuleContext<SysYParser::StmtContext>(0);
}


size_t SysYParser::BlockItemContext::getRuleIndex() const {
  return SysYParser::RuleBlockItem;
}


antlrcpp::Any SysYParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockItemContext* SysYParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 30, SysYParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::INT:
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(219);
        decl();
        break;
      }

      case SysYParser::IF:
      case SysYParser::WHILE:
      case SysYParser::BREAK:
      case SysYParser::CONTINUE:
      case SysYParser::RETURN:
      case SysYParser::ADD:
      case SysYParser::SUB:
      case SysYParser::NOT:
      case SysYParser::Ident:
      case SysYParser::DEC:
      case SysYParser::OCT:
      case SysYParser::HEX:
      case SysYParser::SEMI:
      case SysYParser::LBRA:
      case SysYParser::LCBRA: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        stmt();
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

//----------------- StmtContext ------------------------------------------------------------------

SysYParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::LValContext* SysYParser::StmtContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

tree::TerminalNode* SysYParser::StmtContext::AGN() {
  return getToken(SysYParser::AGN, 0);
}

SysYParser::ExpContext* SysYParser::StmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::StmtContext::SEMI() {
  return getToken(SysYParser::SEMI, 0);
}

SysYParser::BlockContext* SysYParser::StmtContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

tree::TerminalNode* SysYParser::StmtContext::IF() {
  return getToken(SysYParser::IF, 0);
}

tree::TerminalNode* SysYParser::StmtContext::LBRA() {
  return getToken(SysYParser::LBRA, 0);
}

SysYParser::CondContext* SysYParser::StmtContext::cond() {
  return getRuleContext<SysYParser::CondContext>(0);
}

tree::TerminalNode* SysYParser::StmtContext::RBRA() {
  return getToken(SysYParser::RBRA, 0);
}

std::vector<SysYParser::StmtContext *> SysYParser::StmtContext::stmt() {
  return getRuleContexts<SysYParser::StmtContext>();
}

SysYParser::StmtContext* SysYParser::StmtContext::stmt(size_t i) {
  return getRuleContext<SysYParser::StmtContext>(i);
}

tree::TerminalNode* SysYParser::StmtContext::ELSE() {
  return getToken(SysYParser::ELSE, 0);
}

tree::TerminalNode* SysYParser::StmtContext::WHILE() {
  return getToken(SysYParser::WHILE, 0);
}

tree::TerminalNode* SysYParser::StmtContext::BREAK() {
  return getToken(SysYParser::BREAK, 0);
}

tree::TerminalNode* SysYParser::StmtContext::CONTINUE() {
  return getToken(SysYParser::CONTINUE, 0);
}

tree::TerminalNode* SysYParser::StmtContext::RETURN() {
  return getToken(SysYParser::RETURN, 0);
}


size_t SysYParser::StmtContext::getRuleIndex() const {
  return SysYParser::RuleStmt;
}


antlrcpp::Any SysYParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::StmtContext* SysYParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 32, SysYParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      lVal();
      setState(224);
      match(SysYParser::AGN);
      setState(225);
      exp();
      setState(226);
      match(SysYParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysYParser::ADD)
        | (1ULL << SysYParser::SUB)
        | (1ULL << SysYParser::NOT)
        | (1ULL << SysYParser::Ident)
        | (1ULL << SysYParser::DEC)
        | (1ULL << SysYParser::OCT)
        | (1ULL << SysYParser::HEX)
        | (1ULL << SysYParser::LBRA))) != 0)) {
        setState(228);
        exp();
      }
      setState(231);
      match(SysYParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(232);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(233);
      match(SysYParser::IF);
      setState(234);
      match(SysYParser::LBRA);
      setState(235);
      cond();
      setState(236);
      match(SysYParser::RBRA);
      setState(237);
      stmt();
      setState(240);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(238);
        match(SysYParser::ELSE);
        setState(239);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(242);
      match(SysYParser::WHILE);
      setState(243);
      match(SysYParser::LBRA);
      setState(244);
      cond();
      setState(245);
      match(SysYParser::RBRA);
      setState(246);
      stmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(248);
      match(SysYParser::BREAK);
      setState(249);
      match(SysYParser::SEMI);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(250);
      match(SysYParser::CONTINUE);
      setState(251);
      match(SysYParser::SEMI);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(252);
      match(SysYParser::RETURN);
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysYParser::ADD)
        | (1ULL << SysYParser::SUB)
        | (1ULL << SysYParser::NOT)
        | (1ULL << SysYParser::Ident)
        | (1ULL << SysYParser::DEC)
        | (1ULL << SysYParser::OCT)
        | (1ULL << SysYParser::HEX)
        | (1ULL << SysYParser::LBRA))) != 0)) {
        setState(253);
        exp();
      }
      setState(256);
      match(SysYParser::SEMI);
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

//----------------- ExpContext ------------------------------------------------------------------

SysYParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::AddExpContext* SysYParser::ExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
}


size_t SysYParser::ExpContext::getRuleIndex() const {
  return SysYParser::RuleExp;
}


antlrcpp::Any SysYParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ExpContext* SysYParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 34, SysYParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

SysYParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::LOrExpContext* SysYParser::CondContext::lOrExp() {
  return getRuleContext<SysYParser::LOrExpContext>(0);
}


size_t SysYParser::CondContext::getRuleIndex() const {
  return SysYParser::RuleCond;
}


antlrcpp::Any SysYParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CondContext* SysYParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 36, SysYParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysYParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::LValContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::LSBRA() {
  return getTokens(SysYParser::LSBRA);
}

tree::TerminalNode* SysYParser::LValContext::LSBRA(size_t i) {
  return getToken(SysYParser::LSBRA, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::LValContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::LValContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::RSBRA() {
  return getTokens(SysYParser::RSBRA);
}

tree::TerminalNode* SysYParser::LValContext::RSBRA(size_t i) {
  return getToken(SysYParser::RSBRA, i);
}


size_t SysYParser::LValContext::getRuleIndex() const {
  return SysYParser::RuleLVal;
}


antlrcpp::Any SysYParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::LValContext* SysYParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 38, SysYParser::RuleLVal);

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
    setState(263);
    match(SysYParser::Ident);
    setState(270);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(264);
        match(SysYParser::LSBRA);
        setState(265);
        exp();
        setState(266);
        match(SysYParser::RSBRA); 
      }
      setState(272);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysYParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::PrimaryExpContext::LBRA() {
  return getToken(SysYParser::LBRA, 0);
}

SysYParser::ExpContext* SysYParser::PrimaryExpContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::PrimaryExpContext::RBRA() {
  return getToken(SysYParser::RBRA, 0);
}

SysYParser::LValContext* SysYParser::PrimaryExpContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

SysYParser::NumberContext* SysYParser::PrimaryExpContext::number() {
  return getRuleContext<SysYParser::NumberContext>(0);
}


size_t SysYParser::PrimaryExpContext::getRuleIndex() const {
  return SysYParser::RulePrimaryExp;
}


antlrcpp::Any SysYParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::PrimaryExpContext* SysYParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 40, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::LBRA: {
        enterOuterAlt(_localctx, 1);
        setState(273);
        match(SysYParser::LBRA);
        setState(274);
        exp();
        setState(275);
        match(SysYParser::RBRA);
        break;
      }

      case SysYParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(277);
        lVal();
        break;
      }

      case SysYParser::DEC:
      case SysYParser::OCT:
      case SysYParser::HEX: {
        enterOuterAlt(_localctx, 3);
        setState(278);
        number();
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

//----------------- NumberContext ------------------------------------------------------------------

SysYParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::IntConstContext* SysYParser::NumberContext::intConst() {
  return getRuleContext<SysYParser::IntConstContext>(0);
}


size_t SysYParser::NumberContext::getRuleIndex() const {
  return SysYParser::RuleNumber;
}


antlrcpp::Any SysYParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::NumberContext* SysYParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 42, SysYParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    intConst();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

SysYParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::PrimaryExpContext* SysYParser::UnaryExpContext::primaryExp() {
  return getRuleContext<SysYParser::PrimaryExpContext>(0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::LBRA() {
  return getToken(SysYParser::LBRA, 0);
}

tree::TerminalNode* SysYParser::UnaryExpContext::RBRA() {
  return getToken(SysYParser::RBRA, 0);
}

SysYParser::FuncRParamsContext* SysYParser::UnaryExpContext::funcRParams() {
  return getRuleContext<SysYParser::FuncRParamsContext>(0);
}

SysYParser::UnaryOpContext* SysYParser::UnaryExpContext::unaryOp() {
  return getRuleContext<SysYParser::UnaryOpContext>(0);
}

SysYParser::UnaryExpContext* SysYParser::UnaryExpContext::unaryExp() {
  return getRuleContext<SysYParser::UnaryExpContext>(0);
}


size_t SysYParser::UnaryExpContext::getRuleIndex() const {
  return SysYParser::RuleUnaryExp;
}


antlrcpp::Any SysYParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryExpContext* SysYParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 44, SysYParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(283);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(284);
      match(SysYParser::Ident);
      setState(285);
      match(SysYParser::LBRA);
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysYParser::ADD)
        | (1ULL << SysYParser::SUB)
        | (1ULL << SysYParser::NOT)
        | (1ULL << SysYParser::Ident)
        | (1ULL << SysYParser::DEC)
        | (1ULL << SysYParser::OCT)
        | (1ULL << SysYParser::HEX)
        | (1ULL << SysYParser::LBRA))) != 0)) {
        setState(286);
        funcRParams();
      }
      setState(289);
      match(SysYParser::RBRA);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(290);
      unaryOp();
      setState(291);
      unaryExp();
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

//----------------- UnaryOpContext ------------------------------------------------------------------

SysYParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::UnaryOpContext::ADD() {
  return getToken(SysYParser::ADD, 0);
}

tree::TerminalNode* SysYParser::UnaryOpContext::SUB() {
  return getToken(SysYParser::SUB, 0);
}

tree::TerminalNode* SysYParser::UnaryOpContext::NOT() {
  return getToken(SysYParser::NOT, 0);
}


size_t SysYParser::UnaryOpContext::getRuleIndex() const {
  return SysYParser::RuleUnaryOp;
}


antlrcpp::Any SysYParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryOpContext* SysYParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 46, SysYParser::RuleUnaryOp);
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
    setState(295);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysYParser::ADD)
      | (1ULL << SysYParser::SUB)
      | (1ULL << SysYParser::NOT))) != 0))) {
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

//----------------- FuncRParamsContext ------------------------------------------------------------------

SysYParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::ExpContext *> SysYParser::FuncRParamsContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncRParamsContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::FuncRParamsContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::FuncRParamsContext::getRuleIndex() const {
  return SysYParser::RuleFuncRParams;
}


antlrcpp::Any SysYParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncRParamsContext* SysYParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 48, SysYParser::RuleFuncRParams);
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
    setState(297);
    exp();
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(298);
      match(SysYParser::COMMA);
      setState(299);
      exp();
      setState(304);
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

//----------------- MulExpContext ------------------------------------------------------------------

SysYParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::UnaryExpContext* SysYParser::MulExpContext::unaryExp() {
  return getRuleContext<SysYParser::UnaryExpContext>(0);
}

SysYParser::MulExpContext* SysYParser::MulExpContext::mulExp() {
  return getRuleContext<SysYParser::MulExpContext>(0);
}

tree::TerminalNode* SysYParser::MulExpContext::MUL() {
  return getToken(SysYParser::MUL, 0);
}

tree::TerminalNode* SysYParser::MulExpContext::DIV() {
  return getToken(SysYParser::DIV, 0);
}

tree::TerminalNode* SysYParser::MulExpContext::MOD() {
  return getToken(SysYParser::MOD, 0);
}


size_t SysYParser::MulExpContext::getRuleIndex() const {
  return SysYParser::RuleMulExp;
}


antlrcpp::Any SysYParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::MulExpContext* SysYParser::mulExp() {
   return mulExp(0);
}

SysYParser::MulExpContext* SysYParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  SysYParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, SysYParser::RuleMulExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(306);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MulExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMulExp);
        setState(308);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(309);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysYParser::MUL)
          | (1ULL << SysYParser::DIV)
          | (1ULL << SysYParser::MOD))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(310);
        unaryExp(); 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

SysYParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::MulExpContext* SysYParser::AddExpContext::mulExp() {
  return getRuleContext<SysYParser::MulExpContext>(0);
}

SysYParser::AddExpContext* SysYParser::AddExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
}

tree::TerminalNode* SysYParser::AddExpContext::ADD() {
  return getToken(SysYParser::ADD, 0);
}

tree::TerminalNode* SysYParser::AddExpContext::SUB() {
  return getToken(SysYParser::SUB, 0);
}


size_t SysYParser::AddExpContext::getRuleIndex() const {
  return SysYParser::RuleAddExp;
}


antlrcpp::Any SysYParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::AddExpContext* SysYParser::addExp() {
   return addExp(0);
}

SysYParser::AddExpContext* SysYParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  SysYParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, SysYParser::RuleAddExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(317);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AddExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAddExp);
        setState(319);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(320);
        _la = _input->LA(1);
        if (!(_la == SysYParser::ADD

        || _la == SysYParser::SUB)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(321);
        mulExp(0); 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

SysYParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::AddExpContext* SysYParser::RelExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
}

SysYParser::RelExpContext* SysYParser::RelExpContext::relExp() {
  return getRuleContext<SysYParser::RelExpContext>(0);
}

tree::TerminalNode* SysYParser::RelExpContext::LES() {
  return getToken(SysYParser::LES, 0);
}

tree::TerminalNode* SysYParser::RelExpContext::GRT() {
  return getToken(SysYParser::GRT, 0);
}

tree::TerminalNode* SysYParser::RelExpContext::LEQ() {
  return getToken(SysYParser::LEQ, 0);
}

tree::TerminalNode* SysYParser::RelExpContext::GEQ() {
  return getToken(SysYParser::GEQ, 0);
}


size_t SysYParser::RelExpContext::getRuleIndex() const {
  return SysYParser::RuleRelExp;
}


antlrcpp::Any SysYParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::RelExpContext* SysYParser::relExp() {
   return relExp(0);
}

SysYParser::RelExpContext* SysYParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  SysYParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, SysYParser::RuleRelExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(328);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(335);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RelExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelExp);
        setState(330);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(331);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysYParser::LES)
          | (1ULL << SysYParser::GRT)
          | (1ULL << SysYParser::LEQ)
          | (1ULL << SysYParser::GEQ))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(332);
        addExp(0); 
      }
      setState(337);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

SysYParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::RelExpContext* SysYParser::EqExpContext::relExp() {
  return getRuleContext<SysYParser::RelExpContext>(0);
}

SysYParser::EqExpContext* SysYParser::EqExpContext::eqExp() {
  return getRuleContext<SysYParser::EqExpContext>(0);
}

tree::TerminalNode* SysYParser::EqExpContext::EQL() {
  return getToken(SysYParser::EQL, 0);
}

tree::TerminalNode* SysYParser::EqExpContext::NEQ() {
  return getToken(SysYParser::NEQ, 0);
}


size_t SysYParser::EqExpContext::getRuleIndex() const {
  return SysYParser::RuleEqExp;
}


antlrcpp::Any SysYParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::EqExpContext* SysYParser::eqExp() {
   return eqExp(0);
}

SysYParser::EqExpContext* SysYParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  SysYParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, SysYParser::RuleEqExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(339);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(346);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEqExp);
        setState(341);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(342);
        _la = _input->LA(1);
        if (!(_la == SysYParser::EQL

        || _la == SysYParser::NEQ)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(343);
        relExp(0); 
      }
      setState(348);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

SysYParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::EqExpContext* SysYParser::LAndExpContext::eqExp() {
  return getRuleContext<SysYParser::EqExpContext>(0);
}

SysYParser::LAndExpContext* SysYParser::LAndExpContext::lAndExp() {
  return getRuleContext<SysYParser::LAndExpContext>(0);
}

tree::TerminalNode* SysYParser::LAndExpContext::AND() {
  return getToken(SysYParser::AND, 0);
}


size_t SysYParser::LAndExpContext::getRuleIndex() const {
  return SysYParser::RuleLAndExp;
}


antlrcpp::Any SysYParser::LAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitLAndExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::LAndExpContext* SysYParser::lAndExp() {
   return lAndExp(0);
}

SysYParser::LAndExpContext* SysYParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  SysYParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, SysYParser::RuleLAndExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(350);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(357);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LAndExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLAndExp);
        setState(352);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(353);
        match(SysYParser::AND);
        setState(354);
        eqExp(0); 
      }
      setState(359);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

SysYParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::LAndExpContext* SysYParser::LOrExpContext::lAndExp() {
  return getRuleContext<SysYParser::LAndExpContext>(0);
}

SysYParser::LOrExpContext* SysYParser::LOrExpContext::lOrExp() {
  return getRuleContext<SysYParser::LOrExpContext>(0);
}

tree::TerminalNode* SysYParser::LOrExpContext::OR() {
  return getToken(SysYParser::OR, 0);
}


size_t SysYParser::LOrExpContext::getRuleIndex() const {
  return SysYParser::RuleLOrExp;
}


antlrcpp::Any SysYParser::LOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitLOrExp(this);
  else
    return visitor->visitChildren(this);
}


SysYParser::LOrExpContext* SysYParser::lOrExp() {
   return lOrExp(0);
}

SysYParser::LOrExpContext* SysYParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysYParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  SysYParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, SysYParser::RuleLOrExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(361);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(368);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LOrExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLOrExp);
        setState(363);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(364);
        match(SysYParser::OR);
        setState(365);
        lAndExp(0); 
      }
      setState(370);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

SysYParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::AddExpContext* SysYParser::ConstExpContext::addExp() {
  return getRuleContext<SysYParser::AddExpContext>(0);
}


size_t SysYParser::ConstExpContext::getRuleIndex() const {
  return SysYParser::RuleConstExp;
}


antlrcpp::Any SysYParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ConstExpContext* SysYParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 62, SysYParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntConstContext ------------------------------------------------------------------

SysYParser::IntConstContext::IntConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::IntConstContext::DEC() {
  return getToken(SysYParser::DEC, 0);
}

tree::TerminalNode* SysYParser::IntConstContext::OCT() {
  return getToken(SysYParser::OCT, 0);
}

tree::TerminalNode* SysYParser::IntConstContext::HEX() {
  return getToken(SysYParser::HEX, 0);
}


size_t SysYParser::IntConstContext::getRuleIndex() const {
  return SysYParser::RuleIntConst;
}


antlrcpp::Any SysYParser::IntConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitIntConst(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::IntConstContext* SysYParser::intConst() {
  IntConstContext *_localctx = _tracker.createInstance<IntConstContext>(_ctx, getState());
  enterRule(_localctx, 64, SysYParser::RuleIntConst);
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
    setState(373);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysYParser::DEC)
      | (1ULL << SysYParser::OCT)
      | (1ULL << SysYParser::HEX))) != 0))) {
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

bool SysYParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 25: return mulExpSempred(dynamic_cast<MulExpContext *>(context), predicateIndex);
    case 26: return addExpSempred(dynamic_cast<AddExpContext *>(context), predicateIndex);
    case 27: return relExpSempred(dynamic_cast<RelExpContext *>(context), predicateIndex);
    case 28: return eqExpSempred(dynamic_cast<EqExpContext *>(context), predicateIndex);
    case 29: return lAndExpSempred(dynamic_cast<LAndExpContext *>(context), predicateIndex);
    case 30: return lOrExpSempred(dynamic_cast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SysYParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysYParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SysYParser::_decisionToDFA;
atn::PredictionContextCache SysYParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SysYParser::_atn;
std::vector<uint16_t> SysYParser::_serializedATN;

std::vector<std::string> SysYParser::_ruleNames = {
  "compUnit", "compUnit_", "decl", "constDecl", "bType", "constDef", "constInitVal", 
  "varDecl", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
  "funcFParam", "block", "blockItem", "stmt", "exp", "cond", "lVal", "primaryExp", 
  "number", "unaryExp", "unaryOp", "funcRParams", "mulExp", "addExp", "relExp", 
  "eqExp", "lAndExp", "lOrExp", "constExp", "intConst"
};

std::vector<std::string> SysYParser::_literalNames = {
  "", "'int'", "'const'", "'void'", "'if'", "'else'", "'while'", "'break'", 
  "'continue'", "'return'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", 
  "'!='", "'<'", "'>'", "'<='", "'>='", "'!'", "'&&'", "'||'", "", "", "", 
  "", "','", "';'", "'('", "')'", "'['", "']'", "'{'", "'}'"
};

std::vector<std::string> SysYParser::_symbolicNames = {
  "", "INT", "CONST", "VOID", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", 
  "RETURN", "AGN", "ADD", "SUB", "MUL", "DIV", "MOD", "EQL", "NEQ", "LES", 
  "GRT", "LEQ", "GEQ", "NOT", "AND", "OR", "Ident", "DEC", "OCT", "HEX", 
  "COMMA", "SEMI", "LBRA", "RBRA", "LSBRA", "RSBRA", "LCBRA", "RCBRA", "WS", 
  "SL_COMMENT"
};

dfa::Vocabulary SysYParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SysYParser::_tokenNames;

SysYParser::Initializer::Initializer() {
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
       0x3, 0x28, 0x17a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x4b, 
       0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x5, 0x3, 0x53, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x57, 
       0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
       0x5, 0x5e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x61, 0xb, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x7, 0x7, 0x6c, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6f, 
       0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x79, 0xa, 0x8, 0xc, 0x8, 0xe, 
       0x8, 0x7c, 0xb, 0x8, 0x5, 0x8, 0x7e, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 
       0x81, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
       0x87, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8a, 0xb, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
       0x93, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x96, 0xb, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x9d, 0xa, 0xa, 0xc, 
       0xa, 0xe, 0xa, 0xa0, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xa4, 
       0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xae, 0xa, 0xb, 0x3, 0xb, 0x5, 
       0xb, 0xb1, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
       0xc, 0xb7, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc1, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0xc4, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xce, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0xd1, 0xb, 0xf, 0x5, 0xf, 0xd3, 0xa, 0xf, 
       0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xd7, 0xa, 0x10, 0xc, 0x10, 0xe, 
       0x10, 0xda, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0xe0, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xe8, 0xa, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xf3, 0xa, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x101, 
       0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x104, 0xa, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x7, 0x15, 0x10f, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
       0x112, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x5, 0x16, 0x11a, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x122, 0xa, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x128, 
       0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x7, 0x1a, 0x12f, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x132, 0xb, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x7, 0x1b, 0x13a, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x13d, 0xb, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x7, 0x1c, 0x145, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x148, 0xb, 0x1c, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x7, 0x1d, 0x150, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x153, 0xb, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x7, 0x1e, 0x15b, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x15e, 0xb, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x7, 0x1f, 0x166, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x169, 0xb, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x7, 0x20, 0x171, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x174, 0xb, 0x20, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x2, 0x8, 
       0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x23, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x2, 0x9, 0x4, 0x2, 0x3, 0x3, 0x5, 
       0x5, 0x4, 0x2, 0xd, 0xe, 0x18, 0x18, 0x3, 0x2, 0xf, 0x11, 0x3, 0x2, 
       0xd, 0xe, 0x3, 0x2, 0x14, 0x17, 0x3, 0x2, 0x12, 0x13, 0x3, 0x2, 0x1c, 
       0x1e, 0x2, 0x184, 0x2, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x52, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x56, 0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x64, 0x3, 0x2, 0x2, 0x2, 0xc, 0x66, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x80, 0x3, 0x2, 0x2, 0x2, 0x10, 0x82, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0xb2, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd4, 0x3, 
       0x2, 0x2, 0x2, 0x20, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x22, 0x103, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x105, 0x3, 0x2, 0x2, 0x2, 0x26, 0x107, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0x109, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x119, 0x3, 
       0x2, 0x2, 0x2, 0x2c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x127, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x129, 0x3, 0x2, 0x2, 0x2, 0x32, 0x12b, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x133, 0x3, 0x2, 0x2, 0x2, 0x36, 0x13e, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x149, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x154, 0x3, 
       0x2, 0x2, 0x2, 0x3c, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x16a, 0x3, 
       0x2, 0x2, 0x2, 0x40, 0x175, 0x3, 0x2, 0x2, 0x2, 0x42, 0x177, 0x3, 
       0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0x6, 0x4, 0x2, 0x45, 0x46, 0x5, 0x4, 
       0x3, 0x2, 0x46, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x16, 
       0xc, 0x2, 0x48, 0x49, 0x5, 0x4, 0x3, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x47, 0x3, 0x2, 0x2, 0x2, 
       0x4b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x6, 0x4, 0x2, 0x4d, 
       0x4e, 0x5, 0x4, 0x3, 0x2, 0x4e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
       0x5, 0x16, 0xc, 0x2, 0x50, 0x51, 0x5, 0x4, 0x3, 0x2, 0x51, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4f, 0x3, 
       0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x57, 0x5, 0x8, 0x5, 0x2, 0x55, 0x57, 0x5, 0x10, 
       0x9, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 
       0x2, 0x57, 0x7, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x4, 0x2, 0x2, 
       0x59, 0x5a, 0x5, 0xa, 0x6, 0x2, 0x5a, 0x5f, 0x5, 0xc, 0x7, 0x2, 0x5b, 
       0x5c, 0x7, 0x1f, 0x2, 0x2, 0x5c, 0x5e, 0x5, 0xc, 0x7, 0x2, 0x5d, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x3, 
       0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x20, 
       0x2, 0x2, 0x63, 0x9, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x3, 0x2, 
       0x2, 0x65, 0xb, 0x3, 0x2, 0x2, 0x2, 0x66, 0x6d, 0x7, 0x1b, 0x2, 0x2, 
       0x67, 0x68, 0x7, 0x23, 0x2, 0x2, 0x68, 0x69, 0x5, 0x40, 0x21, 0x2, 
       0x69, 0x6a, 0x7, 0x24, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 
       0x6b, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 
       0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 
       0xc, 0x2, 0x2, 0x71, 0x72, 0x5, 0xe, 0x8, 0x2, 0x72, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x73, 0x81, 0x5, 0x40, 0x21, 0x2, 0x74, 0x7d, 0x7, 0x25, 
       0x2, 0x2, 0x75, 0x7a, 0x5, 0xe, 0x8, 0x2, 0x76, 0x77, 0x7, 0x1f, 
       0x2, 0x2, 0x77, 0x79, 0x5, 0xe, 0x8, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 
       0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 
       0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
       0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 
       0x26, 0x2, 0x2, 0x80, 0x73, 0x3, 0x2, 0x2, 0x2, 0x80, 0x74, 0x3, 
       0x2, 0x2, 0x2, 0x81, 0xf, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0xa, 
       0x6, 0x2, 0x83, 0x88, 0x5, 0x12, 0xa, 0x2, 0x84, 0x85, 0x7, 0x1f, 
       0x2, 0x2, 0x85, 0x87, 0x5, 0x12, 0xa, 0x2, 0x86, 0x84, 0x3, 0x2, 
       0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x20, 0x2, 0x2, 
       0x8c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x94, 0x7, 0x1b, 0x2, 0x2, 
       0x8e, 0x8f, 0x7, 0x23, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x40, 0x21, 0x2, 
       0x90, 0x91, 0x7, 0x24, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 
       0x92, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0xa4, 
       0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9e, 0x7, 
       0x1b, 0x2, 0x2, 0x98, 0x99, 0x7, 0x23, 0x2, 0x2, 0x99, 0x9a, 0x5, 
       0x40, 0x21, 0x2, 0x9a, 0x9b, 0x7, 0x24, 0x2, 0x2, 0x9b, 0x9d, 0x3, 
       0x2, 0x2, 0x2, 0x9c, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 
       0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 
       0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 
       0xa1, 0xa2, 0x7, 0xc, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x14, 0xb, 0x2, 
       0xa3, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xb1, 0x5, 0x24, 0x13, 0x2, 0xa6, 
       0xad, 0x7, 0x25, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x14, 0xb, 0x2, 0xa8, 
       0xa9, 0x7, 0x25, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x1f, 0x2, 0x2, 0xaa, 
       0xab, 0x5, 0x14, 0xb, 0x2, 0xab, 0xac, 0x7, 0x26, 0x2, 0x2, 0xac, 
       0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
       0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x7, 
       0x26, 0x2, 0x2, 0xb0, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xa6, 0x3, 
       0x2, 0x2, 0x2, 0xb1, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x18, 
       0xd, 0x2, 0xb3, 0xb4, 0x7, 0x1b, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0x21, 
       0x2, 0x2, 0xb5, 0xb7, 0x5, 0x1a, 0xe, 0x2, 0xb6, 0xb5, 0x3, 0x2, 
       0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 
       0x2, 0xb8, 0xb9, 0x7, 0x22, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x1e, 0x10, 
       0x2, 0xba, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x2, 0x2, 0x2, 
       0xbc, 0x19, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc2, 0x5, 0x1c, 0xf, 0x2, 
       0xbe, 0xbf, 0x7, 0x1f, 0x2, 0x2, 0xbf, 0xc1, 0x5, 0x1c, 0xf, 0x2, 
       0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 
       0xa, 0x6, 0x2, 0xc6, 0xd2, 0x7, 0x1b, 0x2, 0x2, 0xc7, 0xc8, 0x7, 
       0x23, 0x2, 0x2, 0xc8, 0xcf, 0x7, 0x24, 0x2, 0x2, 0xc9, 0xca, 0x7, 
       0x23, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x24, 0x13, 0x2, 0xcb, 0xcc, 0x7, 
       0x24, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc9, 0x3, 
       0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 
       0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc7, 0x3, 0x2, 0x2, 0x2, 
       0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd8, 0x7, 0x25, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x20, 0x11, 0x2, 0xd6, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 
       0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x26, 
       0x2, 0x2, 0xdc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x5, 0x6, 0x4, 
       0x2, 0xde, 0xe0, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 
       0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x21, 0x3, 0x2, 0x2, 0x2, 
       0xe1, 0xe2, 0x5, 0x28, 0x15, 0x2, 0xe2, 0xe3, 0x7, 0xc, 0x2, 0x2, 
       0xe3, 0xe4, 0x5, 0x24, 0x13, 0x2, 0xe4, 0xe5, 0x7, 0x20, 0x2, 0x2, 
       0xe5, 0x104, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x24, 0x13, 0x2, 
       0xe7, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x104, 0x7, 0x20, 0x2, 0x2, 0xea, 
       0x104, 0x5, 0x1e, 0x10, 0x2, 0xeb, 0xec, 0x7, 0x6, 0x2, 0x2, 0xec, 
       0xed, 0x7, 0x21, 0x2, 0x2, 0xed, 0xee, 0x5, 0x26, 0x14, 0x2, 0xee, 
       0xef, 0x7, 0x22, 0x2, 0x2, 0xef, 0xf2, 0x5, 0x22, 0x12, 0x2, 0xf0, 
       0xf1, 0x7, 0x7, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x22, 0x12, 0x2, 0xf2, 
       0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0x104, 
       0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x8, 0x2, 0x2, 0xf5, 0xf6, 0x7, 
       0x21, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x26, 0x14, 0x2, 0xf7, 0xf8, 0x7, 
       0x22, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x22, 0x12, 0x2, 0xf9, 0x104, 0x3, 
       0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x9, 0x2, 0x2, 0xfb, 0x104, 0x7, 
       0x20, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xa, 0x2, 0x2, 0xfd, 0x104, 0x7, 
       0x20, 0x2, 0x2, 0xfe, 0x100, 0x7, 0xb, 0x2, 0x2, 0xff, 0x101, 0x5, 
       0x24, 0x13, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 
       0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x104, 0x7, 
       0x20, 0x2, 0x2, 0x103, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x103, 0xe7, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xea, 0x3, 0x2, 0x2, 0x2, 0x103, 0xeb, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfa, 0x3, 
       0x2, 0x2, 0x2, 0x103, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfe, 0x3, 
       0x2, 0x2, 0x2, 0x104, 0x23, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 
       0x36, 0x1c, 0x2, 0x106, 0x25, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 
       0x3e, 0x20, 0x2, 0x108, 0x27, 0x3, 0x2, 0x2, 0x2, 0x109, 0x110, 0x7, 
       0x1b, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x23, 0x2, 0x2, 0x10b, 0x10c, 
       0x5, 0x24, 0x13, 0x2, 0x10c, 0x10d, 0x7, 0x24, 0x2, 0x2, 0x10d, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
       0x3, 0x2, 0x2, 0x2, 0x111, 0x29, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x21, 0x2, 0x2, 0x114, 0x115, 
       0x5, 0x24, 0x13, 0x2, 0x115, 0x116, 0x7, 0x22, 0x2, 0x2, 0x116, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x5, 0x28, 0x15, 0x2, 0x118, 0x11a, 
       0x5, 0x2c, 0x17, 0x2, 0x119, 0x113, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x42, 0x22, 0x2, 0x11c, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x128, 0x5, 0x2a, 0x16, 0x2, 0x11e, 0x11f, 
       0x7, 0x1b, 0x2, 0x2, 0x11f, 0x121, 0x7, 0x21, 0x2, 0x2, 0x120, 0x122, 
       0x5, 0x32, 0x1a, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x128, 
       0x7, 0x22, 0x2, 0x2, 0x124, 0x125, 0x5, 0x30, 0x19, 0x2, 0x125, 0x126, 
       0x5, 0x2e, 0x18, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x127, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x128, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
       0x9, 0x3, 0x2, 0x2, 0x12a, 0x31, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x130, 
       0x5, 0x24, 0x13, 0x2, 0x12c, 0x12d, 0x7, 0x1f, 0x2, 0x2, 0x12d, 0x12f, 
       0x5, 0x24, 0x13, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x33, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x8, 0x1b, 0x1, 0x2, 0x134, 0x135, 
       0x5, 0x2e, 0x18, 0x2, 0x135, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 
       0xc, 0x3, 0x2, 0x2, 0x137, 0x138, 0x9, 0x4, 0x2, 0x2, 0x138, 0x13a, 
       0x5, 0x2e, 0x18, 0x2, 0x139, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x8, 0x1c, 0x1, 0x2, 0x13f, 0x140, 
       0x5, 0x34, 0x1b, 0x2, 0x140, 0x146, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
       0xc, 0x3, 0x2, 0x2, 0x142, 0x143, 0x9, 0x5, 0x2, 0x2, 0x143, 0x145, 
       0x5, 0x34, 0x1b, 0x2, 0x144, 0x141, 0x3, 0x2, 0x2, 0x2, 0x145, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x37, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x8, 0x1d, 0x1, 0x2, 0x14a, 0x14b, 
       0x5, 0x36, 0x1c, 0x2, 0x14b, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 
       0xc, 0x3, 0x2, 0x2, 0x14d, 0x14e, 0x9, 0x6, 0x2, 0x2, 0x14e, 0x150, 
       0x5, 0x36, 0x1c, 0x2, 0x14f, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x39, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x8, 0x1e, 0x1, 0x2, 0x155, 0x156, 
       0x5, 0x38, 0x1d, 0x2, 0x156, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
       0xc, 0x3, 0x2, 0x2, 0x158, 0x159, 0x9, 0x7, 0x2, 0x2, 0x159, 0x15b, 
       0x5, 0x38, 0x1d, 0x2, 0x15a, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 
       0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x8, 0x1f, 0x1, 0x2, 0x160, 0x161, 
       0x5, 0x3a, 0x1e, 0x2, 0x161, 0x167, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
       0xc, 0x3, 0x2, 0x2, 0x163, 0x164, 0x7, 0x19, 0x2, 0x2, 0x164, 0x166, 
       0x5, 0x3a, 0x1e, 0x2, 0x165, 0x162, 0x3, 0x2, 0x2, 0x2, 0x166, 0x169, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 
       0x3, 0x2, 0x2, 0x2, 0x168, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x8, 0x20, 0x1, 0x2, 0x16b, 0x16c, 
       0x5, 0x3c, 0x1f, 0x2, 0x16c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 
       0xc, 0x3, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x1a, 0x2, 0x2, 0x16f, 0x171, 
       0x5, 0x3c, 0x1f, 0x2, 0x170, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x171, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x5, 0x36, 0x1c, 0x2, 0x176, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x9, 0x8, 0x2, 0x2, 0x178, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x25, 0x4a, 0x52, 0x56, 0x5f, 0x6d, 0x7a, 0x7d, 
       0x80, 0x88, 0x94, 0x9e, 0xa3, 0xad, 0xb0, 0xb6, 0xc2, 0xcf, 0xd2, 
       0xd8, 0xdf, 0xe7, 0xf2, 0x100, 0x103, 0x110, 0x119, 0x121, 0x127, 
       0x130, 0x13b, 0x146, 0x151, 0x15c, 0x167, 0x172, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SysYParser::Initializer SysYParser::_init;
