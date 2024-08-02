#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a<=b) && (b<=c) && (c<=d)) {
        a = d;
        b = d;
        c = d;
        d = d;
    }
    else if (!((a>b) && (b>c) && (c>d))){
        a = a * a;
        b = b*b;
        c = c*c;
        d = d*d;
    }
    cout << setprecision(2) << fixed;
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}
