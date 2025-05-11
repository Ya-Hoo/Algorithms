#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p, s;
    p = a + b + c;
    s = sqrt(p/2 * (p/2 - a) * (p/2 - b) * (p/2 - c));
    cout << setprecision(2) << fixed;
    cout << p << endl;
    cout << s << endl;
    return 0;
}
