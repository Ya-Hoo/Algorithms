#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, la, lb, lc;
    cin >> a >> b >> c;
    la = sqrt(b*c*(1-a*a/((b+c)*(b+c))));
    lb = sqrt(a*c*(1-b*b/((a+c)*(a+c))));
    lc = sqrt(a*b*(1-c*c/((a+b)*(a+b))));
    cout << setprecision(2) << fixed;
    cout << la << endl;
    cout << lb << endl;
    cout << lc << endl;
    return 0;
}
