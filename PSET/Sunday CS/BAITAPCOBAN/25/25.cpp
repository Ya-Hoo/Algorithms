#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e, min;
    cin >> a >> b >> c;
    d = a + b + c;
    e = d / 3;
    if (d<1) {
        min = a;
        if (min > b) min = b;
        if (min > c) min = c;
        if (a==min) a = e;
        if (b==min) b = e;
        if (c==min) c = e;
    }
    else {
        if (a<b) a = (b+c) / 2;
        else b = (a+c) / 2;
    }
    cout << setprecision(2) << fixed;
    cout << a << " " << b << " " << c;
    return 0;
}
