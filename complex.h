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

#endif // COMPLEX_NUMBER_H