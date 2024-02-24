//
// Created by Nero Sparda on 12/02/24.
//

#include <iostream>
#include <cstdlib>
#include <random>

#define YOU_FUCKED_UP 42069

int partition(int arr[], int low, int high) {
    srand(time(0));
    if (high - low <= 0) return YOU_FUCKED_UP;

    int random_shit = low + (rand() % (high - low + 1));
    int pivot = arr[random_shit];


    std::cout << "(Pivot: " << pivot << ") ";
    for (int i = low; i <= random_shit; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << " | ";
    for (int i = random_shit; i <= high; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    int temp2 = arr[random_shit];
    arr[random_shit] = arr[high];
    arr[high] = temp2;


    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            i++;
            // swap i and j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
//    int size = 8;
//    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int size;
    std::cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    quicksort(array, 0, size - 1);

    for (int i = size - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }

    delete[] array;
    return 0;
}