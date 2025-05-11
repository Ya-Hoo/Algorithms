#include <iostream>
#include <math.h>

using namespace std;

long n, k;
int twin=0;

void solve()
{
    cin >> n >> k;
    int primes[n+1];
    for (int i=0; i<=n; i++) primes[i] = 1;
    for (int p = 2; p * p <= n; p++) {
        if (primes[p] == 1) {
            for (int i = p * p; i <= n; i += p)
                primes[i] = 0;
        }
    }

    for (int i=2; i<=n; i++) {
        if (primes[i]) {
            if (i+k <= n) {
                if (primes[i+k]) twin++;
            }
        }
    }
    cout << twin;
}

int main()
{
    freopen("twins.inp", "r", stdin);
    freopen("twins.out", "w", stdout);
    solve();
    return 0;
}
