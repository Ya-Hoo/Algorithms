#include <iostream>
#include <cmath>

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
        for (int j=0; j<n; j++) {
            int num = a[i][j];
            int root = sqrt(num);
            if (num == root*root) cout << num << " ";
        }
    }
}

int main()
{
    input();
    output();
    return 0;
}
