#include <iostream>

using namespace std;

int m, n, a[100][100];

void output()
{
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

void input()
{
    cin >> m >> n;
    int x, y, d, p, q;
    p = n; q = m;
    x = 0; y = 0; d = 1;
    while (x<p && y<q) {
        for (int i=x; i<p; i++) {
            a[y][i] = d;
            d = d + 1;
        }
        y = y + 1;
        for (int i=y; i<q; i++) {
            a[i][p-1] = d;
            d = d + 1;
        }
        p = p - 1;
        if (y<q) {
            for (int i=p-1; i>=x; i--) {
                a[q-1][i] = d;
                d = d + 1;
            }
            q = q - 1;
        }
        if (x<p) {
            for (int i=q-1; i>=y; i--) {
                a[i][x] = d;
                d = d + 1;
            }
            x = x + 1;
        }
    }
}

int main()
{
    input();
    output();
    return 0;
}
