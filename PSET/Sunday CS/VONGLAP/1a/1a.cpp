#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double solve(int n) {
    double S = 0;
    int i = 2;
    while (i <= n){
        S = S + (double)(i-1)/i;
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    cin>>n;
    cout << setprecision(2) << fixed;
    double s;
    s = solve(n);
    cout<<s;
    return 0;
}
