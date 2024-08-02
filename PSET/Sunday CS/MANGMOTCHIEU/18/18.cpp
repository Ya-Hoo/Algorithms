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
        for (int j=2; j<=root; ++j) {
            if (x % j == 0) return 0;
        }
        return 1;
    }
    return 0;
}

void Solve()
{
    for (int i=0; i<n; ++i){
        if (prime(a[i])) cout << i + 1 << " ";
    }
}

int main()
{
    input();
    Solve();
    return 0;
}
