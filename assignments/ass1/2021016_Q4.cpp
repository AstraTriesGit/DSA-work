//
// Created by Nero Sparda on 05/02/24.
//

/*
Given an array of N integers, determine the maximum values obtained by
taking the minimum element over all possible sub-arrays of varying sizes from 1 to N.
*/

#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> find_max_over_min(std::vector<int> array, int N) {
    std::vector<int> result;

    for (int sa_size = 1; sa_size <= N; ++sa_size) {
        std::vector<int> sub_array;
        int current_max = INT32_MIN;
        for (int i = 0; i < N - sa_size + 1; ++i) {
            // get the sub_array
            for (int j = i; j < i + sa_size; ++j) {
                sub_array.push_back(array[j]);
            }
            auto min_iter = std::min_element(
                    sub_array.begin(), sub_array.end());
            current_max = std::max(current_max, *min_iter);
            sub_array.clear();
        }
        result.push_back(current_max);
    }

    return result;
}


int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the input array: ";
    std::vector<int> array(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    std::vector<int> result = find_max_over_min(array, n);

    for (int i = 0; i < n; ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}