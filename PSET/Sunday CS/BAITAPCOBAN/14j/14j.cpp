#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a;
    b = a * a; // 2
    c = b * b; // 4
    d = c * c; // 8
    e = d * d; // 16
    f = e * d * c;
    cout << setprecision(2) << fixed;
    cout << f << endl;
    return 0;
}
