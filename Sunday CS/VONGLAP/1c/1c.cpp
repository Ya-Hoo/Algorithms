#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Solve(int n)
{
    double S = 0;
    int i = 1;
    while (i <= n){
        S = sqrt(2+S);
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    double s;
    cin >> n;
    cout << setprecision(2) << fixed;
    s = Solve(n);
    cout << s;
    return 0;
}
