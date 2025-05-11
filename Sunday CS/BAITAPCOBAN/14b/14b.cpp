#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, s, p;
    cin >> a;
    s = a * a;
    p = s * s * s;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    return 0;
}
