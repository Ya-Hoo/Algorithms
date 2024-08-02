#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, alpha;
    cin >> a >> b >> alpha;
    alpha = alpha * (3.14/180);
    double d = (b-a)/2;
    double h = d*tan(alpha);
    double s = (a+b) * h / 2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
    return 0;
}
