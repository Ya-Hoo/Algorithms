#include <iostream>

using namespace std;

int m, n, x, a[100][100];

void input()
{
    cin >> m >> n >> x;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
}

void output()
{
    int count = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]==x) count = count + 1;
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
