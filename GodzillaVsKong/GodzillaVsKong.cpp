#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double  DECOR = 0.1;
    const double EXTRAS_TRESHOLD_DISCAUNT = 150;
    const double OUTFIT_DISCOUNT = 0.10;

    double budget;
    int extrasCount;
    double outfitPrice;
    cin >> budget >> extrasCount >> outfitPrice;

    double otfitOutlay = extrasCount * outfitPrice;
    if (extrasCount >= EXTRAS_TRESHOLD_DISCAUNT) {
        otfitOutlay *= (1 - OUTFIT_DISCOUNT);
    }
    
    double decorOutlay = budget * DECOR;

    double outlay = otfitOutlay + decorOutlay;


    cout << fixed << setprecision(2);
    if (outlay > budget) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << outlay - budget << " leva more." << endl;
    }
    else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget-outlay <<" leva left." << endl;
    }

    return 0;
}
