#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, a_1, a_2, a_3, b, c, d;
    cin >> a;
    a_1 = a * a; // 2
    b = a_1 * a_1; // 4
    a_2 = b * a; // 5
    d = a_2 * a_2; // 10
    a_3 = d * a_2 * a_1; // 17
    cout << setprecision(2) << fixed;
    cout << a_1 << endl;
    cout << a_2 << endl;
    cout << a_3 << endl;
    return 0;
}
