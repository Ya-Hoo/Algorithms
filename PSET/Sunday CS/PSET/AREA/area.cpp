#include <iostream>
#include <math.h>

using namespace std;

char a[1001][1001];
bool b[1001][1001];
int m, n;

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
}

void visit(int i, int j)
{
    if (b[i][j]==0) {
        b[i][j] = 1;
        if (a[i][j]=='*') {
            if (i>1) visit(i-1, j);
            if (i<m) visit(i+1,j);
            if (j>1) visit(i, j-1);
            if (j<n) visit(i, j+1);
        }
    }
}

void output()
{
    int region=0;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (b[i][j]==0) {
                if (a[i][j]=='*') {
                    region = region + 1;
                    visit(i, j);
                }
                else b[i][j]=1;
            }
        }
    }
    cout << region;
}

int main()
{
    freopen("area.inp", "r", stdin);
    freopen("area.out", "w", stdout);
    input();
    output();
    return 0;
}
