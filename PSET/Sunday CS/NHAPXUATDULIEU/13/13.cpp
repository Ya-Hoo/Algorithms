#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double sum, avg;
    sum = a + b + c;
    avg = sum / 3;
    cout << setprecision(2) << fixed;
    cout << sum << endl;
    cout << avg << endl;
    return 0;
}
