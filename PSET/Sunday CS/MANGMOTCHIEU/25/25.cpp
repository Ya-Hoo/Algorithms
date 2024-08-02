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
    int b = 0;
    for (int i=0; i<n; ++i){
        if (a[i] == x) b = b + 1;
    }
    return b;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
