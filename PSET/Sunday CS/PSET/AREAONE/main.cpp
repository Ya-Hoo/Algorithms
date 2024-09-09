#include <iostream>
#include <math.h>

using namespace std;

int m, n;
int cellCNT = 0;
int MAXcellCNT = 0;
bool a[1001][1001];
bool b[1001][1001];

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
        b[i][j]=1;
        if (a[i][j]) {
            cellCNT++;
            if (i>1) visit(i-1, j);
            if (i<m) visit(i+1,j);
            if (j>1) visit(i, j-1);
            if (j<n) visit(i, j+1);
        }
    }
}

void output()
{
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n;j++) {
            if (b[i][j]==0) {
                if (a[i][j]) {
                    visit(i, j);
                    if (cellCNT > MAXcellCNT) MAXcellCNT = cellCNT;
                    cellCNT = 0;
                }
                else {
                    b[i][j]=1;
                    cellCNT = 0;
                }
            }
        }
    }
    cout << MAXcellCNT;
}

int main()
{
    freopen("areaone.inp", "r", stdin);
    freopen("areaone.out", "w", stdout);
    input();
    output();
    return 0;
}
