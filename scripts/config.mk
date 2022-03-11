SRC_DIR = $(PWD)
COMM_FLAGS = -Wall -Wextra
LDFLAGS += `$(LLVM_CONFIG) --ldflags`
LIBFLAGS += `$(LLVM_CONFIG) --libs bitwriter core support`
CXXFLAGS += $(COMM_FLAGS) `$(LLVM_CONFIG) --cxxflags`
CPPFLAGS += `$(LLVM_CONFIG) --cppflags` -I$(SRC_DIR)/include