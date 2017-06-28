#include <list>
#include "stack.h"
#include "complex.h"


int main(int argc, char** argv) {
    Stack<char> sc(200);
    Stack<complex> scplx(30);
    Stack<std::list<int> > sli(45); // space between angle brackets is required

	sc.push('c');
	if (sc.pop() != 'c') {
		throw Stack<char>::Bad_pop();
	}

	scplx.push(complex(1, 2));
	if (scplx.pop() != complex(1, 2)) throw Stack<char>::Bad_pop();

	return 0;
}