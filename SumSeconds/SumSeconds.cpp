#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int competitor1, competitor2, competitor3;
    cin >> competitor1 >> competitor2 >> competitor3;

    int totalTimeInSeconds = competitor1 + competitor2 + competitor3;
    int minutes = totalTimeInSeconds/60;
    int secundes = totalTimeInSeconds % 60;

    cout << minutes << ":"<< setw(2) << setfill('0') << secundes << endl;

    return 0;
}