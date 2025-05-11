#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int t[n+1];
    for (int i=0; i<=n+1; i++) t[i] = 0;

    t[0] = 1;
    for (int i=1; i<n; i++) {
        for (int j=i; j<=n; j++) {
            if (j >= i) {
                t[j] += t[j-i];
            }
        }
    }
    cout << t[n]+1;
}

int main()
{
    freopen("number.inp", "r", stdin);
    freopen("number.out", "w", stdout);
    solve();
    return 0;
}
