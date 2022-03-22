include ./scripts/config.mk

vpath %.cpp lib/Frontend:.

SYSYC = sysyc
SYSYC_OBJ = sysyc.o

FRONTEND_OBJ = SysYParser.o SysYLexer.o SysYParserVisitor.o SysYParserBaseVisitor.o Frontend.o AST.o

default : $(SYSYC)

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $<

$(SYSYC) : $(SYSYC_OBJ) $(FRONTEND_OBJ)
	@echo Linking $@
	$(CXX) -o $@ $(CXXFLAGS) $(LDFLAGS) $^ $(LIBFLAGS)
	rm -rf *.o

clean:
	rm -rf $(SYSYC) $(SYSYC_OBJ) $(FRONTEND_OBJ)

init:
	$(ANTLR4) lib/Frontend/SysYLexer.g4 lib/Frontend/SysYParser.g4 