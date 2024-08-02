#include <iostream>
#include <math.h>

using namespace std;

int n, k, a[41][41];

void input()
{
    cin >> n >> k;
    for (int i=0; i<n*n; i++) {
        a[i/n][i%n] = i+1;
    }
}

int factorCount(int num)
{
    int count = 0;
    for (int i=1; i<=sqrt(num); i++) {
        if (num%i==0) {
            if (num/i == i) count = count + 1;
            else count = count + 2;
        }
    }
    return count;
}

void table()
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (factorCount(a[i][j]) <= k) cout << '*';
            else cout << '.';
        }
        cout << endl;
    }
}

int main()
{
    freopen("about.inp", "r", stdin);
    freopen("about.out", "w", stdout);
    input();
    table();
    return 0;
}
