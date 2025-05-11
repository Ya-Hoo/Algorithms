#include <iostream>
#include <iomanip>

using namespace std;

int m,n,a[100][100];

void input()
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
}

void output()
{
    float total = 0;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) total += a[i][j];
    cout << setprecision(2) << fixed;
    cout << total / (m*n);
}

int main()
{
    input();
    output();
    return 0;
}
