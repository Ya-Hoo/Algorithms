#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, delta, x, x_1, x_2;
    cin >> a >> b >> c;
    cout << setprecision(2) << fixed;
    if (a==0) {
        if (b==0) {
            if (c==0) cout << "A";
            else cout << "E";
        }
        else {
            x = -c/b;
            cout << x;
        }
    }
    else {
        delta = b*b - 4 * a * c;
        if (delta < 0) cout << "E";
        else
            if (delta == 0) {
            x = -b/(2*a);
            cout << x;
        }
        else {
            x_1 = (-b - sqrt(delta)) / (2 * a);
            x_2 = (-b + sqrt(delta)) / (2 * a);
            cout << x_1 << " " << x_2;
        }
    }
    return 0;
}
