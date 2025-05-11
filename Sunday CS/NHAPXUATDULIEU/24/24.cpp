#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << setprecision(2) << fixed;
    cout << abs(a) - abs(b) << endl;
    cout << abs(a) + abs(b) << endl;
    return 0;
}
