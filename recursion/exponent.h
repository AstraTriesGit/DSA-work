//
// Created by Nero Sparda on 22/01/24.
//

#ifndef DSA_EXPONENT_H
#define DSA_EXPONENT_H

/**
 * Returns x^n. This is achieved using the
 * recurrence relation x^n = x * x^(n-1).
 * @param x The base.
 * @param n The power to which the base is to be raised, only takes n ≥ 0.
 * @return x^n, the base x raised to the required power n.
 */
int power_linear_rec(int x, int n);

/**
 * Returns x^2. This is achieved using the
 * recurrence relation x^2 = (x-1)^2 + 2x -1.
 * @param x The number to square.
 * @return x^2, the number squared.
 */
int square_rec(int x);

/**
 * Prints the first 20 numbers, that's all.
 * Uses indirect recursion under the hood by calling
 * a private recursive function.
 */
void print_20_rec();

#endif //DSA_EXPONENT_H
