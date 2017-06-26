CXX = g++
CFLAGS = -Wall -g -m64
DEPS = 
OBJ = complex.o main.o

all: main

%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
	g++ $(CFLAGS) -o $@ $^

clean:
	rm -f *.o