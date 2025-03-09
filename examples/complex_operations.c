#include "../../complex/complex.h"
#include <stdio.h>

int main() {
    cartesianComplexNumber z = {3, -4};
    cartesianComplexNumber w = {1, 2};
    cartesianComplexNumber i = {0, 1};
    cartesianComplexNumber three = {3, 0};
    int modz = cartesianComplexModulus(z);
    cartesianComplexNumber compmodz = {modz, 0};
    cartesianComplexNumber conjw = conjugateComplexCartesian(w);
    cartesianComplexNumber conjwp3i = addComplexCartesian(conjw, multiplyComplexCartesian(three, i));
    cartesianComplexNumber immodz = multiplyComplexCartesian(i, compmodz);
    cartesianComplexNumber immodzmconkwp3i = multiplyComplexCartesian(immodz, conjwp3i);
    printf("result = %f + %fi\n", immodzmconkwp3i.real, immodzmconkwp3i.imaginary);
}