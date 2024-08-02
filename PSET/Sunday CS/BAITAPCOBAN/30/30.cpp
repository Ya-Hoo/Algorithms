#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, c2, d, e, f, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    d = a1/a2;
    e = b1/b2;
    f = c1/c2;
    cout << setprecision(2) << fixed;
    if ((d==e) && (e==f)) cout << "A";
    else if ((d==e) && (e!=f)) cout << "E";
    else if (d!=e) {
        x = (b1*c2-b2*c1)/(b2*a1-b1*a2);
        y = (c1*a2-c2*a1)/(b2*a1-b1*a2);
        cout << x << " " << y;
    }
    return 0;
}
