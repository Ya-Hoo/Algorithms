#include <iostream>
#include <math.h>

using namespace std;

long long a[100001], b[100001][2];
int m, n;

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        cin >> b[i][0];
        b[i][1] = i;
    }
}

void swapNum(long long i, long long j)
{
    long long k1, k2;
    k1 = b[i][0];
    k2 = b[i][1];

    b[i][0] = b[j][0];
    b[i][1] = b[j][1];

    b[j][0] = k1;
    b[j][1] = k2;
}

void quicksort(long long l, long long r)
{
    long long i, j, x;
    i = l;
    j = r;
    x = b[l + rand() % (r-l+1)][0];
    while (i < j) {
        while (b[i][0] < x) i++;
        while (b[j][0] > x) j--;
        if (i <= j) {
            swapNum(i, j);
            i++;
            j--;
        }
    }
    if (i<r) quicksort(i, r);
    if (j>l) quicksort(l, j);
}

long long bisearch(long long x)
{
    long long closest, l, r, closestIndex;
    closest = b[1][0];
    closestIndex = 1;
    l = 1;
    r = n;
    while (l < r) {
        long long mid = (r+l)/2;
        if (abs(b[mid][0]-x) < abs(closest-x)) {
            closest = b[mid][0];
            closestIndex = mid;
        }

        if (b[mid][0]==x) return mid;
        else if (x>b[mid][0]) l = mid + 1;
        else r = mid - 1;
    }
    return closestIndex;
}

void output()
{
    long long minsum = 10000000000;
    long long amin, bmin, sum;
    quicksort(1, n);
    for (int i=1; i<=m; i++) {
        long long index = bisearch(-a[i]);
        sum = abs(a[i] + b[index][0]);
        if (sum < minsum) {
            minsum = sum;
            amin = i;
            bmin = b[index][1];
        }
    }
    cout << amin << " " << bmin;
}

int main()
{
    // freopen("asummin.inp", "r", stdin);
    // freopen("asummin.out", "w", stdout);
    input();
    output();
    return 0;
}
