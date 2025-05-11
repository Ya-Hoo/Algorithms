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
    int b=0;
    for (int i=0; i<n; ++i) {
        int num = a[i];
        int s = 0;
        for (int j=1; j<num; ++j) {
            if (num % j == 0) s = s + j;
        }
        if (s==num) b = b + 1;
    }
    return b;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
