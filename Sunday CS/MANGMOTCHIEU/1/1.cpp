#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

long long Solve()
{
    long long s = 0;
    for (int i=0; i<n; ++i) s = s + a[i];
    return s;
}

int main()
{
    input();
    long long res = Solve();
    cout << res;
    return 0;
}
