#include <iostream>
#include <math.h>

using namespace std;

long long a[100001], b[100001][2];
int m, n;

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++) cin >> a[i];
    for (int j=1; j<=n; j++) {
        cin >> b[j][0];
        b[j][1] = j;
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
    long long l, r, mid, value;
    long long closest, closestIndex;
    l = 1;
    r = n;
    closest = b[1][0];
    closestIndex = 1;

    while (l <= r) {
        mid = (r+l)/2;
        value = b[mid][0];

        if (abs(value - x) < abs(closest - x)) {
            closest = value;
            closestIndex = mid;
        }

        if (value==x) return mid;
        else if (x>value) l = mid + 1;
        else if (x<value) r = mid - 1;
    }
    return closestIndex;
}

void output(){
    long long amin, bmin, sum, minsum;
    minsum = 10000000000;
    quicksort(1, n);

    for (int i=1; i<=m; i++) {
        int index = bisearch(-a[i]);
        sum = abs(a[i] + b[index][0]);
        if (sum < minsum) {
            minsum = sum;
            amin = i;
            bmin = b[index][1];
            if (sum==0) break;
        }
    }
    cout << amin << " " << bmin;
}

int main()
{
    freopen("asummin.inp", "r", stdin);
    freopen("asummin.out", "w", stdout);
    input();
    output();
    return 0;
}
