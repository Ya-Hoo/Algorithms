#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n)
{
    double S = 0;
    int i = 1;
    double P = 1;
    while (i<=n){
        P = P * 1.0/i;
        if (i%2==0) S = S - P;
        else S = S + P;
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    cin >> n;
    cout << setprecision(2) << fixed;
    double s = Solve(n);
    cout << s;
    return 0;
}
