#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, a_1, a_2, a_3, b, c, d;
    cin >> a;
    b = a * a; // 2
    a_1 = b * b; // 4
    c = a_1 * a_1; // 8
    a_2 = c * a_1; // 12
    a_3 = a_2 * a_2 * a_1; // 28
    cout << setprecision(2) << fixed;
    cout << a_1 << endl;
    cout << a_2 << endl;
    cout << a_3 << endl;
    return 0;
}
