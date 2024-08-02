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
    int max = -1;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int num = a[i][j];
            int total = 0;
            for (int k=1; k<num; k++) {
                if (num%k==0) total = total + k;
            }
            if ((total==num)&&(num > max)) max = num;
        }
    }
    cout << max;
}

int main()
{
    input();
    output();
    return 0;
}
