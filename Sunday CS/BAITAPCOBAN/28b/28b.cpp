#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if ((x*x < y*y + z*z) && (y*y < x*x + z*z) && (z*z < y*y + x*x)) cout << 1;
    else if ((x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == y*y + x*x)) cout << 2;
    else if ((x*x > y*y + z*z) || (y*y > x*x + z*z) || (z*z > y*y + x*x)) cout << 3;
    return 0;
}
