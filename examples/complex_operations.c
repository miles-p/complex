#include "../../complex/complex.h"
#include <stdio.h>

int main() {
    cartesianComplexNumber a = {1, 2};
    cartesianComplexNumber b = {3, 4};

    // Multiply two complex numbers
    cartesianComplexNumber product = multiplyComplexCartesian(a, b);
    printf("Product: %f + %fi\n", product.real, product.imaginary);

    // Add two complex numbers
    cartesianComplexNumber sum = addComplexCartesian(a, b);
    printf("Sum: %f + %fi\n", sum.real, sum.imaginary);

    // Subtract two complex numbers
    cartesianComplexNumber difference = subtractComplexCartesian(a, b);
    printf("Difference: %f + %fi\n", difference.real, difference.imaginary);

    // Divide two complex numbers
    cartesianComplexNumber quotient = divideComplexCartesian(a, b);
    printf("Quotient: %f + %fi\n", quotient.real, quotient.imaginary);

    // Convert cartesian complex number to polar form
    polarComplexNumber polar = cartesianToPolar(a);
    printf("Polar: %f, %f\n", polar.modulus, polar.argument);

    // Find the conjugate of a complex number
    cartesianComplexNumber conjugate = conjugateComplexCartesian(a);
    printf("Conjugate: %f + %fi\n", conjugate.real, conjugate.imaginary);

    // Find the modulus of a complex number
    double modulus = modulusComplexCartesian(a);
    printf("Modulus: %f\n", modulus);
    
    return 0;
}