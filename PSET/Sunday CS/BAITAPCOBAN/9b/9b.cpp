#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = (2 * cos(x-3.14/6)) / (0.5+sin(y)*sin(y));
    b = 1 + (z*z) / (3 + exp(z*log(2.0/5)));
    cout << setprecision(2) << fixed;
    cout << a << " " << b << endl;
    return 0;
}
