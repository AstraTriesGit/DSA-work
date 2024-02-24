//
// Created by Nero Sparda on 09/02/24.
//

/* Write a divide and conquer algorithm that recursively divides the array into smaller sub-arrays,
 * computes the maximum subarray sum for each subarray, and combines the results to
 * reveal the overall maximum subarray sum.
 * What is the time complexity of your algorithm? Mention as comments.
*/

#include <vector>

using namespace std;

struct indexes_result {
    int max_left;
    int max_right;
    int lr_sum;
};

indexes_result max_in_overlapping_subarray(vector<int> array, int low, int middle, int high) {
    int left_sum = INT32_MIN;
    int temp_sum = 0;
    indexes_result bruh;

    for (int i = middle; i > low - 1; --i) {
        temp_sum += array[i];
        if (temp_sum > left_sum) {
            left_sum = temp_sum;
            bruh.max_left = i;
        }
    }
    int right_sum = INT32_MIN;
    temp_sum = 0;
    for (int i = middle + 1; i < high + 1; ++i) {
        temp_sum += array[i];
        if (temp_sum > right_sum) {
            right_sum = temp_sum;
            bruh.max_right = i;
        }
    }
    bruh.lr_sum = left_sum + right_sum;
    return bruh;
}

int main() {

}