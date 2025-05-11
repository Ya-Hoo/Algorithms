#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a;
    b = a * a * a;
    c = b * b * b;
    d = c * c * b;
    cout << setprecision(2) << fixed;
    cout << d << endl;
    return 0;
}
