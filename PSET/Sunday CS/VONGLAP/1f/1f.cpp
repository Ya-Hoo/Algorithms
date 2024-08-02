#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int Solve(int n)
{
    int S = 1;
    int i;
    if (n%2==0) i = 2;
    else i = 1;
    while (i<=n){
        S = S * i;
        i = i + 2;
    }
    return S;
}

int main()
{
    int n, s;
    cin >> n;
    s = Solve(n);
    cout << s;
    return 0;
}
