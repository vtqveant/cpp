#include <iostream>
#include "stack.h"

void error(const char* message) 
{
    std::cerr << message << std::endl;
}

int main(int argc, char** argv)
{
    Stack::push('c');
    if (Stack::pop() != 'c') error("impossible");
}

