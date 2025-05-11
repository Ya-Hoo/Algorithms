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
    for (int i=0; i<m; i++) {
        int flag = 1;
        for (int j=0; j<n-1; j++) {
            if (a[i][j]>a[i][j+1]) flag = 0;
        }
        if (flag==1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

int main()
{
    input();
    output();
    return 0;
}
