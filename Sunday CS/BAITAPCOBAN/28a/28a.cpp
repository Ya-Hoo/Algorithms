#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if ((x<(y+z)) && (y<(x+z)) && (z<(x+y))) cout << 1;
    else cout << 0;
    return 0;
}
