#include "../../complex/complex.h"
#include <stdio.h>

int main() {
    cartesianComplexNumber a = {1, 2};
    cartesianComplexNumber i = {0, 1};

    multiplyComplexCartesian(a, i);
    printf("The product of 1 + 2i and i is %f + %fi\n", multiplyComplexCartesian(a, i).real, multiplyComplexCartesian(a, i).imaginary);
    return 0;
}