#include <iostream>

using namespace std;

int a[1001], n, x;

void input()
{
    cin >> n >> x;
    for (int i=0; i<n; ++i) cin >> a[i];
}

void Solve()
{
    int found = 0;
    for (int i=0; i<n; ++i) {
        if (a[i] == x) {
            cout << i + 1 << " ";
            found = 1;
        }
    }
    if (found == 0) cout << -1;
}

int main()
{
    input();
    Solve();
    return 0;
}
