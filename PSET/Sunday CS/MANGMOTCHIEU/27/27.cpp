#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
}

void output()
{
    int max = -2000000000, i1, j1;
    for (int i=1; i<=n;i++) {
        for (int j=i; j<=n; j++) {
            int s1 = 0;
            for (int k=i; k<=j; k++) s1 = s1 + a[k];
            if (s1>max) {
                i1 = i;
                j1 = j;
                max = s1;
            }
        }
    }
    cout << i1 << " " << j1;
}

int main()
{
    input();
    output();
    return 0;
}
