LLVM_CONFIG ?= llvm-config-15
CXX = clang++-15

# LLVM
LLVM_LDFLAGS += `$(LLVM_CONFIG) --ldflags`
LLVM_LIBFLAGS += `$(LLVM_CONFIG) --libs bitwriter core support`
LLVM_CXXFLAGS += `$(LLVM_CONFIG) --cxxflags`
LLVM_CPPFLAGS += `$(LLVM_CONFIG) --cppflags`

# ANTLR
ANTLR4 = java -jar /home/vincent/.local/lib/antlr-4.9.2-complete.jar -Dlanguage=Cpp -no-listener -visitor
ANTLR_LDFLAGS += -L/usr/local/lib/
ANTLR_LIBFLAGS += -lantlr4-runtime
ANTLR_CXXFLAGS += -I/usr/local/include/antlr4-runtime


SRC_DIR = $(PWD)
COMM_FLAGS += -Wall -Wextra -g -fexceptions
LDFLAGS += $(LLVM_LDFLAGS) $(ANTLR_LDFLAGS) -fuse-ld=lld-15
LIBFLAGS += $(LLVM_LIBFLAGS) $(ANTLR_LIBFLAGS)
CXXFLAGS += $(LLVM_CXXFLAGS) $(ANTLR_CXXFLAGS) -I$(SRC_DIR)/include
CPPFLAGS += $(LLVM_CPPFLAGS)
