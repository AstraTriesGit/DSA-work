#include <iostream>
#include <xlocale.h>
using namespace std;

int main() {
    float centimetres;
    cin >> centimetres;

    int feet = (float)centimetres / ((2.54) * 12);
    float inches = centimetres - (feet * 2.54 * 12);
    inches = inches / 2.54;

    // correct value, now we have to round it
    inches *= 10;
    inches = floor(inches) / 10;

    cout << centimetres << " centimeters is " << feet << " feet " << inches << " inches. " << endl;
    return 0;
}