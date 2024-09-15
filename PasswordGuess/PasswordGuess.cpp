#include <iostream>

using namespace std;

int main()
{
    const string correctPassword = "s3cr3t!P@ssw0rd";
    string password;
    cin >> password;
    
    if (password == correctPassword) {
        cout << "Welcome" << endl;
    }
    else {
        cout << "Wrong password!" << endl;
    }
    
    return 0;
}
