#include <iostream>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

void Solve()
{
    for (int i=0; i<n; i++) {
        int num = a[i];
        int root = sqrt(num);
        if (root*root == num) cout << num << " ";
    }
}

int main()
{
    input();
    Solve();
    return 0;
}
