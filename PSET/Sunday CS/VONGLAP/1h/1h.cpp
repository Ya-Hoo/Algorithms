#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n)
{
    double S = 1;
    int i = 2;
    while (i<=n){
        S = S * (1 + 1.0/sqrt(i));
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    cin >> n;
    double s = Solve(n);
    cout << setprecision(2) << fixed;
    cout << s;
    return 0;
}
