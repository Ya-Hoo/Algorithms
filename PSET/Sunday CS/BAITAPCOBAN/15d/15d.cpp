#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, a_1, a_2, b, c, d;
    cin >> a;
    b = a * a; // 2
    c = b * b; // 4
    a_1 = c * a; // 5
    d = a_1 * a_1; // 10
    a_2 = d * a_1 * c;
    cout << setprecision(2) << fixed;
    cout << a_1 << endl;
    cout << a_2 << endl;
    return 0;
}
