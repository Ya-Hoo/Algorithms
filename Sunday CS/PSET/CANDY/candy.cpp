#include <bits/stdc++.h>
#define maxn 1010

using namespace std;

void output()
{
    int n, t=0, f[10001], d[10001];
    cin >> n;
    int a[n+1];
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        t += a[i];
    }
    t /= 2;

    for (int i=1; i<=t; i++) {
        f[i] = INT_MAX;
        for (int j=1; j<=n; j++) {
            if (i>=a[j] && j>f[i-a[j]]) {
                f[i] = j;
                break;
            }
        }
    }

    while (f[t] > n) t--;
    while (t > 0) {
        d[f[t]] = 1;
        t -= a[f[t]];
    }

    long left=0, right=0;
    for (int i=1; i<=n; i++) {
        if (d[i]==1) left += a[i];
        else right += a[i];
    }
    cout << abs(left-right);
}

int main()
{
    freopen("candy.inp", "r", stdin);
    freopen("candy.out", "w", stdout);
    output();
    return 0;
}
