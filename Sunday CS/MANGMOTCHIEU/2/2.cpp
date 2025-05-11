#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i = 0; i<n; ++i) cin >> a[i];
}

float Solve()
{
    float s = 0;
    for (int i = 0; i<n; ++i) s = s + a[i];
    return s/n;
}

int main()
{
    input();
    cout << setprecision(2) << fixed;
    float res = Solve();
    cout << res;
    return 0;
}
