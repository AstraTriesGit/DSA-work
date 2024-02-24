//
// Created by Nero Sparda on 23/12/23.
//

#include "ArrayQuestions.h"
#include "../SortingAlgorithms.h"
#include <cmath>

int* removeEven(int* &Arr, int size) {
    int temp_index = 0;
    for (int i = 0; i < size; ++i) {
        if (abs(Arr[i] % 2) == 1) {
            Arr[temp_index++] = Arr[i];
        }
    }
    int* temp = new int[temp_index];
    for (int i = 0; i < temp_index; ++i) {
        temp[i] = Arr[i];
    }

    delete[] Arr;
    Arr = temp;
    return Arr;
}

// incorrect implementation
int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size) {
    int* result = new int[arr1Size + arr2Size];
    int p1 = 0, p2 = 0;
    for (int i = 0; i < arr1Size + arr2Size; ++i) {
        if (arr1[p1] > arr2[p2]) {
            result[i] = arr1[p1++];
        } else {
            result[i] = arr2[p2++];
        }
    }
    return result;
}

int *findSum(int arr[], int value, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[i] + arr[j] == value) {
                return new int[2]{arr[i], arr[j]};
            }
        }
    }
    return arr;
}

int *findSumQsort(int arr[], int value, int size) {
    quicksort(arr, 0, size - 1);
    int p1 = 0, p2 = size - 1;

    int sum;
    while (p1 != p2) {
        sum = arr[p1] + arr[p2];
        if (sum > value) {
            p2--;
        } else if (sum < value) {
            p1++;
        } else {
            return new int[2]{arr[p1], arr[p2]};
        }
    }
    return arr;
}

int * findProduct(int arr[], int size) {
    // unoptimised O(n^2) solution
//    int* result = new int[size];
//    for (int i = 0; i < size; ++i) {
//        int element = 1;
//        for (int j = 0; j < size; ++j) {
//            if (i == j) continue;
//            element *= arr[j];
//        }
//        result[i] = element;
//    }
//    return result;
    int n = size;
    int i, temp = 1;
    int* product = new int[size];

    for (i = 0; i < n; ++i) {
        product[i] = temp;
        temp *= arr[i];
    }

    temp = 1;

    for (i = n - 1; i >= 0; --i) {
        product[i] *= temp;
        temp *= arr[i];
    }
    return product;
}