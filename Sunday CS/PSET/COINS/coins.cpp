#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long coins, n, m, a[100000], b[100000];

void input()
{
    long long i, x;
    cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        cin >> x;
        b[i] = x-a[i];
    }
}

void swap(long long a[100000], long long i, long long j)
{
    long long c;
    c=a[i];
    a[i] = a[j];
    a[j] = c;
}

void quicksort(long long l, long long r)
{
    long long i, j, x;
    i = l;
    j = r;
    x = b[l+rand() % (r-l+1)];
    while (i < j) {
        while (b[i] < x) i = i + 1;
        while (b[j] > x) j = j - 1;
        if (i <= j) {
            swap(a, i, j);
            swap(b, i, j);
            i = i + 1;
            j = j - 1;
        }
    }
    if (i<r) quicksort(i, r);
    if (l<j) quicksort(l, j);
}

void output()
{
    long long i;
    quicksort(1, n);
    coins = m;
    for (i=1; i<=n; i++)
        if (coins>=b[i]) coins = coins + a[i];
    cout << coins;
}

int main()
{
    freopen("coins.inp", "r", stdin);
    freopen("coins.out", "w", stdout);
    input();
    output();
    return 0;
}
