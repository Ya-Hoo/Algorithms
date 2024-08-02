#include <iostream>
#include <math.h>

using namespace std;

int Solve(int n, int m)
{
    int S = 0;
    int p = 1;
    int i = 1;
    while (i<=n){
        p = p * i;
        S = S + p;
        i = i + 1;
    }
    S = S % m;
    return S;
}

int main()
{
    int m, n, s;
    cin >> n >> m;
    s = Solve(n, m);
    cout << s;
    return 0;
}
