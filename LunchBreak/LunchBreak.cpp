#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    const double lunchDurationPartFromBreak = 0.125;
    const double restDurationPartFromBreak = 0.25;

    string moveName;
    getline(cin, moveName);
    int moveDuration, breakDuration;
    cin >> moveDuration >> breakDuration;

    double luncDuration = lunchDurationPartFromBreak * breakDuration;
    double restDuration = restDurationPartFromBreak * breakDuration;
    double emptyTime = breakDuration - luncDuration - restDuration;

    if(emptyTime>=moveDuration){
        cout
            << "You have enough time to watch "
            << moveName
            << " and left with "
            << ceil(emptyTime - moveDuration)
            << " minutes free time."
            << endl;
    }
    else {
        cout
            << "You don't have enough time to watch "
            << moveName
            << ", you need "
            << ceil(moveDuration - emptyTime)
            << " more minutes."
            << endl;
    }

    return 0;
}
