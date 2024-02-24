//
// Created by Nero Sparda on 12/02/24.
//

#include <iostream>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];


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

    std::cout << "(Pivot: " << pivot << ") ";
    for (int j = low; j <= high; ++j) {
        std::cout << arr[j] << " ";
    }
    std::cout << "\n";

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
//    int size = 4;
//    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    int size;
    std::cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    quicksort(array, 0, size - 1);

    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}