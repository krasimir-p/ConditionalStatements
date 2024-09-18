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

    cout << fixed << setprecision(2);
    if (v>=waterInPool) {
        
        double firstPipeDebitInPercents = (firstPipeDebit / waterInPool) * 100;
        double secondPipeDebitInPercents = 100 - firstPipeDebitInPercents;
        double waterInPoolInPercents = (waterInPool / v) * 100;
        
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
       
        double overflow = waterInPool - v;

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
