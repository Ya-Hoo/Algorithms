#include <iostream>
#include <math.h>

using namespace std;

int Solve(int k, int n, int m)
{
    int S = 1;
    int i = 1;
    int p = 1;
    while (i<=n){
        p = p * k;
        S = S + p;
        i = i + 1;
    }
    S = S % m;
    return S;
}

int main()
{
    int k,m,n,s;
    cin >> k >> n >> m;
    s = Solve(k, n, m);
    cout << s;
    return 0;
}
