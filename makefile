CC := g++
CFLAGS := -std=c++20 -Wall -Wextra

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
