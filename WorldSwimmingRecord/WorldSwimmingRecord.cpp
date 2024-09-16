#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const double delayFor15MetersInSeconds = 12.5;

    double record;
    cin >> record;
    double distance;
    cin >> distance;
    double timeForMeter;
    cin >> timeForMeter;

    double timeOfIvanBeforeDelay = distance * timeForMeter;

    int pitStops = floor(distance / 15);
    double delayInPitStop = delayFor15MetersInSeconds * pitStops;

    double timeOfIvan = timeOfIvanBeforeDelay + delayInPitStop;

    cout << fixed << setprecision(2);
    if (timeOfIvan < record) {
        cout << "Yes, he succeeded! The new world record is " << timeOfIvan << " seconds." << endl;
    }
    else {
        cout << "No, he failed! He was " << timeOfIvan - record << " seconds slower." << endl;
    }

    return 0;
}
