#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    cout << setprecision(2) << fixed;
    if ((3<x) && (x<5)) cout << x << endl;
    if ((3<y) && (y<5)) cout << y << endl;
    if ((3<z) && (z<5)) cout << z << endl;
    return 0;
}
