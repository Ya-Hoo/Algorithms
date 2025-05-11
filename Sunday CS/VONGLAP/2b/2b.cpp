#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n, double x)
{
    double S = 0;
    int i = 1;
    double p = 1;
    int q = 1;
    while (i<=n){
        p = p * x;
        q = q * i;
        if (i%2==0) S = S - p/q;
        else S = S + p/q;
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
