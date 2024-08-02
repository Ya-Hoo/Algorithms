#include <iostream>
#include <math.h>

using namespace std;

int n, a[100000], num, maxcount;

void quicksort(long long l, long long r)
{
    long long i, j, x;
    i = l;
    j = r;
    x = a[l+rand() % (r-l+1)];
    while (i < j) {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            long long temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }
    if (i<r) quicksort(i, r);
    if (l<j) quicksort(l, j);
}

int main()
{
    freopen("MAXFREQ.INP", "r", stdin);
    freopen("MAXFREQ.OUT", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    quicksort(0, n-1);
    maxcount = 1;
    num = a[0];
    int cnt=1;
    for (int i=1; i<n; i++) {
        if (a[i] == a[i-1]) cnt++;
        else cnt=1;

        if (cnt > maxcount) {
            maxcount = cnt;
            num = a[i-1];
        }
    }
    cout << num;
    return 0;
}
