#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int annualRateOfPlayInMinutes = 30000;
    const int dayOffRateInMinutes = 127;
    const int workingDayRateInMinutes = 63;

    int daysOffCounts;
    cin >> daysOffCounts;

    int playTimeDuration = daysOffCounts * dayOffRateInMinutes + (365 - daysOffCounts) * workingDayRateInMinutes;

    if (annualRateOfPlayInMinutes > playTimeDuration) {
        int timeLessInMinutes = annualRateOfPlayInMinutes - playTimeDuration;
        int timeLessHours = timeLessInMinutes / 60;
        int restMinites = timeLessInMinutes % 60;
        
        cout << "Tom sleeps well" << endl;
        cout << timeLessHours << " hours and " << setw(2) << setfill('0') << restMinites << " minutes less for play" << endl;
    }
    else {
        int timeMoreInMinutes = playTimeDuration - annualRateOfPlayInMinutes;
        int timeMoreHours = timeMoreInMinutes / 60;
        int restMinutes = timeMoreInMinutes % 60;
        
        cout << "Tom will run away" << endl;
        
        cout << timeMoreHours << " hours and " << setw(2) << setfill('0') << restMinutes << " minutes more for play" << endl;
    }
    return 0;
}
