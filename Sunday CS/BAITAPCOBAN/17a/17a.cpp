#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z, min, max;
    cin >> x >> y >> z;
    min = x;
    if (min > y) min = y;
    if (min > z) min = z;
    max = x;
    if (max < y) max = y;
    if (max < z) max = z;
    cout << setprecision(2) << fixed;
    cout << min << endl;
    cout << max << endl;
    return 0;
}
