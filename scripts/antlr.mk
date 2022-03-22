ANTLR4 = java -jar /home/vincent/.local/lib/antlr-4.9.2-complete.jar -Dlanguage=Cpp -no-listener -visitor
LDFLAGS += -L/usr/local/lib/
LIBFLAGS += -lantlr4-runtime
CXXFLAGS += -I/usr/local/include/antlr4-runtime
COMM_FLAGS += -Wall -g