#include <iostream>
#include <cmath>

using namespace std;

int m, n, a[100][100];

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

int prime(int num)
{
    if (num > 1) {
        for (int k=2; k<=sqrt(num); k++) {
            if (num % k==0) return 0;
        }
        return 1;
    }
    return 0;
}

void output()
{
    int flag = 0;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (prime(a[i][j])) {
                flag = 1;
                cout << i << " " << j << endl;
            }
        }
    }
    if (flag == 0) cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
