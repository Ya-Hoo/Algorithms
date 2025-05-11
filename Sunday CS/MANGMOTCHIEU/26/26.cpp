#include <iostream>

using namespace std;

int a[1001], n, s;

void input()
{
    cin >> n >> s;
    for (int i=1; i<=n; ++i) cin >> a[i];
}

void output()
{
    int flag=0, i1, j1;
    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            int s1 = 0;
            for (int k=i; k<=j; k++) s1 = s1 + a[k];
            if ((s1==s) && (flag==0)) {
                flag = 1;
                i1=i;
                j1=j;
            }
        }
    }
    if (flag==1) cout <<i1<<" "<<j1;
    else cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
