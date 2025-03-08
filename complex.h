/**
 * @file complex.h
 * @brief Header file for complex number operations in Cartesian and Polar forms.
 */

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

/**
 * @struct cartesianComplexNumber
 * @brief Represents a complex number in Cartesian form (real + imaginary * i).
 * @var cartesianComplexNumber::real
 * Member 'real' represents the real part of the complex number.
 * @var cartesianComplexNumber::imaginary
 * Member 'imaginary' represents the imaginary part of the complex number.
 */
typedef struct cartesianComplexNumber {
    double real;
    double imaginary;
} cartesianComplexNumber;

/**
 * @struct polarComplexNumber
 * @brief Represents a complex number in Polar form (modulus * e^(i * argument)).
 * @var polarComplexNumber::modulus
 * Member 'modulus' represents the magnitude of the complex number.
 * @var polarComplexNumber::argument
 * Member 'argument' represents the angle (in radians) of the complex number.
 */
typedef struct polarComplexNumber {
    double modulus;
    double argument;
} polarComplexNumber;

/**
 * @brief Converts a complex number from Cartesian form to Polar form.
 * @param a The complex number in Cartesian form.
 * @return The complex number in Polar form.
 */
polarComplexNumber cartesianToPolar(cartesianComplexNumber a);

/**
 * @brief Converts a complex number from Polar form to Cartesian form.
 * @param a The complex number in Polar form.
 * @return The complex number in Cartesian form.
 */
cartesianComplexNumber polarToCartesian(polarComplexNumber a);

/**
 * @brief Multiplies two complex numbers in Cartesian form.
 * @param a The first complex number in Cartesian form.
 * @param b The second complex number in Cartesian form.
 * @return The product of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber multiplyComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b);

/**
 * @brief Adds two complex numbers in Cartesian form.
 * @param a The first complex number in Cartesian form.
 * @param b The second complex number in Cartesian form.
 * @return The sum of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber addComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b);

/**
 * @brief Subtracts one complex number from another in Cartesian form.
 * @param a The complex number to be subtracted from (minuend) in Cartesian form.
 * @param b The complex number to subtract (subtrahend) in Cartesian form.
 * @return The difference of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber subtractComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b);

/**
 * @brief Divides one complex number by another in Cartesian form.
 * @param a The complex number to be divided (dividend) in Cartesian form.
 * @param b The complex number to divide by (divisor) in Cartesian form.
 * @return The quotient of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber divideComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b);

/**
 * @brief Finds the conjugate of a complex number in Cartesian form.
 * @param a The complex number in Cartesian form.
 * @return The conjugate of the complex number in Cartesian form.
 */
cartesianComplexNumber conjugateComplexCartesian(cartesianComplexNumber a);

/**
 * @brief Finds the conjugate of a complex number in Polar form.
 * @param a The complex number in Polar form.
 * @return The conjugate of the complex number in Polar form.
 */
polarComplexNumber conjugateComplexPolar(polarComplexNumber a);

/**
 * @brief Finds the magnitude of a complex number in Cartesian form.
 * @param a The complex number in Cartesian form.
 * @return The magnitude of the complex number.
 */
double modulusComplexCartesian(cartesianComplexNumber a);

/**
 * @brief Finds the value of a complex number raised to a power.
 * @param a The complex number in Cartesian form.
 * @param power The power to raise the complex number to.
 * @return The complex number raised to the power in Cartesian form.
 */
cartesianComplexNumber powerComplexCartesian(cartesianComplexNumber a, double power);

#endif // COMPLEX_NUMBER_H

#pragma comment(lib, "m")
#include <math.h>

/**
 * @brief Converts a complex number from Cartesian form to Polar form.
 * @param a The complex number in Cartesian form.
 * @return The complex number in Polar form.
 */
polarComplexNumber cartesianToPolar(cartesianComplexNumber a) {
    polarComplexNumber result;
    result.modulus = sqrt(a.real * a.real + a.imaginary * a.imaginary); // Calculate modulus
    result.argument = atan2(a.imaginary, a.real); // Calculate argument
    return result;
}

/**
 * @brief Converts a complex number from Polar form to Cartesian form.
 * @param a The complex number in Polar form.
 * @return The complex number in Cartesian form.
 */
cartesianComplexNumber polarToCartesian(polarComplexNumber a) {
    cartesianComplexNumber result;
    result.real = a.modulus * cos(a.argument); // Calculate real part
    result.imaginary = a.modulus * sin(a.argument); // Calculate imaginary part
    return result;
}

/**
 * @brief Multiplies two complex numbers in Cartesian form.
 * @param a The first complex number in Cartesian form.
 * @param b The second complex number in Cartesian form.
 * @return The product of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber multiplyComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b) {
    cartesianComplexNumber result;
    result.real = a.real * b.real - a.imaginary * b.imaginary; // Calculate real part
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real; // Calculate imaginary part
    return result;
}

/**
 * @brief Adds two complex numbers in Cartesian form.
 * @param a The first complex number in Cartesian form.
 * @param b The second complex number in Cartesian form.
 * @return The sum of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber addComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b) {
    cartesianComplexNumber result;
    result.real = a.real + b.real; // Calculate real part
    result.imaginary = a.imaginary + b.imaginary; // Calculate imaginary part
    return result;
}

/**
 * @brief Subtracts one complex number from another in Cartesian form.
 * @param a The complex number to be subtracted from (minuend) in Cartesian form.
 * @param b The complex number to subtract (subtrahend) in Cartesian form.
 * @return The difference of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber subtractComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b) {
    cartesianComplexNumber result;
    result.real = a.real - b.real; // Calculate real part
    result.imaginary = a.imaginary - b.imaginary; // Calculate imaginary part
    return result;
}

/**
 * @brief Divides one complex number by another in Cartesian form.
 * @param a The complex number to be divided (dividend) in Cartesian form.
 * @param b The complex number to divide by (divisor) in Cartesian form.
 * @return The quotient of the two complex numbers in Cartesian form.
 */
cartesianComplexNumber divideComplexCartesian(cartesianComplexNumber a, cartesianComplexNumber b) {
    cartesianComplexNumber result;
    double denominator = b.real * b.real + b.imaginary * b.imaginary; // Calculate denominator
    result.real = (a.real * b.real + a.imaginary * b.imaginary) / denominator; // Calculate real part
    result.imaginary = (a.imaginary * b.real - a.real * b.imaginary) / denominator; // Calculate imaginary part
    return result;
}

cartesianComplexNumber conjugateComplexCartesian(cartesianComplexNumber a) {
    cartesianComplexNumber result;
    result.real = a.real;
    result.imaginary = -a.imaginary;
    return result;
}

polarComplexNumber conjugateComplexPolar(polarComplexNumber a) {
    polarComplexNumber result;
    result.modulus = a.modulus;
    result.argument = -a.argument;
    return result;
}

double modulusComplexCartesian(cartesianComplexNumber a) {
    return sqrt(a.real * a.real + a.imaginary * a.imaginary);
}

cartesianComplexNumber powerComplexCartesian(cartesianComplexNumber a, double power) {
    polarComplexNumber polar = cartesianToPolar(a);
    polar.modulus = pow(polar.modulus, power);
    polar.argument *= power;
    return polarToCartesian(polar);
}