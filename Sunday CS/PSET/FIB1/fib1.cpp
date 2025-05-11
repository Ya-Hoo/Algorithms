#include <iostream>

using namespace std;

int t, n;
long k, f[46];

void prep()
{
    f[0] = 1;
    f[1] = 1;
    for (int i=2; i<=45; i++) f[i] = f[i-1] + f[i-2];
}

char F(int n, long k)
{
    if (n==0) return 'a';
    else if (n==1) return 'b';
    if (k <= f[n-2]) return F(n-2, k);
    else return F(n-1, k-f[n-2]);
}

int main()
{
    freopen("FIB1.inp", "r", stdin);
    freopen("FIB1.out", "w", stdout);
    prep();
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n >> k;
        cout << F(n, k) << endl;
    }
    return 0;
}
