//
// Created by Nero Sparda on 22/01/24.
//

#include "exponent.h"
#include <iostream>

void print20_rec_pvt();
int n = 0;

int power_linear_rec(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;

    return x * (power_linear_rec(x, n - 1));
}

int square_rec(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    return square_rec(x - 1) + (2*x) - 1;
}

void print_20_rec() {
    if (n <= 20) {
        std::cout << n << " ";
        n++;
        print20_rec_pvt();

    } else
        return;
}

void print20_rec_pvt() {
    if (n <= 20) {
        std::cout << n << " ";
        n++;
        print_20_rec();
    } else
        return;
}