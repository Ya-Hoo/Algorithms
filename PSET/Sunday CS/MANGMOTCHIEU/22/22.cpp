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
    int sorted = 1;
    while (true) {
        for (int i=1; i<n; ++i){
            int x, y;
            x = a[i];
            y = a[i-1];
            if (y<x) {
                a[i] = y;
                a[i-1]=x;
                sorted = 0;
            }
        }
        if (sorted) {
            for (int i=0; i<n; ++i) {
                cout << a[i] << " ";
            }
            return 0;
        }
        sorted = 1;
    }
}

int main()
{
    input();
    Solve();
    return 0;
}
