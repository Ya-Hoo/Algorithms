#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if (a>=b) a = 0;
    cout << setprecision(2) << fixed;
    cout << a << " " << b << endl;
    return 0;
}
