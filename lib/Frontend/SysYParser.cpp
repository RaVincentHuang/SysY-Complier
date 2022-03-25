
// Generated from lib/Frontend/SysYParser.g4 by ANTLR 4.9.2


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

tree::TerminalNode* SysYParser::CompUnitContext::EOF() {
  return getToken(SysYParser::EOF, 0);
}

std::vector<SysYParser::ElementContext *> SysYParser::CompUnitContext::element() {
  return getRuleContexts<SysYParser::ElementContext>();
}

SysYParser::ElementContext* SysYParser::CompUnitContext::element(size_t i) {
  return getRuleContext<SysYParser::ElementContext>(i);
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
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysYParser::INT)
      | (1ULL << SysYParser::CONST)
      | (1ULL << SysYParser::VOID))) != 0)) {
      setState(70);
      element();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(SysYParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

SysYParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::ElementContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::FuncDefContext* SysYParser::ElementContext::funcDef() {
  return getRuleContext<SysYParser::FuncDefContext>(0);
}


size_t SysYParser::ElementContext::getRuleIndex() const {
  return SysYParser::RuleElement;
}


antlrcpp::Any SysYParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ElementContext* SysYParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 2, SysYParser::RuleElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      funcDef();
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

//----------------- VarDecl_inContext ------------------------------------------------------------------

SysYParser::VarDecl_inContext::VarDecl_inContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::VarDecl_inContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::VarDefContext *> SysYParser::VarDecl_inContext::varDef() {
  return getRuleContexts<SysYParser::VarDefContext>();
}

SysYParser::VarDefContext* SysYParser::VarDecl_inContext::varDef(size_t i) {
  return getRuleContext<SysYParser::VarDefContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::VarDecl_inContext::COMMA() {
  return getTokens(SysYParser::COMMA);
}

tree::TerminalNode* SysYParser::VarDecl_inContext::COMMA(size_t i) {
  return getToken(SysYParser::COMMA, i);
}


size_t SysYParser::VarDecl_inContext::getRuleIndex() const {
  return SysYParser::RuleVarDecl_in;
}


antlrcpp::Any SysYParser::VarDecl_inContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl_in(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::VarDecl_inContext* SysYParser::varDecl_in() {
  VarDecl_inContext *_localctx = _tracker.createInstance<VarDecl_inContext>(_ctx, getState());
  enterRule(_localctx, 16, SysYParser::RuleVarDecl_in);
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
    setState(139);
    bType();
    setState(140);
    varDef();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(141);
      match(SysYParser::COMMA);
      setState(142);
      varDef();
      setState(147);
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
  enterRule(_localctx, 18, SysYParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      match(SysYParser::Ident);
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(149);
        match(SysYParser::LSBRA);
        setState(150);
        constExp();
        setState(151);
        match(SysYParser::RSBRA);
        setState(157);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(158);
      match(SysYParser::Ident);
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(159);
        match(SysYParser::LSBRA);
        setState(160);
        constExp();
        setState(161);
        match(SysYParser::RSBRA);
        setState(167);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(168);
      match(SysYParser::AGN);
      setState(169);
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
  enterRule(_localctx, 20, SysYParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
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
        setState(172);
        exp();
        break;
      }

      case SysYParser::LCBRA: {
        enterOuterAlt(_localctx, 2);
        setState(173);
        match(SysYParser::LCBRA);
        setState(180);
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
          setState(174);
          initVal();
          setState(175);
          match(SysYParser::LCBRA);
          setState(176);
          match(SysYParser::COMMA);
          setState(177);
          initVal();
          setState(178);
          match(SysYParser::RCBRA);
        }
        setState(182);
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
  enterRule(_localctx, 22, SysYParser::RuleFuncDef);
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
    funcType();
    setState(186);
    match(SysYParser::Ident);
    setState(187);
    match(SysYParser::LBRA);
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::INT) {
      setState(188);
      funcFParams();
    }
    setState(191);
    match(SysYParser::RBRA);
    setState(192);
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
  enterRule(_localctx, 24, SysYParser::RuleFuncType);
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
    setState(194);
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
  enterRule(_localctx, 26, SysYParser::RuleFuncFParams);
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
    setState(196);
    funcFParam();
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(197);
      match(SysYParser::COMMA);
      setState(198);
      funcFParam();
      setState(203);
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
  enterRule(_localctx, 28, SysYParser::RuleFuncFParam);
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
    setState(204);
    bType();
    setState(205);
    match(SysYParser::Ident);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::LSBRA) {
      setState(206);
      match(SysYParser::LSBRA);
      setState(207);
      match(SysYParser::RSBRA);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::LSBRA) {
        setState(208);
        match(SysYParser::LSBRA);
        setState(209);
        exp();
        setState(210);
        match(SysYParser::RSBRA);
        setState(216);
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
  enterRule(_localctx, 30, SysYParser::RuleBlock);
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
    setState(219);
    match(SysYParser::LCBRA);
    setState(223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysYParser::INT)
      | (1ULL << SysYParser::CONST)
      | (1ULL << SysYParser::IF)
      | (1ULL << SysYParser::WHILE)
      | (1ULL << SysYParser::FOR)
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
      setState(220);
      blockItem();
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(226);
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
  enterRule(_localctx, 32, SysYParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::INT:
      case SysYParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(228);
        decl();
        break;
      }

      case SysYParser::IF:
      case SysYParser::WHILE:
      case SysYParser::FOR:
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
        setState(229);
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

//----------------- Stmt_inContext ------------------------------------------------------------------

SysYParser::Stmt_inContext::Stmt_inContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::LValContext* SysYParser::Stmt_inContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

tree::TerminalNode* SysYParser::Stmt_inContext::AGN() {
  return getToken(SysYParser::AGN, 0);
}

SysYParser::ExpContext* SysYParser::Stmt_inContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}


size_t SysYParser::Stmt_inContext::getRuleIndex() const {
  return SysYParser::RuleStmt_in;
}


antlrcpp::Any SysYParser::Stmt_inContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYParserVisitor*>(visitor))
    return parserVisitor->visitStmt_in(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::Stmt_inContext* SysYParser::stmt_in() {
  Stmt_inContext *_localctx = _tracker.createInstance<Stmt_inContext>(_ctx, getState());
  enterRule(_localctx, 34, SysYParser::RuleStmt_in);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(232);
      lVal();
      setState(233);
      match(SysYParser::AGN);
      setState(234);
      exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(237);
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
        setState(236);
        exp();
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

std::vector<tree::TerminalNode *> SysYParser::StmtContext::SEMI() {
  return getTokens(SysYParser::SEMI);
}

tree::TerminalNode* SysYParser::StmtContext::SEMI(size_t i) {
  return getToken(SysYParser::SEMI, i);
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

tree::TerminalNode* SysYParser::StmtContext::FOR() {
  return getToken(SysYParser::FOR, 0);
}

std::vector<SysYParser::Stmt_inContext *> SysYParser::StmtContext::stmt_in() {
  return getRuleContexts<SysYParser::Stmt_inContext>();
}

SysYParser::Stmt_inContext* SysYParser::StmtContext::stmt_in(size_t i) {
  return getRuleContext<SysYParser::Stmt_inContext>(i);
}

SysYParser::VarDecl_inContext* SysYParser::StmtContext::varDecl_in() {
  return getRuleContext<SysYParser::VarDecl_inContext>(0);
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
  enterRule(_localctx, 36, SysYParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      lVal();
      setState(242);
      match(SysYParser::AGN);
      setState(243);
      exp();
      setState(244);
      match(SysYParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(247);
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
        setState(246);
        exp();
      }
      setState(249);
      match(SysYParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(250);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(251);
      match(SysYParser::IF);
      setState(252);
      match(SysYParser::LBRA);
      setState(253);
      cond();
      setState(254);
      match(SysYParser::RBRA);
      setState(255);
      stmt();
      setState(258);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(256);
        match(SysYParser::ELSE);
        setState(257);
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
      setState(260);
      match(SysYParser::FOR);
      setState(261);
      match(SysYParser::LBRA);
      setState(264);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::ADD:
        case SysYParser::SUB:
        case SysYParser::NOT:
        case SysYParser::Ident:
        case SysYParser::DEC:
        case SysYParser::OCT:
        case SysYParser::HEX:
        case SysYParser::SEMI:
        case SysYParser::LBRA: {
          setState(262);
          stmt_in();
          break;
        }

        case SysYParser::INT: {
          setState(263);
          varDecl_in();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(266);
      match(SysYParser::SEMI);
      setState(267);
      cond();
      setState(268);
      match(SysYParser::SEMI);
      setState(269);
      stmt_in();
      setState(270);
      match(SysYParser::RBRA);
      setState(271);
      stmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(273);
      match(SysYParser::WHILE);
      setState(274);
      match(SysYParser::LBRA);
      setState(275);
      cond();
      setState(276);
      match(SysYParser::RBRA);
      setState(277);
      stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(279);
      match(SysYParser::BREAK);
      setState(280);
      match(SysYParser::SEMI);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(281);
      match(SysYParser::CONTINUE);
      setState(282);
      match(SysYParser::SEMI);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(283);
      match(SysYParser::RETURN);
      setState(285);
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
        setState(284);
        exp();
      }
      setState(287);
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
  enterRule(_localctx, 38, SysYParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
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
  enterRule(_localctx, 40, SysYParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
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
  enterRule(_localctx, 42, SysYParser::RuleLVal);

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
    setState(294);
    match(SysYParser::Ident);
    setState(301);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(295);
        match(SysYParser::LSBRA);
        setState(296);
        exp();
        setState(297);
        match(SysYParser::RSBRA); 
      }
      setState(303);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
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
  enterRule(_localctx, 44, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::LBRA: {
        enterOuterAlt(_localctx, 1);
        setState(304);
        match(SysYParser::LBRA);
        setState(305);
        exp();
        setState(306);
        match(SysYParser::RBRA);
        break;
      }

      case SysYParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(308);
        lVal();
        break;
      }

      case SysYParser::DEC:
      case SysYParser::OCT:
      case SysYParser::HEX: {
        enterOuterAlt(_localctx, 3);
        setState(309);
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
  enterRule(_localctx, 46, SysYParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
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
  enterRule(_localctx, 48, SysYParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      match(SysYParser::Ident);
      setState(316);
      match(SysYParser::LBRA);
      setState(318);
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
        setState(317);
        funcRParams();
      }
      setState(320);
      match(SysYParser::RBRA);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(321);
      unaryOp();
      setState(322);
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
  enterRule(_localctx, 50, SysYParser::RuleUnaryOp);
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
    setState(326);
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
  enterRule(_localctx, 52, SysYParser::RuleFuncRParams);
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
    setState(328);
    exp();
    setState(333);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::COMMA) {
      setState(329);
      match(SysYParser::COMMA);
      setState(330);
      exp();
      setState(335);
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
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, SysYParser::RuleMulExp, precedence);

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
    setState(337);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(344);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MulExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMulExp);
        setState(339);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(340);
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
        setState(341);
        unaryExp(); 
      }
      setState(346);
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
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, SysYParser::RuleAddExp, precedence);

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
    setState(348);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(355);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AddExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAddExp);
        setState(350);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(351);
        _la = _input->LA(1);
        if (!(_la == SysYParser::ADD

        || _la == SysYParser::SUB)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(352);
        mulExp(0); 
      }
      setState(357);
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
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, SysYParser::RuleRelExp, precedence);

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
    setState(359);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(366);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RelExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelExp);
        setState(361);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(362);
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
        setState(363);
        addExp(0); 
      }
      setState(368);
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
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, SysYParser::RuleEqExp, precedence);

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
    setState(370);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEqExp);
        setState(372);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(373);
        _la = _input->LA(1);
        if (!(_la == SysYParser::EQL

        || _la == SysYParser::NEQ)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(374);
        relExp(0); 
      }
      setState(379);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
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
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, SysYParser::RuleLAndExp, precedence);

    

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
    setState(381);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(388);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LAndExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLAndExp);
        setState(383);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(384);
        match(SysYParser::AND);
        setState(385);
        eqExp(0); 
      }
      setState(390);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
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
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, SysYParser::RuleLOrExp, precedence);

    

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
    setState(392);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(399);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LOrExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLOrExp);
        setState(394);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(395);
        match(SysYParser::OR);
        setState(396);
        lAndExp(0); 
      }
      setState(401);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
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
  enterRule(_localctx, 66, SysYParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
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
  enterRule(_localctx, 68, SysYParser::RuleIntConst);
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
    setState(404);
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
    case 27: return mulExpSempred(dynamic_cast<MulExpContext *>(context), predicateIndex);
    case 28: return addExpSempred(dynamic_cast<AddExpContext *>(context), predicateIndex);
    case 29: return relExpSempred(dynamic_cast<RelExpContext *>(context), predicateIndex);
    case 30: return eqExpSempred(dynamic_cast<EqExpContext *>(context), predicateIndex);
    case 31: return lAndExpSempred(dynamic_cast<LAndExpContext *>(context), predicateIndex);
    case 32: return lOrExpSempred(dynamic_cast<LOrExpContext *>(context), predicateIndex);

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
  "compUnit", "element", "decl", "constDecl", "bType", "constDef", "constInitVal", 
  "varDecl", "varDecl_in", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
  "funcFParam", "block", "blockItem", "stmt_in", "stmt", "exp", "cond", 
  "lVal", "primaryExp", "number", "unaryExp", "unaryOp", "funcRParams", 
  "mulExp", "addExp", "relExp", "eqExp", "lAndExp", "lOrExp", "constExp", 
  "intConst"
};

std::vector<std::string> SysYParser::_literalNames = {
  "", "'int'", "'const'", "'void'", "'if'", "'else'", "'while'", "'for'", 
  "'break'", "'continue'", "'return'", "'='", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'!'", "'&&'", "'||'", 
  "", "", "", "", "','", "';'", "'('", "')'", "'['", "']'", "'{'", "'}'"
};

std::vector<std::string> SysYParser::_symbolicNames = {
  "", "INT", "CONST", "VOID", "IF", "ELSE", "WHILE", "FOR", "BREAK", "CONTINUE", 
  "RETURN", "AGN", "ADD", "SUB", "MUL", "DIV", "MOD", "EQL", "NEQ", "LES", 
  "GRT", "LEQ", "GEQ", "NOT", "AND", "OR", "Ident", "DEC", "OCT", "HEX", 
  "COMMA", "SEMI", "LBRA", "RBRA", "LSBRA", "RSBRA", "LCBRA", "RCBRA", "WS", 
  "SL_COMMENT", "COMMENT"
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
       0x3, 0x2a, 0x199, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x7, 0x2, 0x4a, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0x4d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x3, 0x3, 0x5, 0x3, 0x53, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
       0x57, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x7, 0x5, 0x5e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x61, 0xb, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6c, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
       0x6f, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x79, 0xa, 0x8, 0xc, 0x8, 
       0xe, 0x8, 0x7c, 0xb, 0x8, 0x5, 0x8, 0x7e, 0xa, 0x8, 0x3, 0x8, 0x5, 
       0x8, 0x81, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
       0x9, 0x87, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8a, 0xb, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x92, 
       0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x95, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x9c, 0xa, 0xb, 0xc, 0xb, 
       0xe, 0xb, 0x9f, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x7, 0xb, 0xa6, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xa9, 0xb, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xad, 0xa, 0xb, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0xb7, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0xba, 0xa, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc0, 0xa, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x7, 0xf, 0xca, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xcd, 0xb, 
       0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xd7, 0xa, 0x10, 0xc, 0x10, 
       0xe, 0x10, 0xda, 0xb, 0x10, 0x5, 0x10, 0xdc, 0xa, 0x10, 0x3, 0x11, 
       0x3, 0x11, 0x7, 0x11, 0xe0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe3, 
       0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
       0xe9, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x5, 0x13, 0xf0, 0xa, 0x13, 0x5, 0x13, 0xf2, 0xa, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
       0x14, 0xfa, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
       0x105, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
       0x14, 0x10b, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x120, 0xa, 0x14, 0x3, 
       0x14, 0x5, 0x14, 0x123, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x7, 0x17, 0x12e, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x131, 0xb, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x5, 0x18, 0x139, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x141, 0xa, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x147, 0xa, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x14e, 
       0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x151, 0xb, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x159, 
       0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x15c, 0xb, 0x1d, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x164, 
       0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x167, 0xb, 0x1e, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x16f, 
       0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x172, 0xb, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x17a, 
       0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x17d, 0xb, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x185, 
       0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x188, 0xb, 0x21, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x190, 
       0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x193, 0xb, 0x22, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x2, 0x8, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x25, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
       0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x44, 0x46, 0x2, 0x9, 0x4, 0x2, 0x3, 0x3, 0x5, 
       0x5, 0x4, 0x2, 0xe, 0xf, 0x19, 0x19, 0x3, 0x2, 0x10, 0x12, 0x3, 0x2, 
       0xe, 0xf, 0x3, 0x2, 0x15, 0x18, 0x3, 0x2, 0x13, 0x14, 0x3, 0x2, 0x1d, 
       0x1f, 0x2, 0x1a5, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x52, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x56, 0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x64, 0x3, 0x2, 0x2, 0x2, 0xc, 0x66, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x80, 0x3, 0x2, 0x2, 0x2, 0x10, 0x82, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x14, 0xac, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0xb9, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc4, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xce, 0x3, 
       0x2, 0x2, 0x2, 0x20, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe8, 0x3, 0x2, 
       0x2, 0x2, 0x24, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x26, 0x122, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0x124, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x126, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0x128, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x138, 0x3, 0x2, 
       0x2, 0x2, 0x30, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x146, 0x3, 0x2, 
       0x2, 0x2, 0x34, 0x148, 0x3, 0x2, 0x2, 0x2, 0x36, 0x14a, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x152, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x15d, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x168, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x173, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x189, 0x3, 0x2, 
       0x2, 0x2, 0x44, 0x194, 0x3, 0x2, 0x2, 0x2, 0x46, 0x196, 0x3, 0x2, 
       0x2, 0x2, 0x48, 0x4a, 0x5, 0x4, 0x3, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 
       0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x2, 0x2, 0x3, 0x4f, 0x3, 
       0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x5, 0x6, 0x4, 0x2, 0x51, 0x53, 0x5, 
       0x18, 0xd, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x51, 0x3, 
       0x2, 0x2, 0x2, 0x53, 0x5, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x5, 0x8, 
       0x5, 0x2, 0x55, 0x57, 0x5, 0x10, 0x9, 0x2, 0x56, 0x54, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x59, 0x7, 0x4, 0x2, 0x2, 0x59, 0x5a, 0x5, 0xa, 0x6, 0x2, 
       0x5a, 0x5f, 0x5, 0xc, 0x7, 0x2, 0x5b, 0x5c, 0x7, 0x20, 0x2, 0x2, 
       0x5c, 0x5e, 0x5, 0xc, 0x7, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
       0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 
       0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x21, 0x2, 0x2, 0x63, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x64, 0x65, 0x7, 0x3, 0x2, 0x2, 0x65, 0xb, 0x3, 0x2, 0x2, 
       0x2, 0x66, 0x6d, 0x7, 0x1c, 0x2, 0x2, 0x67, 0x68, 0x7, 0x24, 0x2, 
       0x2, 0x68, 0x69, 0x5, 0x44, 0x23, 0x2, 0x69, 0x6a, 0x7, 0x25, 0x2, 
       0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x67, 0x3, 0x2, 0x2, 0x2, 
       0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 
       0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0xd, 0x2, 0x2, 0x71, 0x72, 0x5, 
       0xe, 0x8, 0x2, 0x72, 0xd, 0x3, 0x2, 0x2, 0x2, 0x73, 0x81, 0x5, 0x44, 
       0x23, 0x2, 0x74, 0x7d, 0x7, 0x26, 0x2, 0x2, 0x75, 0x7a, 0x5, 0xe, 
       0x8, 0x2, 0x76, 0x77, 0x7, 0x20, 0x2, 0x2, 0x77, 0x79, 0x5, 0xe, 
       0x8, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 
       0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x27, 0x2, 0x2, 0x80, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x80, 0x74, 0x3, 0x2, 0x2, 0x2, 0x81, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0xa, 0x6, 0x2, 0x83, 0x88, 0x5, 0x14, 
       0xb, 0x2, 0x84, 0x85, 0x7, 0x20, 0x2, 0x2, 0x85, 0x87, 0x5, 0x14, 
       0xb, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 
       0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 
       0x8c, 0x7, 0x21, 0x2, 0x2, 0x8c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x8d, 
       0x8e, 0x5, 0xa, 0x6, 0x2, 0x8e, 0x93, 0x5, 0x14, 0xb, 0x2, 0x8f, 
       0x90, 0x7, 0x20, 0x2, 0x2, 0x90, 0x92, 0x5, 0x14, 0xb, 0x2, 0x91, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x13, 0x3, 
       0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9d, 0x7, 0x1c, 
       0x2, 0x2, 0x97, 0x98, 0x7, 0x24, 0x2, 0x2, 0x98, 0x99, 0x5, 0x44, 
       0x23, 0x2, 0x99, 0x9a, 0x7, 0x25, 0x2, 0x2, 0x9a, 0x9c, 0x3, 0x2, 
       0x2, 0x2, 0x9b, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 
       0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 
       0x9e, 0xad, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0xa7, 0x7, 0x1c, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x24, 0x2, 0x2, 0xa2, 
       0xa3, 0x5, 0x44, 0x23, 0x2, 0xa3, 0xa4, 0x7, 0x25, 0x2, 0x2, 0xa4, 
       0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 
       0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0xab, 0x7, 0xd, 0x2, 0x2, 0xab, 0xad, 0x5, 0x16, 
       0xc, 0x2, 0xac, 0x96, 0x3, 0x2, 0x2, 0x2, 0xac, 0xa0, 0x3, 0x2, 0x2, 
       0x2, 0xad, 0x15, 0x3, 0x2, 0x2, 0x2, 0xae, 0xba, 0x5, 0x28, 0x15, 
       0x2, 0xaf, 0xb6, 0x7, 0x26, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x16, 0xc, 
       0x2, 0xb1, 0xb2, 0x7, 0x26, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x20, 0x2, 
       0x2, 0xb3, 0xb4, 0x5, 0x16, 0xc, 0x2, 0xb4, 0xb5, 0x7, 0x27, 0x2, 
       0x2, 0xb5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb0, 0x3, 0x2, 0x2, 0x2, 
       0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0xba, 0x7, 0x27, 0x2, 0x2, 0xb9, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0xba, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
       0x5, 0x1a, 0xe, 0x2, 0xbc, 0xbd, 0x7, 0x1c, 0x2, 0x2, 0xbd, 0xbf, 
       0x7, 0x22, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xbe, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 
       0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x23, 0x2, 0x2, 0xc2, 0xc3, 0x5, 
       0x20, 0x11, 0x2, 0xc3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x9, 
       0x2, 0x2, 0x2, 0xc5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xcb, 0x5, 0x1e, 
       0x10, 0x2, 0xc7, 0xc8, 0x7, 0x20, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x1e, 
       0x10, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 
       0x2, 0xcc, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 
       0xce, 0xcf, 0x5, 0xa, 0x6, 0x2, 0xcf, 0xdb, 0x7, 0x1c, 0x2, 0x2, 
       0xd0, 0xd1, 0x7, 0x24, 0x2, 0x2, 0xd1, 0xd8, 0x7, 0x25, 0x2, 0x2, 
       0xd2, 0xd3, 0x7, 0x24, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x28, 0x15, 0x2, 
       0xd4, 0xd5, 0x7, 0x25, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 
       0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 
       0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd0, 0x3, 
       0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x1f, 0x3, 0x2, 
       0x2, 0x2, 0xdd, 0xe1, 0x7, 0x26, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x22, 
       0x12, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 
       0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 
       0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 
       0xe4, 0xe5, 0x7, 0x27, 0x2, 0x2, 0xe5, 0x21, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0xe9, 0x5, 0x6, 0x4, 0x2, 0xe7, 0xe9, 0x5, 0x26, 0x14, 0x2, 
       0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x2c, 0x17, 0x2, 0xeb, 
       0xec, 0x7, 0xd, 0x2, 0x2, 0xec, 0xed, 0x5, 0x28, 0x15, 0x2, 0xed, 
       0xf2, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x28, 0x15, 0x2, 0xef, 
       0xee, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0xf1, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 
       0x2, 0x2, 0x2, 0xf2, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x2c, 
       0x17, 0x2, 0xf4, 0xf5, 0x7, 0xd, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x28, 
       0x15, 0x2, 0xf6, 0xf7, 0x7, 0x21, 0x2, 0x2, 0xf7, 0x123, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0xfa, 0x5, 0x28, 0x15, 0x2, 0xf9, 0xf8, 0x3, 0x2, 
       0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 
       0x2, 0xfb, 0x123, 0x7, 0x21, 0x2, 0x2, 0xfc, 0x123, 0x5, 0x20, 0x11, 
       0x2, 0xfd, 0xfe, 0x7, 0x6, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x22, 0x2, 
       0x2, 0xff, 0x100, 0x5, 0x2a, 0x16, 0x2, 0x100, 0x101, 0x7, 0x23, 
       0x2, 0x2, 0x101, 0x104, 0x5, 0x26, 0x14, 0x2, 0x102, 0x103, 0x7, 
       0x7, 0x2, 0x2, 0x103, 0x105, 0x5, 0x26, 0x14, 0x2, 0x104, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 0x9, 0x2, 0x2, 0x107, 0x10a, 
       0x7, 0x22, 0x2, 0x2, 0x108, 0x10b, 0x5, 0x24, 0x13, 0x2, 0x109, 0x10b, 
       0x5, 0x12, 0xa, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
       0x7, 0x21, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x2a, 0x16, 0x2, 0x10e, 0x10f, 
       0x7, 0x21, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x24, 0x13, 0x2, 0x110, 0x111, 
       0x7, 0x23, 0x2, 0x2, 0x111, 0x112, 0x5, 0x26, 0x14, 0x2, 0x112, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x8, 0x2, 0x2, 0x114, 0x115, 
       0x7, 0x22, 0x2, 0x2, 0x115, 0x116, 0x5, 0x2a, 0x16, 0x2, 0x116, 0x117, 
       0x7, 0x23, 0x2, 0x2, 0x117, 0x118, 0x5, 0x26, 0x14, 0x2, 0x118, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0xa, 0x2, 0x2, 0x11a, 0x123, 
       0x7, 0x21, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0xb, 0x2, 0x2, 0x11c, 0x123, 
       0x7, 0x21, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0xc, 0x2, 0x2, 0x11e, 0x120, 
       0x5, 0x28, 0x15, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 
       0x7, 0x21, 0x2, 0x2, 0x122, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x122, 0xf9, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x122, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x106, 0x3, 0x2, 0x2, 0x2, 0x122, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x119, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x123, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x3a, 0x1e, 0x2, 0x125, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x5, 0x42, 0x22, 0x2, 0x127, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x128, 0x12f, 0x7, 0x1c, 0x2, 0x2, 0x129, 0x12a, 
       0x7, 0x24, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x28, 0x15, 0x2, 0x12b, 0x12c, 
       0x7, 0x25, 0x2, 0x2, 0x12c, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
       0x7, 0x22, 0x2, 0x2, 0x133, 0x134, 0x5, 0x28, 0x15, 0x2, 0x134, 0x135, 
       0x7, 0x23, 0x2, 0x2, 0x135, 0x139, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 
       0x5, 0x2c, 0x17, 0x2, 0x137, 0x139, 0x5, 0x30, 0x19, 0x2, 0x138, 
       0x132, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x13b, 0x5, 0x46, 0x24, 0x2, 0x13b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x147, 0x5, 0x2e, 0x18, 0x2, 0x13d, 0x13e, 0x7, 0x1c, 0x2, 0x2, 0x13e, 
       0x140, 0x7, 0x22, 0x2, 0x2, 0x13f, 0x141, 0x5, 0x36, 0x1c, 0x2, 0x140, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x147, 0x7, 0x23, 0x2, 0x2, 0x143, 
       0x144, 0x5, 0x34, 0x1b, 0x2, 0x144, 0x145, 0x5, 0x32, 0x1a, 0x2, 
       0x145, 0x147, 0x3, 0x2, 0x2, 0x2, 0x146, 0x13c, 0x3, 0x2, 0x2, 0x2, 
       0x146, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x146, 0x143, 0x3, 0x2, 0x2, 0x2, 
       0x147, 0x33, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x9, 0x3, 0x2, 0x2, 
       0x149, 0x35, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14f, 0x5, 0x28, 0x15, 0x2, 
       0x14b, 0x14c, 0x7, 0x20, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x28, 0x15, 
       0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 
       0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 
       0x2, 0x150, 0x37, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 
       0x2, 0x152, 0x153, 0x8, 0x1d, 0x1, 0x2, 0x153, 0x154, 0x5, 0x32, 
       0x1a, 0x2, 0x154, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0xc, 0x3, 
       0x2, 0x2, 0x156, 0x157, 0x9, 0x4, 0x2, 0x2, 0x157, 0x159, 0x5, 0x32, 
       0x1a, 0x2, 0x158, 0x155, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15c, 0x3, 0x2, 
       0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 
       0x2, 0x2, 0x15b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 
       0x2, 0x2, 0x15d, 0x15e, 0x8, 0x1e, 0x1, 0x2, 0x15e, 0x15f, 0x5, 0x38, 
       0x1d, 0x2, 0x15f, 0x165, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0xc, 0x3, 
       0x2, 0x2, 0x161, 0x162, 0x9, 0x5, 0x2, 0x2, 0x162, 0x164, 0x5, 0x38, 
       0x1d, 0x2, 0x163, 0x160, 0x3, 0x2, 0x2, 0x2, 0x164, 0x167, 0x3, 0x2, 
       0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 
       0x2, 0x2, 0x166, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 
       0x2, 0x2, 0x168, 0x169, 0x8, 0x1f, 0x1, 0x2, 0x169, 0x16a, 0x5, 0x3a, 
       0x1e, 0x2, 0x16a, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0xc, 0x3, 
       0x2, 0x2, 0x16c, 0x16d, 0x9, 0x6, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x3a, 
       0x1e, 0x2, 0x16e, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 
       0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 
       0x2, 0x2, 0x171, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 
       0x2, 0x2, 0x173, 0x174, 0x8, 0x20, 0x1, 0x2, 0x174, 0x175, 0x5, 0x3c, 
       0x1f, 0x2, 0x175, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0xc, 0x3, 
       0x2, 0x2, 0x177, 0x178, 0x9, 0x7, 0x2, 0x2, 0x178, 0x17a, 0x5, 0x3c, 
       0x1f, 0x2, 0x179, 0x176, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17d, 0x3, 0x2, 
       0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 
       0x2, 0x2, 0x17c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 
       0x2, 0x2, 0x17e, 0x17f, 0x8, 0x21, 0x1, 0x2, 0x17f, 0x180, 0x5, 0x3e, 
       0x20, 0x2, 0x180, 0x186, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0xc, 0x3, 
       0x2, 0x2, 0x182, 0x183, 0x7, 0x1a, 0x2, 0x2, 0x183, 0x185, 0x5, 0x3e, 
       0x20, 0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 
       0x2, 0x2, 0x187, 0x41, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 
       0x2, 0x2, 0x189, 0x18a, 0x8, 0x22, 0x1, 0x2, 0x18a, 0x18b, 0x5, 0x40, 
       0x21, 0x2, 0x18b, 0x191, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0xc, 0x3, 
       0x2, 0x2, 0x18d, 0x18e, 0x7, 0x1b, 0x2, 0x2, 0x18e, 0x190, 0x5, 0x40, 
       0x21, 0x2, 0x18f, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x3, 0x2, 
       0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 
       0x2, 0x2, 0x192, 0x43, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 
       0x2, 0x2, 0x194, 0x195, 0x5, 0x3a, 0x1e, 0x2, 0x195, 0x45, 0x3, 0x2, 
       0x2, 0x2, 0x196, 0x197, 0x9, 0x8, 0x2, 0x2, 0x197, 0x47, 0x3, 0x2, 
       0x2, 0x2, 0x29, 0x4b, 0x52, 0x56, 0x5f, 0x6d, 0x7a, 0x7d, 0x80, 0x88, 
       0x93, 0x9d, 0xa7, 0xac, 0xb6, 0xb9, 0xbf, 0xcb, 0xd8, 0xdb, 0xe1, 
       0xe8, 0xef, 0xf1, 0xf9, 0x104, 0x10a, 0x11f, 0x122, 0x12f, 0x138, 
       0x140, 0x146, 0x14f, 0x15a, 0x165, 0x170, 0x17b, 0x186, 0x191, 
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
