#include <iostream>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i = 0; i<n; ++i) cin >> a[i];
}

int Solve()
{
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i]%2 != 0) odd = odd + 1;
    }
    return odd;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
