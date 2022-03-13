
// Generated from SysYLexer.g4 by ANTLR 4.9.2


#include "SysYLexer.h"


using namespace antlr4;


SysYLexer::SysYLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SysYLexer::~SysYLexer() {
  delete _interpreter;
}

std::string SysYLexer::getGrammarFileName() const {
  return "SysYLexer.g4";
}

const std::vector<std::string>& SysYLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& SysYLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& SysYLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& SysYLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& SysYLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> SysYLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& SysYLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> SysYLexer::_decisionToDFA;
atn::PredictionContextCache SysYLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SysYLexer::_atn;
std::vector<uint16_t> SysYLexer::_serializedATN;

std::vector<std::string> SysYLexer::_ruleNames = {
  "Int"
};

std::vector<std::string> SysYLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> SysYLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> SysYLexer::_literalNames = {
  "", "'int'"
};

std::vector<std::string> SysYLexer::_symbolicNames = {
  "", "Int"
};

dfa::Vocabulary SysYLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SysYLexer::_tokenNames;

SysYLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0x3, 0x9, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x5, 0x6, 0x7, 0x6b, 0x2, 0x2, 0x6, 0x7, 0x7, 0x70, 0x2, 0x2, 0x7, 
       0x8, 0x7, 0x76, 0x2, 0x2, 0x8, 0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 
       0x2, 
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

SysYLexer::Initializer SysYLexer::_init;
