#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, min, max;
    cin >> x >> y;
    min = x;
    if (min > y) min = y;
    max = x;
    if (max < y) max = y;
    cout << setprecision(2) << fixed;
    cout << min << endl;
    cout << max << endl;
    return 0;
}
