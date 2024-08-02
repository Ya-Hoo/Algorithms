#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, s, p, q;
    cin >> a;
    s = a * a;
    q = s * s;
    p = q * q;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    return 0;
}
