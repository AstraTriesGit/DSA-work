#include <iostream>
using namespace std;

int ways_to_climb(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return ways_to_climb(n - 1) + ways_to_climb(n - 2);
}

int main() {
    cout << ways_to_climb(4);

    return 0;
}