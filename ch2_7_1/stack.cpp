#include <list>
#include "stack.h"
#include "complex.h"

template<class T> Stack<T>::Stack(int s) {
    top = 0;
	max_size = s;
	v = new T[max_size];
}

template<class T> Stack<T>::~Stack() {
	// nothing?
}

template<class T> void Stack<T>::push(T c) {
	if (top == max_size) {
		throw Overflow();
	}
	v[top] = c;
	top = top + 1;
}

template<class T> T Stack<T>::pop() {
	if (top == 0) {
		throw Underflow();
	}
	top = top - 1;
	return v[top];
}

// perform explicit template instantiation where you tell the compiler 
// all the template arguments which might be used in stack.cpp which will 
// then allow it to generate them at compile time and link normally. 
template class Stack<char>;
template class Stack<complex>;
template class Stack<std::list<int> >;