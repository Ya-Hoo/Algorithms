#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, ha, hb, hc;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p-a) * (p-b) * (p-c));
    ha = 2 * S / a;
    hb = 2 * S / b;
    hc = 2 * S / c;
    cout << setprecision(2) << fixed;
    cout << ha << endl;
    cout << hb << endl;
    cout << hc << endl;
    return 0;
}
