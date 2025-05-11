#include <iostream>

using namespace std;

int n, a[100][100];

void output()
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

void input()
{
    cin >> n;
    int m = n;
    int x, y, d, p, q;
    p = n; q = n;
    x = 0; y = 0; d = 1;
    while (x<n && y<m) {
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
        for (int i=p-1; i>=x; i--) {
            a[q-1][i] = d;
            d = d + 1;
        }
        q = q - 1;
        for (int i=q-1; i>=y; i--) {
            a[i][x] = d;
            d = d + 1;
        }
        x = x + 1;
    }
}

int main()
{
    input();
    output();
    return 0;
}
