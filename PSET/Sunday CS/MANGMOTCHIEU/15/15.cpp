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

void Solve()
{
    for (int i=0; i<n; ++i) {
        int num = a[i];
        if (prime(num) == 1) cout << num << " ";
    }
}

int main()
{
    input();
    Solve();
    return 0;
}
