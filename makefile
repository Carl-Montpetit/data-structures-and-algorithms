CC := g++
CFLAGS := -std=c++20 -Wall -Wextra

# List of source files
SRCS := array.cpp main.cpp

# List of object files derived from source files
OBJS := $(SRCS:.cpp=.o)

# Output executable name
EXECUTABLE := data_structures_and_algorithms

# Rule to build the executable
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE)

# Rule to build object files from source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJS) $(EXECUTABLE)

