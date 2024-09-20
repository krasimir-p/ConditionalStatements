#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double GASOLINE_PRICE_L = 2.22;
    const double DIESEL_PRICE_L = 2.33;
    const double GAS_PRICE_L = 0.93;
    const double GASOLINE_DISCAUNT_L = 0.18;
    const double DIESEL_DISCAUNT_L = 0.12;
    const double GAS_DISCAUNT_L = 0.08;
    const double BETWEEIN_20_25_DISCAUNT_PERCENTS = 0.08;
    const double ABOVE_25DISCAUNT_PERCENTS = 0.10;

    string typeFuel;
    cin >> typeFuel;
    double volumeFuel;
    cin >> volumeFuel;
    string clubCardPossessin;
    cin >> clubCardPossessin;
   
    double price=0;
    
    if (typeFuel == "Gas") {
        double finalGasPriceLiter;

        if (clubCardPossessin == "Yes") {
            finalGasPriceLiter = GAS_PRICE_L - GAS_DISCAUNT_L;
        }
        else {
            finalGasPriceLiter = GAS_PRICE_L;
        }
        
        if (volumeFuel > 25) {
            finalGasPriceLiter *= (1 - ABOVE_25DISCAUNT_PERCENTS);
        }
        else if (volumeFuel >= 20) {
            finalGasPriceLiter *= (1 - BETWEEIN_20_25_DISCAUNT_PERCENTS);
        }
        
        price = finalGasPriceLiter * volumeFuel;
    }
    else if (typeFuel == "Gasoline") {
        double finalGasolinePriceLiter;
        
        if (clubCardPossessin == "Yes") {
            finalGasolinePriceLiter = GASOLINE_PRICE_L - GASOLINE_DISCAUNT_L;
        }
        else {
            finalGasolinePriceLiter = GASOLINE_PRICE_L;
        }
        
        if (volumeFuel > 25) {
            finalGasolinePriceLiter *= (1 - ABOVE_25DISCAUNT_PERCENTS);
        }
        else if (volumeFuel >= 20) {
            finalGasolinePriceLiter *= (1 - BETWEEIN_20_25_DISCAUNT_PERCENTS);
        }
        
        price = finalGasolinePriceLiter * volumeFuel;
    }
    else {
        double finalDieselPriceLiter;
        
        if (clubCardPossessin == "Yes") {
            finalDieselPriceLiter = DIESEL_PRICE_L - DIESEL_DISCAUNT_L;
        }
        else {
            finalDieselPriceLiter = DIESEL_PRICE_L;
        }
        
        if (volumeFuel > 25) {
            finalDieselPriceLiter *= (1 - ABOVE_25DISCAUNT_PERCENTS);
        }
        else if (volumeFuel >= 20) {
            finalDieselPriceLiter *= (1 - BETWEEIN_20_25_DISCAUNT_PERCENTS);
        }
        
        price = finalDieselPriceLiter * volumeFuel;
    }

    cout << fixed << setprecision(2) << price << " lv." << endl;

    return 0;
}
