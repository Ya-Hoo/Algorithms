#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, r, R;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    r = s/p;
    R = a*b*c/(4*s);
    cout << setprecision(2) << fixed;
    cout << r << endl;
    cout << R << endl;
    return 0;
}
