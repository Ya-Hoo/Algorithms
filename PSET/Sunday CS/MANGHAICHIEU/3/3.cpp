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
            if (a[i][j] % 2 == 0) count += 1;
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
