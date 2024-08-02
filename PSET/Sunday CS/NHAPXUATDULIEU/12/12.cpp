#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double p, s;
    p = (a+b) * 2;
    s = a * b;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    cout << s << endl;
    return 0;
}
