#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double videoCardPrice = 250.0;
    const double discountIfVideoCardsMoreThanProcessors = 0.15;
    const double procesorPricePercentThanTotalVideoCardPrice = 0.35;
    const double RAMPricePercentThanTotalVideoCardPrice = 0.1;

    double budget;
    cin >> budget;
    int videoCardsCount, processorsCount, RAMCount;
    cin >> videoCardsCount >> processorsCount >> RAMCount;

    double totalVideoCardPrice = videoCardPrice * videoCardsCount;
    double totalProcessorPrice = totalVideoCardPrice * procesorPricePercentThanTotalVideoCardPrice * processorsCount;
    double totalRAMPrice = totalVideoCardPrice * RAMPricePercentThanTotalVideoCardPrice * RAMCount;

    double totalPriceBiforeDiscount = totalVideoCardPrice + totalProcessorPrice + totalRAMPrice;

    double totalPrice;
    if (videoCardsCount > processorsCount) {
        totalPrice = totalPriceBiforeDiscount * (1 - discountIfVideoCardsMoreThanProcessors);
    }
    else {
        totalPrice = totalPriceBiforeDiscount;
    }

    cout << fixed << setprecision(2);
    if (budget >= totalPrice) {
        cout << "You have " << budget - totalPrice << " leva left!" << endl;
    }
    else {
        cout << "Not enough money! You need " << totalPrice - budget << " leva more!" << endl;
    }
    return 0;
}
