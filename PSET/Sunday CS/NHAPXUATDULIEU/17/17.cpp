#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double p;
    p = (a + b) * 2;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    return 0;
}
