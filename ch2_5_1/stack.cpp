#include <iostream>
#include "stack.h"

using namespace std;

namespace Stack {
    const int max_size = 200;

    struct Rep {
        char v[max_size];
        int top = 0;
    };

    const int max = 16; // max num of stacks

    Rep stacks[max];
    bool used[max];

    typedef Rep& stack;
}

void Stack::push(stack s, char c) {
    if (s.top == max_size) {
        cerr << "stack overflow" << endl;
    } else {
        s.v[++s.top] = c;
    }
}

char Stack::pop(stack s) {
    return s.v[s.top--];
}

Stack::stack Stack::create() {
    int next = 0;
    for (int i = 0; i < Stack::max; i++) {
        if (!used[i]) {
            used[i] = true;
            next = i;
            break;
        }
    }

    Rep s;
    stacks[next] = s;
    return stacks[next];
}

void Stack::destroy(Stack::stack s) {
    // TODO
}