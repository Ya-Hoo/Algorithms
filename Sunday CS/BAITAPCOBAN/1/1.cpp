#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double R;
    cin >> n >> R;
    double rad = 6.28 / n;
    double a = R * sqrt(2 - 2*cos(rad));
    double p = a * n;
    cout << setprecision(2) << fixed;
    cout << p << endl;
    return 0;
}
