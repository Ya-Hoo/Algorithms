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
    int max = -1;
    for (int i=0; i<n; ++i) {
        int num = a[i];
        if (num%2==0) {
            if (num>max) max = num;
        }
    }
    return max;
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
