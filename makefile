CC := clang++
CFLAGS := -fsanitize=address -std=c++20 -Wall -Wextra -g
# LLVM prefix
LLVM_PREFIX := /opt/homebrew/Cellar/llvm/17.0.6

# List of source files
SRCS := main.cpp
HDRS := array.hpp hash-table.hpp key-value-pair.hpp linked-list.hpp node.hpp

# List of object files derived from source files
OBJS := $(SRCS:.cpp=.o)

# Output executable name
EXECUTABLE := data_structures_and_algorithms

# Rule to build the executable
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE)

# Rule to build object files from source files
%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f *.o $(EXECUTABLE)

# Analyze target to run the Clang Static Analyzer
analyze:
	$(LLVM_PREFIX)/bin/scan-build make
