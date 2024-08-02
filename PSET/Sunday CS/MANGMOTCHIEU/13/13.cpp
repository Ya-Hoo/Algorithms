#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

void Solve()
{
    for (int i=0; i<n; ++i) {
        int s = 0;
        int num=a[i];
        for (int j=1; j<num; ++j) {
            if (num % j == 0) s = s + j;
        }
        if (num == s) cout << num << " ";
    }
}

int main()
{
    input();
    Solve();
    return 0;
}
