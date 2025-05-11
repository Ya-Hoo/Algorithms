#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, s, p;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    double b = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    double c = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    p = a + b + c;
    s = sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    cout << setprecision(2) << fixed;
    cout << p << endl;
    cout << s << endl;
    return 0;
}
