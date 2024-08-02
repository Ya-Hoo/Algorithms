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
            int num, s, digit;
            num = a[i][j];
            if (num >= 100000 && num <= 999999) {
                digit = 1;
                s = 0;
                while (num!=0) {
                    if (digit > 3) s = s - (num%10);
                    else s = s + (num % 10);
                    num = num / 10;
                    digit = digit + 1;
                }
                if (s==0) {
                    flag = 1;
                    if (a[i][j] > max) max = a[i][j];
                }
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
