//
// Created by Nero Sparda on 23/12/23.
//

#include "ArrayList.h"
#include <iostream>

ArrayList::ArrayList(int size) {
    arr = new int[size];
    capacity = size;
    num_elements = 0;
}

void ArrayList::resize() {
    int* temp_arr = new int[capacity*2];
    capacity *= 2;

    for (int i=0; i < num_elements; i++ ) {
        temp_arr[i] = arr[i];
    }
    delete[] arr;
    arr = temp_arr;
}

void ArrayList::insert(int val) {
    if (num_elements < capacity) {
        arr[num_elements++] = val;
    } else {
        resize();
        arr[num_elements++] = val;
    }
}

int ArrayList::length() const {
    return num_elements;
}

void ArrayList::print() {
    std::cout << "[";
    for (int i = 0; i < num_elements; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]\n";
}

int ArrayList::getAt(int index) {
    return arr[index];
}