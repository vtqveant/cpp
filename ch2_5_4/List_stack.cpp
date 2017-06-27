#include "stack.h"

char List_stack::pop() {
	char x = lc.front(); // get the first element
	lc.pop_front(); // remove the first element
	return x;
}