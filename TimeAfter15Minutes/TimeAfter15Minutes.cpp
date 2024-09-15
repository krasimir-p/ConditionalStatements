#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hour, minutes;
    cin >> hour >> minutes;

    minutes += 15;
    if (minutes >= 60) {
        minutes -= 60;
        hour++;
    }
    if (hour >= 24) {
        hour -= 24;
    }

    cout << hour <<":" << setw(2) << setfill('0') << minutes << endl;

    return 0;
}
