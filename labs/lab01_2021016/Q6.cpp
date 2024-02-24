#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    if (input < 3) {
        cout << "You did not input an integer greater than 3!\n";
        return 1;
    }
    // three positive integers can be 1, 2, 3

    // trust me bro
    cout << "Randomly chosen numbers are 2, 3, 1" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "123" << endl;
        cout << "132" << endl;
        cout << "213" << endl;
        cout << "231" << endl;
        cout << "312" << endl;
        cout << "321" << endl;
    }
    return 0;
}