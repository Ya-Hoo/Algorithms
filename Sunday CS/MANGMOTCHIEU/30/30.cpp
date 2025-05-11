#include <iostream>
#include <cmath>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
}

void output()
{
    int maxlen=0, i1, j1;
    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            int flag = 1;
            for (int k=i; k<=j; k++)
            {
                int num = a[k];
                int root = sqrt(num);
                for (int s=2; s<=root; s++)
                {
                    if (num%s==0) flag = 0;
                }
            }
            int len = j - i;
            if ((flag == 1) && (len > maxlen)) {
                i1 = i;
                j1 = j;
                maxlen = len;
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
