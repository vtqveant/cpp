#include <list>

class Stack {
public:

    class Underflow {
    };

    class Overflow {
    };

    class Bad_size {
    };
    virtual void push(char c) = 0; // = 0 means 'subclasses must redefine this'
    virtual char pop() = 0;
};

class Array_stack : public Stack {
    char* p;
    int max_size;
    int top;

public:
    Array_stack(int s);
    ~Array_stack();

    void push(char c);
    char pop();
};

class List_stack : public Stack {
    std::list<char> lc;

public:

    List_stack() {
    }

    // destructor omitted

    // we have an implementation right here

    void push(char c) {
        lc.push_front(c);
    }

    // only a definition, no implementation
    char pop();
};