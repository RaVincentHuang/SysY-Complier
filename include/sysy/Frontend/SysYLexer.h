
// Generated from lib/Frontend/SysYLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SysYLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, CONST = 2, VOID = 3, IF = 4, ELSE = 5, WHILE = 6, FOR = 7, 
    BREAK = 8, CONTINUE = 9, RETURN = 10, AGN = 11, ADD = 12, SUB = 13, 
    MUL = 14, DIV = 15, MOD = 16, EQL = 17, NEQ = 18, LES = 19, GRT = 20, 
    LEQ = 21, GEQ = 22, NOT = 23, AND = 24, OR = 25, Ident = 26, DEC = 27, 
    OCT = 28, HEX = 29, COMMA = 30, SEMI = 31, LBRA = 32, RBRA = 33, LSBRA = 34, 
    RSBRA = 35, LCBRA = 36, RCBRA = 37, WS = 38, SL_COMMENT = 39, COMMENT = 40
  };

  explicit SysYLexer(antlr4::CharStream *input);
  ~SysYLexer();

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

