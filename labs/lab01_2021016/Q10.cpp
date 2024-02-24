#include <iostream>
using namespace std;

int main() {
    int time, duration;
    cin >> time;
    cin >> duration;

    int og_minutes = time % 100;
    int og_hours = time - og_minutes;
    int dur_minutes = duration % 100;
    int dur_hours = duration - dur_minutes;

    int final_minutes = (dur_minutes + og_minutes) % 60;
    int final_hours;
    if (dur_minutes + og_minutes >= 60) {
        final_hours = (og_hours + dur_hours + 100) % 2400;
    } else {
        final_hours = (og_hours + dur_hours) % 2400;
    }

    cout << "Start time is " << time << ". Duration is " << duration << ". End time is " << (final_minutes + final_hours) <<  ".";

}
