#include <iostream>

using namespace std;

int t, n;
long k, f[46], a[46];

void prep()
{
    f[0] = 1;
    f[1] = 1;
    a[0] = 1;
    a[1] = 0;

    for (int i=2; i<46; i++) {
        f[i] = f[i-1] + f[i-2];
        a[i] = a[i-1] + a[i-2];
    }
}

long count_a(int n, long k)
{
    if (k == 0) return 0;
    if (n == 0) return 1;
    if (n == 1) return 0;

    if (k<=f[n-2]) return count_a(n-2, k);
    else return a[n-2] + count_a(n-1, k-f[n-2]);
}

int main()
{
    freopen("fib2.inp", "r", stdin);
    freopen("fib2.out", "w", stdout);
    prep();
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n >> k;
        cout << count_a(n, k) << endl;
    }
    return 0;
}
