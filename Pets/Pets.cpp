#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int days;
    int allFoodKg;
    double dogFoodKgPerDay;
    double catFoodKgPerDay;
    double turtleFoodGrPerDay;
    cin >> days >> allFoodKg >> dogFoodKgPerDay >> catFoodKgPerDay >> turtleFoodGrPerDay;

    double neededFoodKg = days * (dogFoodKgPerDay + catFoodKgPerDay + turtleFoodGrPerDay/1000);
    double deltaFoodKg = allFoodKg - neededFoodKg;

    if (deltaFoodKg >= 0) {
        cout << floor(deltaFoodKg) << " kilos of food left." << endl;
    }
    else {
        cout << ceil(-1 * deltaFoodKg) << " more kilos of food are needed." << endl;
    }

    return 0;
}
