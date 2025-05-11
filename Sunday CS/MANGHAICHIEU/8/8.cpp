#include <iostream>

using namespace std;

int m, n, a[100][100];

void input()
{
    cin >> m >> n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

void output()
{
    int max = -2000000000;
    int i1, j1;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++) {
            int num = a[i][j];
            if (num > max) {
                max = num;
                i1 = i;
                j1 = j;
            }
        }
    }
    cout << i1 << " " << j1;
}

int main()
{
    input();
    output();
    return 0;
}
