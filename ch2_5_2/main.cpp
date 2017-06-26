#include "complex.h"


void f(complex z) {
    complex a = 2.3;
    complex b = 1 / a;
    complex c = a + b * complex(1, 2.3);

    if (c != b) {
        c = -(b/a) + 2 * b;
    }
}

int main(int argc, char** argv) {
    complex z = complex(1, 1);
    f(z); 
    return 0;
}