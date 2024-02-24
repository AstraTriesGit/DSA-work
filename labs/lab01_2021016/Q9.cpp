#include <iostream>
using namespace std;

int main() {
    int seconds;
    int hours, minutes;

    cin >> seconds;
    int copy = seconds;
    minutes = seconds / 60;
    hours = minutes / 60;

    if (minutes >= 60) minutes = minutes%60;
    if (seconds >= 60) seconds = seconds%60;

    cout << copy << " seconds is equivalent to " << hours << " hours " << minutes << " minutes " << seconds << " seconds. " << endl;

    return 0;
}