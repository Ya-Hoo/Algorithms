#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, h;
    cin >> a >> b >> h;
    double area;
    area = (a + b) * h / 2;
    cout << setprecision(2) << fixed;
    cout << area << endl;
    return 0;
}
