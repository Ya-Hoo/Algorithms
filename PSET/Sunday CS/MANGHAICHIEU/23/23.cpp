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
    int count = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int num = a[i][j];
            int reverseNum = 0;
            while (num!=0) {
                reverseNum = reverseNum * 10;
                reverseNum = reverseNum + (num % 10);
                num = num / 10;
            }
            if (a[i][j]==reverseNum) count = count + 1;
        }
    }
    cout << count;
}

int main()
{
    input();
    output();
    return 0;
}
