#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, ma, mb, mc;
    cin >> a >> b >> c;
    ma = sqrt((b*b+c*c)/2 - a*a/4);
    mb = sqrt((a*a+c*c)/2 - b*b/4);
    mc = sqrt((a*a+b*b)/2 - c*c/4);
    cout << setprecision(2) << fixed;
    cout << ma << endl;
    cout << mb << endl;
    cout << mc << endl;
    return 0;
}
