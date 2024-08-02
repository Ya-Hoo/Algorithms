#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, a;
    cin >> x >> y;
    a = 6 + y*(10-4*y) + x*(2*x-3+y*(15-7*x+y*(3*x-2)));
    cout << setprecision(2) << fixed;
    cout << a << endl;
    return 0;
}
