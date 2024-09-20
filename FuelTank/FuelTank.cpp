#include <iostream>

using namespace std;

int main()
{
    const int FUEL_LIMIT = 25;
    
    string fuelType;
    int fuelVolume;
    cin >> fuelType >> fuelVolume;
    
    if (fuelType == "Diesel") {
        if (fuelVolume >= FUEL_LIMIT) {
            //cout << "You have enough " << fuelType << "." << endl;
            cout << "You have enough diesel." << endl;
        }
        else {
            //cout << "Fill your tank with " << fuelType << "!" << endl;
            cout << "Fill your tank with diesel!" << endl;
        }
    }
    else if (fuelType == "Gasoline") {
        if (fuelVolume >= FUEL_LIMIT) {
            //cout << "You have enough " << fuelType << "." << endl;
            cout << "You have enough gasoline." << endl;
        }
        else {
            //cout << "Fill your tank with " << fuelType << "!" << endl;
            cout << "Fill your tank with gasoline!" << endl;
        }
    }
    else if (fuelType == "Gas") {
        if (fuelVolume >= FUEL_LIMIT) {
            //cout << "You have enough " << fuelType << "." << endl;
            cout << "You have enough gas." << endl;
        }
        else {
            //cout << "Fill your tank with " << fuelType << "!" << endl;
            cout << "Fill your tank with gas!" << endl;
        }
    }
    else {
        cout << "Invalid fuel!" << endl;
    }

    return 0;
}
