#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x_1, x_2, y_1, y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    double delta_x = x_2 - x_1;
    double delta_y = y_2 - y_1;
    double d = sqrt(delta_x*delta_x + delta_y*delta_y);
    cout << setprecision(2) << fixed;
    cout << d << endl;
    return 0;
}
