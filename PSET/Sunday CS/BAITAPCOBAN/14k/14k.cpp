#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e, f, g;
    cin >> a;
    b = a * a; // 2
    c = b * b; // 4
    d = c * c; // 8
    e = d * d; // 16
    f = e * e; // 32
    g = f * f;
    cout << setprecision(2) << fixed;
    cout << g << endl;
    return 0;
}
