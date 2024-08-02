#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, delta, t, t_1, t_2, x_1, x_2;
    cin >> a >> b >> c;
    cout << setprecision(2) << fixed;
    if (a==0) {
        if (b==0) {
            if (c==0) cout << "A";
            else cout << "E";
        }
        else {
            t = -c/b;
            if (t>=0) cout << -sqrt(t) << " " << sqrt(t);
            else cout << "E";
        }
    }
    else {
        delta = b*b - 4 * a * c;
        if (delta < 0) cout << "E";
        if (delta >= 0) {
            t_1 = (-b-sqrt(delta))/(2*a);
            t_2 = (-b+sqrt(delta))/(2*a);
            if (t_1>=0) cout << -sqrt(t_1) << " " << sqrt(t_1)<<endl;
            if (t_2>=0) cout << -sqrt(t_2) << " " << sqrt(t_2)<<endl;
        }
    }
    return 0;
}
