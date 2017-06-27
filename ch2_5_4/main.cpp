#include "stack.h"


void f(Stack& s_ref) {
	s_ref.push('c');
	if (s_ref.pop() != 'c') {
		throw Stack::Bad_size();
	}
}; // note the semicolon

void g() {
	Array_stack as(200);
	f(as); // Array_stack::pop() will be called
}

void h() {
    List_stack ls;
    f(ls); // List_stack::pop() will be called
}

int main(int argc, char** argv) {
	g();
	h();

	return 0;
} // note the lack of semicolon