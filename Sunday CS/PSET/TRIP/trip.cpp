#include <bits/stdc++.h>

using namespace std;

long n, d, m[100001], ans;

void solve()
{
    ans = 0;
    long i = 1, j=n;
    while (i<=j) {
        if (m[i]+m[j]<=d) ++i;
        --j;
        ++ans;
    }
    cout << ans << endl;
}

void input()
{
    while (cin>>n)
    {
        memset(m, 0, sizeof(m));
        cin >> d;
        for (long i=1; i<=n; ++i) cin >> m[i];
        sort(m+1, m+n+1);
        solve();
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("Trip.inp", "r", stdin);
    freopen("trip.out", "w", stdout);
    input();
    return 0;
}
