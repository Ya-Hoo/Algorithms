#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double d;
    cin >> d;
    cout << setprecision(2) << fixed;
    cout << d * d / (4 * 3.14) << endl;
    return 0;
}
