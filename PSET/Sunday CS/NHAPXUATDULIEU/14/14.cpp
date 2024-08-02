#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double ans;
    ans = a + b*b + c*c*c;
    cout << setprecision(2) << fixed;
    cout << ans << endl;
    return 0;
}
