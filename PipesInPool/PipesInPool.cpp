#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int v;
    cin >> v;
    int firstPipeDebitForHour, secondPipeDebitForHour;
    cin >> firstPipeDebitForHour >> secondPipeDebitForHour;
    double hoursWorkerOut;
    cin >> hoursWorkerOut;

    double firstPipeDebit = hoursWorkerOut * firstPipeDebitForHour;
    double secondPipeDebit = hoursWorkerOut * secondPipeDebitForHour;
    double waterInPool = firstPipeDebit + secondPipeDebit;

    double firstPipeDebitInPercents = (firstPipeDebit /waterInPool) * 100;
    double secondPipeDebitInPercents = 100 - firstPipeDebitInPercents;
    //double secondPipeDebitInPercents = (secondPipeDebit / waterInPool) * 100;
    //double firstPipeDebitInPercents = 100 - secondPipeDebitInPercents;
    double waterInPoolInPercents = (waterInPool / v) * 100;
    int overflow = waterInPool - v;

    cout << fixed << setprecision(2);
    if (overflow <= 0) {
    //if (overflow < 0) {
        cout 
            << "The pool is " 
            << waterInPoolInPercents 
            << "% full. Pipe 1: " 
            << firstPipeDebitInPercents 
            << "%. Pipe 2: " 
            << secondPipeDebitInPercents 
            << "%." 
            << endl;
    }
    else {
        cout 
            << "For " 
            << hoursWorkerOut 
            << " hours the pool overflows with " 
            << overflow 
            << " liters." 
            << endl;
    }

    return 0;
}
