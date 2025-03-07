#include "../../complex/complex.h"
#include <stdio.h>

int main() {
    cartesianComplexNumber a = {1, 2};
    printf("modulus: %f, argument: %f\n", cartesianToPolar(a).argument, cartesianToPolar(a).modulus);
}