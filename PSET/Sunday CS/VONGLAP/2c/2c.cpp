#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n, double x)
{
    double S = 0;
    int i = 1;
    int p = 1;
    double q = 1.0;
    while (i<=n){
        p = p * i;
        i = i + 1;
    }
    i = 1;
    while (i<=n){
        S = S + q/p;
        q = q * x;
        p = p / (n - i + 1);
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    double x, s;
    cin >> n >> x;
    s = Solve(n, x);
    cout << setprecision(2) << fixed;
    cout << s;
    return 0;
}
