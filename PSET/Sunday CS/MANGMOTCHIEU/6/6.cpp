#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i = 0; i<n; ++i) cin >> a[i];
}

long long Solve()
{
    long long sum = 0;
    for (int i=0; i<n; ++i) {
        if (a[i] % 2 != 0) sum = sum + a[i];
    }
    return sum;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
