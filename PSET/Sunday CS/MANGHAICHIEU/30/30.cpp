#include <iostream>

using namespace std;

int m, n, a[102][102], b[102][102];

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

void output()
{
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
}

void createB()
{
    int dx[8], dy[8];
    dx[0]=0; dx[1]= 0; dx[2]=1; dx[3]=-1; dx[4]=1; dx[5]= 1; dx[6]=-1; dx[7]=-1;
    dy[0]=1; dy[1]=-1; dy[2]=0; dy[3]= 0; dy[4]=1; dy[5]=-1; dy[6]= 1; dy[7]=-1;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            for (int k=0; k<8; k++) b[i][j] = b[i][j] + a[i+dx[k]][j+dy[k]];
}

int main()
{
    input();
    createB();
    output();
    return 0;
}
