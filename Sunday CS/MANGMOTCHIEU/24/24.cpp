#include <iostream>

using namespace std;

int a[1001], n, x;

void input()
{
    cin >> n >> x;
    for (int i=0; i<n; ++i) cin >> a[i];
}

int Solve()
{
    for (int i=0; i<n; ++i) {
        if (a[i]==x) return i+1;
    }
    return -1;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
