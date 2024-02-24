#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Average: " << (double)a / b << endl;
    cout << "Square of sums: " << (a*a) + (b*b) << endl;

    return 0;
}