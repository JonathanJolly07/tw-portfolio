/**
 * @file math_ops.h
 * @brief Demonstrating API documentation using Doxygen standards.
 * @author Jonathan Jolly
 */

#ifndef MATH_OPS_H
#define MATH_OPS_H

/**
 * @brief Computes the factorial of a given non-negative integer.
 * @param n An integer representing the input value (n >= 0).
 * @return The factorial of n, or -1 if the input is negative.
 */
long long compute_factorial(int n);

/**
 * @brief Computes the greatest common divisor (GCD) of two numbers.
 * @param a First integer.
 * @param b Second integer.
 * @return The GCD of a and b.
 */
int compute_gcd(int a, int b);

#endif
