#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double p, s;
    s = a * b / 2;
    p = 4 * sqrt((a/2) * (a/2) + (b/2) * (b/2));
    cout << setprecision(2) << fixed;
    cout << p << endl;
    cout << s << endl;
    return 0;
}
