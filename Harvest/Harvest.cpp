#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double const PERCENTS_FOR_WINE = 0.4;
    double const KG_GRAPES_FOR_LITER_WINE = 2.5;

    int area;
    cin >> area;
    double kgsGrapesToSqrMeter;
    cin >> kgsGrapesToSqrMeter;
    int neededLitersWine;
    cin >> neededLitersWine;
    int workers;
    cin >> workers;

    double kgsGrapes = kgsGrapesToSqrMeter * area;
    double kgsGrapesForWine = PERCENTS_FOR_WINE * kgsGrapes;
    double producedLitersWine = kgsGrapesForWine / KG_GRAPES_FOR_LITER_WINE;
    
    if (producedLitersWine < neededLitersWine) {
        double missingWine = neededLitersWine - producedLitersWine;
        cout << "It will be a tough winter! More " << floor(missingWine) << " liters wine needed." << endl;
    }
    else {
        double restWine = producedLitersWine - neededLitersWine;
        int workerBonus = ceil(restWine / workers);
        cout << "Good harvest this year! Total wine: " << floor(producedLitersWine) << " liters." << endl;
        cout << ceil(restWine) << " liters left -> " << workerBonus << " liters per person." << endl;
    }
    return 0;
}
