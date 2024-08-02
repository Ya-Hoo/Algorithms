#include <iostream>

using namespace std;

int m, n, a[100][100], b[100*100];

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
    for (int i=0; i<m*n; i++) cin >> b[i];
}

void process()
{
    int sorted = 0;
    while (sorted == 0) {
        sorted = 1;
        for (int i=0; i<m*n-1; i++) {
            int temp = b[i];
            if (temp<b[i+1]) {
                b[i] = b[i+1];
                b[i+1] = temp;
                sorted = 0;
            }
        }
    }

    int x=0, y=0, q=m, p=n, d=0;
    while (x<p && y<q) {
        for (int i=x; i<p; i++) {
            a[y][i] = b[d];
            d++;
        }
        y = y + 1;
        for (int i=y; i<q; i++) {
            a[i][p-1] = b[d];
            d++;
        }
        p = p - 1;
        if (y<q) {
            for (int i=p-1; i>=x; i--) {
                a[q-1][i] = b[d];
                d++;
            }
            q = q - 1;
        }
        if (x<p) {
            for (int i=q-1; i>=y; i--) {
                a[i][x] = b[d];
                d++;
            }
            x = x + 1;
        }
    }
}

int main()
{
    input();
    process();
    output();
    return 0;
}
