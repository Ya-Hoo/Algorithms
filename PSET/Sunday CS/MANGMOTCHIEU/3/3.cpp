#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i = 0; i<n; ++i) cin >> a[i];
}

int Solve()
{
    int even = 0;
    for (int i = 0; i < n; ++i){
        if (a[i]%2==0) even = even + 1;
    }
    return even;
}

using namespace std;

int main()
{
    input();
    cout << Solve();
    return 0;
}
