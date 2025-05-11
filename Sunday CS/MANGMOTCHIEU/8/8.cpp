#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

int Solve()
{
    int index = 0;
    for (int i=0; i<n; ++i) {
        if (a[i] > a[index]) index = i;
    }
    return index + 1;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
