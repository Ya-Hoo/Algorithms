#include <iostream>

using namespace std;

long long a[100001], x;
int n;

void input()
{
    cin >> n >> x;
    for (int i=1; i<=n; i++) cin >> a[i];
}

int bisearch()
{
    int l = 1;
    int r = n-1;
    while (l<=r) {
        int m = (l+r)/2;
        if (a[m]==x) return m;
        else if (x>a[m]) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main()
{
    freopen("bisearch.inp", "r", stdin);
    freopen("bisearch.out", "w", stdout);
    input();
    cout << bisearch();
    return 0;
}
