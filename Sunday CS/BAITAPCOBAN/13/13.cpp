#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, a, b;
    cin >> x;
    a = 1 + x*(-2+x*(3-4*x));
    b = a + 4*x;
    cout << setprecision(2) << fixed;
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}
