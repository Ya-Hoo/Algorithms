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
            int digit = 1;
            int s = 0;
            while (num!=0) {
                if (digit>3) s = s + (num % 10);
                else s = s - (num % 10);
                num = num / 10;
                digit = digit + 1;
            }
            if (s==0) count = count + 1;
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
