#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if ((x<0) && (y<0)) {
        x = abs(x);
        y = abs(y);
    }
    else if ((x<0) || (y<0)) {
        x = x + 0.5;
        y = y + 0.5;
    }
    else {
        if (!(((1<x)&&(x<2)) && ((1<y) && (y<2)))) {
            x = x * 10;
            y = y * 10;
        }
    }
    cout << setprecision(2) << fixed;
    cout << x << " " << y;
    return 0;
}
