#include "stack.h"

using namespace std;

Stack s_var1(10); // requires a destructor to work

void f(Stack& s_ref, int i) {
    Stack s_var2(i); // local stack
    Stack* s_ptr = new Stack(20); // a pointer to a stack in heap

    s_var1.push('a');
    s_var2.push('b');
    s_ref.push('c');
    s_ptr->push('d');
}

int main(int argc, char** argv) {

    Stack s_ref(10);
    f(s_ref, 5);

    return 0;
}