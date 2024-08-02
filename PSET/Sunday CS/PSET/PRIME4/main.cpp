#include <iostream>

using namespace std;

long long n;
bool A[20000001];

void input()
{
    cin >> n;
}

void taosangnt()
{
    long long i, j;
    for (i=1; i<=20000000; i++) A[i] = true;
    A[1] = false;
    for (i=2; i<=20000000; i++) {
        if (A[i] == true) {
            for (j=i; j<=20000000/i; j++) A[i*j] = false;
        }
    }
}

void output()
{
    long long i=1, dem=0;
    while (i < n*2) {
        if (A[i] == true) dem++;
        i++;
    }
    cout << dem;
}

int main()
{
    freopen("prime4.inp", "r", stdin);
    freopen("prime4.out", "w", stdout);
    input();
    taosangnt();
    output();
    return 0;
}
