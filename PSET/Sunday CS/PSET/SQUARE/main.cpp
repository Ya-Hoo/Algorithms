#include <iostream>

using namespace std;

int m, n;
bool a[1001][1001];

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

void output()
{

}

int main()
{
    //freopen("square.inp", "r", stdin);
    //freopen("square.out", "w", stdout);

    input();
    output();
    return 0;
}
