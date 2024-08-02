#include <iostream>

using namespace std;

int m, n, a[100][100], x;

void input()
{
    cin >> m >> n >> x;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

void output()
{
    int found = 0;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (a[i][j]==x) {
                found = 1;
                cout << i << " " << j << endl;
            }
        }
    }
    if (found==0) cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
