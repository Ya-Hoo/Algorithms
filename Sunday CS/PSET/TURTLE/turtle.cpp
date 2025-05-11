#include <iostream>

using namespace std;

void solve()
{
    int m,n;
    cin >> m >> n;
    int board[m][n];
    int t[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            t[i][j] = 0;
            cin >> board[i][j];
        }
    }

    t[m-1][0] = board[m-1][0];
    // first column
    for (int i=m-2; i>=0; i--) {
        t[i][0] = t[i+1][0] + board[i][0];
    }
    // last row
    for (int i=1; i<n; i++) {
        t[m-1][i] = t[m-1][i-1] + board[m-1][i];
    }

    for (int i=m-2; i>=0; i--) {
        for (int j=1; j<n; j++) {
            t[i][j] = max(t[i+1][j], t[i][j-1]) + board[i][j];
        }
    }

    cout << t[0][n-1];
}

int main()
{
    freopen("turtle.inp", "r", stdin);
    freopen("turtle.out", "w", stdout);
    solve();
    return 0;
}
