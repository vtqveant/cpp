#include <iostream>
#include "stack.h"

using namespace std;

void error(const char* message) {
    cerr << message << endl;
}

int main(int argc, char** argv) {
    char in;
    cout << "Enter a symbol to put on top of the stack" << endl;
    cin >> in;
    Stack::push(in);
    cout << "Stack now has size " << Stack::size() << endl;
    cout << "Popping " << Stack::pop() << endl;
    cout << "Stack now has size " << Stack::size() << endl;
}

namespace Stack {
    const int max_size = 200;
    char v[max_size];
    int top = 0;
}

void Stack::push(char c) {
    if (top == max_size) {
        error("stack overflow");
    } else {
        v[++top] = c;
    }
}

char Stack::pop() {
    return v[top--];
}

int Stack::size() {
    return top;
}