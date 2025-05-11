#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long n, a[100000];

void input()
{
    cin >> n;
    for (long long i; i<n; i++) cin >> a[i];
}

void swap(long long x, long long y)
{
    long long c = a[x];
    a[x] = a[y];
    a[y] = c;
}

void quicksort(long long l, long long r)
{
    long long i, j, x;
    i = l;
    j = r;
    x = a[l+rand() %(r-l+1)];
    while (i < j) {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if (i<=j) {
            swap(i, j);
            i++;
            j--;
        }
    }
    if (i < r) quicksort(i, r);
    if (j > l) quicksort(l, j);
}

void output()
{
    quicksort(0,n-1);
    for (long long i=0; i<n; i++) cout << a[i] << " ";
}

int main()
{
    freopen("sort.inp", "r", stdin);
    freopen("sort.out", "w", stdout);
    input();
    output();
    return 0;
}
