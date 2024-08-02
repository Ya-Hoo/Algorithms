#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    cin >> x;
    cout << setprecision(2) << fixed;
    cout << pow(x, 4) + 3 * pow(x, 3) + 2 * pow(x, 2) + x + 2 << endl;
    return 0;
}
