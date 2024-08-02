#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, a_1, a_2, b, c;
    cin >> a;
    b = a * a; // 2
    a_1 = b * b; // 4
    c = a_1 * a_1; // 8
    a_2 = c * c * a_1;
    cout << setprecision(2) << fixed;
    cout << a_1 << endl;
    cout << a_2 << endl;
    return 0;
}
