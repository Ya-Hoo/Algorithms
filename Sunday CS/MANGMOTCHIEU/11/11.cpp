#include <iostream>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=0; i<n; ++i) cin >>a[i];
}

int Solve()
{
    int max=-1;
    for (int i=0; i<n; ++i) {
        int num = a[i];
        int root = sqrt(num);
        if (root*root==num) {
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
