#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, x, y;
    cin >> x >> y;
    a = (x+y)/2;
    b = x*y;
    if (x>y){
        x=b;
        y=a;
    }
    else {
        x=a;
        y=b;
    }
    cout << setprecision(2) << fixed;
    cout << x << " " << y << endl;
    return 0;
}
