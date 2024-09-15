#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    //square, rectangle, circle triangle
    double area = 0;
    string shape;
    cin >> shape;

    if (shape == "square") {
        double a;
        cin >> a;
        area = a * a;
    }
    else if (shape=="rectangle") {
        double a, b;
        cin >> a >> b;
        area = a * b;
    }
    else if (shape == "circle") {
        double r;
        cin >> r;
        area = M_PI * r * r;
    }
    else {
        double a, h;
        cin >> a >> h;
        area = a * h / 2;
    }
    
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;

    return 0;
}
