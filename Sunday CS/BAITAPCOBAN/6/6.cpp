#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, alpha, beta, gamma;
    cin >> a >> b >> c;
    if (a+b > c && b+c > a && a+c > b) {
        double p = (b*b+c*c-a*a) / (2*b*c);
        double q = (a*a+c*c-b*b) / (2*a*c);
        alpha = acos(p) * 180 / 3.1416;
        beta = acos(q) * 180 / 3.1416;
        gamma = 180 - alpha - beta;
        cout << setprecision(2) << fixed;
        cout << alpha << " " << beta << " " << gamma << endl;
    }
    return 0;
}
