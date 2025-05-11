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

int prime(int num)
{
    if (num > 1) {
        for (int k=2; k<=sqrt(num); k++) {
            if (num % k == 0) return 0;
        }
        return 1;
    }
    return 0;
}

void output()
{
    int flag = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int num = a[i][j];
            if (prime(num)==1) {
                flag = 1;
                cout << num << " ";
            }
        }
    }
    if (flag == 0) cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
