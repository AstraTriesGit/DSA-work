#include <iostream>
using namespace std;

int binary_search(int* array, int start, int end, int K) {
    if (end >= start) {
        int mid = start + (end - start) / 2;

        if (K == array[mid]) {
            return mid;
        }else if (K > array[mid]) {
            return binary_search(array, mid + 1, end, K);
        } else if (K < array[mid]) {
            return binary_search(array, start, mid - 1, K);
        } else {
            return -1;
        }
    }
    return -1;
}

int main() {
    int array[4] = {0, 1, 8, 9};
    cout << binary_search(array, 0, 3, 8);

    return 0;
}