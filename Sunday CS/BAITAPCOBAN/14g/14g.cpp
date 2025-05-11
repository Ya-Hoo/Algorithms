#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, s, p, q;
    cin >> a;
    s = a * a; // 2
    q = s * s; // 4
    p = q * q * q * a;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    return 0;
}
