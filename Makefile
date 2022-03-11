LLVM_CONFIG ?= llvm-config-14
CXX = clang++-14

include ./scripts/config.mk

SYSYC = sysyc
SYSYC_OBJ = sysyc.o

default : $(SYSYC)

%.o : $(SRC_DIR)/%.cpp
	@echo Compiling $*.cpp
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $<

$(SYSYC) : $(SYSYC_OBJ)
	@echo Linking $@
	$(CXX) -o $@ $(CXXFLAGS) $(LDFLAGS) $^ $(LIBFLAGS)

clean:
	rm -rf $(SYSYC) $(SYSYC_OBJ)