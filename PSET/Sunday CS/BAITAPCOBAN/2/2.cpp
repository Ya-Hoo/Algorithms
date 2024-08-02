#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double c = sqrt(a*a-b*b);
    double s = b * c / 2;
    double r = 2 * s / (a + b + c);
    cout << setprecision(2) << fixed;
    cout << r << endl;
    return 0;
}
