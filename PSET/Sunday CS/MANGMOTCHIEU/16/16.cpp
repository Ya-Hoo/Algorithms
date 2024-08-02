#include <iostream>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

int prime(int x)
{
    if (x > 1) {
        int root = sqrt(x);
        for (int i=2; i<=root; ++i){
            if (x % i == 0) return 0;
        }
        return 1;
    }
    return 0;
}

int Solve()
{
    int s = 0;
    for (int i=0; i<n; ++i) s = s + prime(a[i]);
    return s;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
