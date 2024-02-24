#include <iostream>

using namespace std;

int main() {
    float radius, pi = 3.14159;
    cin >> radius;

    float area = pi * radius * radius;
    cout << "The area of a circle of radius " << radius << " units is " << area << endl;

    return 0;
}