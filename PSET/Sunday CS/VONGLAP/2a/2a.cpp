#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n, double x)
{
    double S = 1;
    int i = 1;
    while (i<=n){
        S = S * x;
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
