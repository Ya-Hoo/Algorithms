#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, a_1, a_2, b, c;
    cin >> a;
    b = a * a; // 2
    c = b * a; // 3
    a_1 = b * c; // 5
    a_2 = a_1 * a_1 * c;
    cout << setprecision(2) << fixed;
    cout << a_1 << endl;
    cout << a_2 << endl;
    return 0;
}
