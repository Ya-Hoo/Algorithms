#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, s, p, q, r;
    cin >> a;
    s = a * a * a;
    q = s * s;
    p = q * q;
    r = s * p;
    cout << setprecision(2) << fixed;
    cout << r << endl;
    return 0;
}
