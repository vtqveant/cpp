#include "stack.h"

Array_stack::Array_stack(int s) {
    top = 0;
    if (s < 0 || 10000 < s) {
        throw Bad_size();
    }
    max_size = s;
    p = new char[s];
}

Array_stack::~Array_stack() {
    delete[] p;
}

void Array_stack::push(char c) {
    if (top == max_size) {
        throw Overflow();
    }

    p[top] = c;
    top = top + 1;
}

char Array_stack::pop() {
    if (top == 0) {
        throw Underflow();
    }

    top = top - 1;
    return p[top];
}