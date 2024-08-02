#include <iostream>

using namespace std;

long long m, n;
bool A[10000001];

void input()
{
    cin >> m >> n;
}

void taosangnt()
{
    int i, j;
    for (i=1; i<=10000000; i++) A[i] = true;
    A[1] = false;
    for (i=2; i<=10000000; i++) {
        if (A[i] == true) {
            for (j=i; j<=10000000/i; j++) A[i*j] = false;
        }
    }
}

void output()
{
    long long dem, i;
    dem = 0;
    i = m;
    while (i <= n) {
        if (A[i]==true) dem++;
        i++;
    }
    cout << dem << endl;
}

int main()
{
    freopen("prime2.inp", "r", stdin);
    freopen("prime2.out", "w", stdout);
    input();
    taosangnt();
    output();
    return 0;
}
