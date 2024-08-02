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
    int max = -2000000000;
    int flag = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int num = a[i][j];
            if ((num % 2 == 0) && (num > max)){
                max = num;
                flag = 1;
            }
        }
    }
    if (flag == 1) cout << max;
    else cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
