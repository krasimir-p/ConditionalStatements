#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double magnoliiPrice = 3.25;
    const double ziumbiuliPrice = 4.00;
    const double rosesPrice = 3.50;
    const double cactusesPrice = 8.00;
    const double TaxPercents = 0.05;

    int magnoliiNumber;
    int ziumbiuliNumber;
    int rosesNumber;
    int cactusesNumber;
    double giftPrice;
    cin >> magnoliiNumber >> ziumbiuliNumber >> rosesNumber >> cactusesNumber >> giftPrice;

    double profitBeforeTax = 
        magnoliiPrice * magnoliiNumber + 
        ziumbiuliPrice * ziumbiuliNumber + 
        rosesPrice * rosesNumber + 
        cactusesPrice * cactusesNumber;
    double profit = profitBeforeTax * (1 - TaxPercents);

    if (profit >= giftPrice) {
        cout << "She is left with " << floor(profit - giftPrice) << " leva." << endl;
    }
    else {
        cout << "She will have to borrow " << ceil(giftPrice - profit) << " leva." << endl;
    }

    return 0;
}
