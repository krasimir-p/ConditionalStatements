#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if(a<100)
    {
        cout << "Less than 100" << endl;
    }
    else if(a<=200)
    {
        cout << "Between 100 and 200" << endl;
    }
    else
    {
        cout << "Greater than 200" << endl;
    }
    return 0;
}
