#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x<0) x = x * x;
    if (y<0) y = y * y;
    if (z<0) z = z * z;
    cout << setprecision(2) << fixed;
    cout << x << " " << y << " " << z;
    return 0;
}
