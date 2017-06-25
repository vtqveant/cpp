CXX = g++
CFLAGS = -Wall -g -m64
DEPS = stack.h
OBJ = stack.o

all: stack

%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -c -o $@ $<

stack: $(OBJ)
	g++ $(CFLAGS) -o $@ $^

clean:
	rm -f *.o