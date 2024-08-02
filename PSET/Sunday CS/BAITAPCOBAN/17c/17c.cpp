#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, a, b, min, ans;
    cin >> x >> y >> z;
    a = x+y+z/2;
    b = x*y*z;
    min = a;
    if (min > b) min = b;
    ans = min*min + 1;
    cout << setprecision(2) << fixed;
    cout << ans << endl;
    return 0;
}
