#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    cin >> a;
    double p, s;
    p = 4 * a;
    s = a * a;
    cout << setprecision(2) << fixed;
    cout << p <<endl;
    cout << s << endl;
    return 0;
}
