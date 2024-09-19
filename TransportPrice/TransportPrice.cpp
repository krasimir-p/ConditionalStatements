#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double TAXI_INITIAL_PAY = 0.70;
    const double TAXI_PER_KM_DAY = 0.79;
    const double TAXI_PER_KM_NIGHT = 0.90;
    const double BUS_PER_KM = 0.09;
    const int BUS_MIN_DISTANCE = 20;
    const double TRAIN_PER_KM = 0.06;
    const int TRAIN_MIN_DISTANCE = 100;

    int distance;
    string dayOrNight;
    cin >> distance >> dayOrNight;

    cout << fixed << setprecision(2);
    if (distance >= TRAIN_MIN_DISTANCE) {
        cout << distance * TRAIN_PER_KM << endl;
    }else if(distance >= BUS_MIN_DISTANCE) {
        cout << distance * BUS_PER_KM << endl;
    }
    else if (dayOrNight == "day") {
        cout << TAXI_INITIAL_PAY + distance * TAXI_PER_KM_DAY << endl;
    }
    else {
        cout << TAXI_INITIAL_PAY + distance * TAXI_PER_KM_NIGHT << endl;
    }
    
    return 0;
}
