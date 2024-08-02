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
    int max = 0;
    for (int i=0; i<n; ++i) {
        if (a[i]>max) max = a[i];
    }
    return max;
}

int main()
{
    input();
    cout<<Solve();
    return 0;
}
