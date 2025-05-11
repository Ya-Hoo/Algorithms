#include <iostream>

using namespace std;

int d[5001][3];

void Swap(long long i, long long j)
{
    int c1, c2, c3;
    c1 = d[i][0];
    c2 = d[i][1];
    c3 = d[i][2];

    d[i][0] = d[j][0];
    d[i][1] = d[j][1];
    d[i][2] = d[j][2];

    d[j][0] = c1;
    d[j][1] = c2;
    d[j][2] = c3;
}

void quicksort(long long l, long long r)
{
    long long i, j, x_index, x;
    i = l;
    j = r;
    x_index = l+rand() % (r-l+1);
    x = d[x_index][1] * d[x_index][2];
    while (i<j) {
        while (d[i][1]*d[i][2] > x) i++;
        while (d[j][1]*d[j][2] < x) j--;
        if (i<=j) {
            Swap(i, j);
            i++;
            j--;
        }
    }
    if (i < r) quicksort(i, r);
    if (j > l) quicksort(l, j);
}

void sortDimension(int index, int l, int r)
{
    int i, j, x;
    i = l;
    j = r;
    x = d[index][l+rand() % (r-l+1)];
    while (i<j) {
        while (d[index][i] < x) i++;
        while (d[index][j] > x) j--;
        if (i <= j) {
            int c = d[index][i];
            d[index][i] = d[index][j];
            d[index][j] = c;
            i++;
            j--;
        }
    }
    if (i<r) sortDimension(index, i, r);
    if (j>l) sortDimension(index, l, j);
}

void solve()
{
    int n;
    cin >> n;
    int t[n+1];
    for (int i=1; i<=n; i++) {
        t[i] = 0;
        for (int j=0; j<3; j++) {
            cin >> d[i][j];
        }
    }

    // height is index 0 (smallest d)
    for (int i=1; i<=n; i++) sortDimension(i, 0, 2);

    quicksort(1, n);

    t[1] = d[1][0];
    for (int i=2; i<=n; i++) {
        for (int j=1; j<i; j++) {
            bool check, case1, case2;
            case1 = (d[i][1] <= d[j][1]) && (d[i][2] <= d[j][2]);
            case2 = (d[i][1] <= d[j][2]) && (d[i][2] <= d[j][1]);
            check = case1 || case2;
            if (check) t[i] = max(t[i], t[j]+d[i][0]);
        }
    }

    int tower = t[1];
    for (int i=1; i<=n; i++) tower = max(t[i], tower);
    cout << tower;
}

int main()
{
    freopen("tower.inp", "r", stdin);
    freopen("tower.out", "w", stdout);
    solve();
    return 0;
}
