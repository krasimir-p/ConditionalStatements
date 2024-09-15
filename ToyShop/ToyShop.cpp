#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PUZZLE_PRICE = 2.60;
    const double DOLLY_PRICE = 3.0;
    const double TEDDY_BEAR_PRICE = 4.10;
    const double MINIUN_PRICE = 8.20;
    const double TRUCK_PRICE = 2;
    const int DISCOUNT_THRESHOLDS = 50;
    const double DISCOUNT = 0.25;
    const double RENT = 0.1;

    double excursionPrice;
    cin >> excursionPrice;

    int puzzlesNumber, dolliesNumber, teddyBearsNumber, miniunsNumber, trucksNumber;
    cin >> puzzlesNumber >> dolliesNumber >> teddyBearsNumber >> miniunsNumber >> trucksNumber;

    double totalPrice =
        PUZZLE_PRICE * puzzlesNumber + 
        DOLLY_PRICE * dolliesNumber + 
        TEDDY_BEAR_PRICE * teddyBearsNumber + 
        MINIUN_PRICE * miniunsNumber + 
        TRUCK_PRICE * trucksNumber;
    
    int toysNumber = puzzlesNumber + dolliesNumber + teddyBearsNumber + miniunsNumber + trucksNumber;
    if (toysNumber >= DISCOUNT_THRESHOLDS) {
        totalPrice *= (1 - DISCOUNT);
    }
    
    totalPrice *= (1 - RENT);

    cout << fixed << setprecision(2);
    if (totalPrice >= excursionPrice) {
        cout << "Yes! " << totalPrice - excursionPrice << " lv left." << endl;
    }
    else {
        cout << "Not enough money! " << excursionPrice - totalPrice << " lv needed." << endl;
    }

    return 0;
}
