#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double r;
    cin >> r;
    double p, s;
    p = 2 * r * 3.14;
    s = r * r * 3.14;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    cout << s << endl;
    return 0;
}
