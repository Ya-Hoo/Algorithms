#include <iostream>

using namespace std;

int m, n, a[100][100], b[100][100];

void input()
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
}

void output()
{
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (i==0) {
                b[i][j] = a[i+1][j];
                if (j==0) b[i][j] += a[i][j+1];
                else if (j==n-1) b[i][j] += a[i][j-1];
                else b[i][j] += a[i][j+1] + a[i][j-1];
            }
            else if (i==m-1) {
                b[i][j] = a[i-1][j];
                if (j==0) b[i][j] += a[i][j+1];
                else if (j==n-1) b[i][j] += a[i][j-1];
                else b[i][j] += a[i][j+1] + a[i][j-1];
            }
            else {
                b[i][j] = a[i+1][j] + a[i-1][j];
                if (j==0) b[i][j] += a[i][j+1];
                else if (j==n-1) b[i][j] += a[i][j-1];
                else b[i][j] += a[i][j+1] + a[i][j-1];
            }
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    input();
    output();
    return 0;
}
