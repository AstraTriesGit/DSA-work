//
// Created by Nero Sparda on 04/02/24.
//


/*
Write a recursive and an iterative code for Merge sort. Take
the array to be sorted as input from the user. Assume it to be an integer array
only. Print the sorted array from both recursive call and iterative call.
*/

#include <iostream>
#include <algorithm>

void merge(int* array, int left, int middle, int right) {
    int l_size = middle - left + 1;
    int r_size = right - middle;
    int* lhs = new int[l_size];
    int* rhs = new int[r_size];

    for (int i = 0; i < l_size; ++i)
        lhs[i] = array[left + i];
    for (int i = 0; i < r_size; ++i)
        rhs[i] = array[middle + i + 1];

    int p_left = 0, p_right = 0, p = left;
    while (p_left < l_size && p_right < r_size) {
        if (lhs[p_left] <= rhs[p_right]) {
            array[p++] = lhs[p_left++];
            continue;
        }
        array[p++] = rhs[p_right++];
    }
    while (p_left < l_size)
        array[p++] = lhs[p_left++];
    while (p_right < r_size)
        array[p++] = rhs[p_right++];

    delete[] lhs;
    delete[] rhs;
}

void mergesort(int* array, int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        mergesort(array, left, middle);
        mergesort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

void mergesort_iterative(int* array, int n) {
    for (int current_size = 1; current_size < n; ++current_size) {
        for (int left = 0; left < n - 1; left += 2 * current_size) {
            int middle = std::min(
                    left + current_size - 1,
                    n - 1);
            int right = std::min(
                    left + (2 * current_size) - 1,
                    n - 1);
            merge(array, left, middle, right);
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the array to be sorted with elements separated by space: ";
    int* array = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int* array_copy = new int[n];
    for (int i = 0; i < n; ++i) {
        array_copy[i] = array[i];
    }


    mergesort(array, 0, n);
    std::cout << "Sorted array by recursion is: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    mergesort_iterative(array_copy, n);
    std::cout << "Sorted array by iteration is: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << array[i] << " ";
    }


    delete[] array;
    delete[] array_copy;
    return 0;
}