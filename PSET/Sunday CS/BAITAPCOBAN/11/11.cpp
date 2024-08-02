#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, a;
    cin >> x;
    a = x*(x*(x*(2*x-3)+4)-5) + 6;
    cout << setprecision(2) << fixed;
    cout << a << endl;
    return 0;
}
