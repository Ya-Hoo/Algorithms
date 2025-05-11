#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, a, b, min, max;
    cin >> x >> y >> z;
    a = x+y+z;
    b = x*y*z;
    max = a;
    if (max < b) max = b;
    cout << setprecision(2) << fixed;
    cout << max << endl;
    return 0;
}
