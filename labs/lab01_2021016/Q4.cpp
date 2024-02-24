#include <iostream>
using namespace std;

int main() {
    float celsius;
    cin >> celsius;

    float fahrenheit = (9.0/5)*celsius + 32.0;
    cout << celsius << " degrees Celsius converts to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}