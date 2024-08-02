#include <iostream>
#include <string>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
}

string Solve()
{
    for (int i=1; i<n; ++i) {
        int j = i - 1;
        if (a[j] > a[i]) {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    input();
    cout << Solve();
    return 0;
}
