#include <iostream>
using namespace std;

int main() {
    int min = INT16_MAX;
    int max = INT16_MIN;
    int temp;

    for (int i = 0; i < 10; ++i) {
        cin >> temp;
        if (temp > max) max = temp;
        if (temp < min) min = temp;
    }

    cout << "The minimum among the 10 is: " << min << endl;
    cout << "The maximum among the 10 is: " << max << endl;

    return 0;
}