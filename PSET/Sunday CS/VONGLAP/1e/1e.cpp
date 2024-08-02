#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int Solve(int n)
{
    int S = 1;
    int i = 1;
    while (i<=n){
        S = S * i;
        i = i + 1;
    }
    return S;
}

int main()
{
    int n, s;
    cin >> n;
    cout << setprecision(2) << fixed;
    s = Solve(n);
    cout << s;
    return 0;
}
