#include "complex.h"

complex operator+(complex z1, complex z2) {
    return complex(z1.re + z2.re, z1.im + z2.im);
}

complex operator-(complex z1, complex z2) {
    return z1 + (-z2);
}

complex operator-(complex z) {
    return complex(-z.re, -z.im);
}

complex operator*(complex z1, complex z2) {
    return complex(z1.re * z2.im - z2.im * z2.re, z1.re * z2.im + z1.im * z2.re);
}

complex operator/(complex z1, complex z2) {
    float denominator = z2.re * z2.re + z2.im * z2.im;
    return complex((z1.re * z2.re + z1.im * z2.im) / denominator, (z1.im * z2.re - z1.re * z2.im) / denominator);
}

bool operator==(complex z1, complex z2) {
    return z1.re == z2.re && z1.im == z2.im;
}

bool operator!=(complex z1, complex z2) {
    return !(z1 == z2);
}

