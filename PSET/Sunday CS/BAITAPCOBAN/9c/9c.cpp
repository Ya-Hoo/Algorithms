#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = log(abs((y-sqrt(abs(x)))*(x-y/(z+exp(x*log(2.0/4))))));
    b = x - x*x/(1*2*3) + exp(x*log(5))/(1*2*3*4*5);
    cout << setprecision(2) << fixed;
    cout << a << " " << b << endl;
    return 0;
}
