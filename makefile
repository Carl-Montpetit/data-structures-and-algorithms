CPP_COMPILER = g++
CPP_FLAGS = -std=c++20 -Wall -Wextra
OBJECTS = main.o
EXECUTABLE = data_structures_and_algorithms

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CPP_COMPILER) $(CPP_FLAGS) -o $(EXECUTABLE) main.o

main.o: main.cpp array.hpp
	$(CPP_COMPILER) $(CPP_FLAGS) -c main.cpp

clean:
	rm -f $(EXECUTABLE) *.o

