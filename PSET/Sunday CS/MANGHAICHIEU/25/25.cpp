#include <iostream>

using namespace std;

int m, n, a[100][100];

void input()
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
}

void output()
{
    int flag = 0;
    int max = -2000000000;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int num, revNum;
            num = a[i][j];
            revNum = 0;
            while (num != 0) {
                revNum = revNum * 10;
                revNum = revNum + (num % 10);
                num = num / 10;
            }
            if (revNum==a[i][j]) {
                flag = 1;
                if (a[i][j]>max) max = a[i][j];
            }
        }
    }
    if (flag==1) cout << max;
    else cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
