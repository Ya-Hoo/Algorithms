#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = (3 + exp(y-1)) / (1 + x*x*abs(y-tan(z)));
    b = 1 - abs(y-x) + (y-x)*(y-x)/2 + (y-x)*(y-x)*(y-x)/3;
    cout << setprecision(2) << fixed;
    cout << a << " " << b << endl;
    return 0;
}
