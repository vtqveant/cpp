sCXX = g++
CFLAGS = -Wall -g -m64
DEPS = 
OBJ = main.o

all: main

%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
	g++ $(CFLAGS) -o $@ $^

clean:
	rm -f *.o