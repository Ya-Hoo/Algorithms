#include <bits/stdc++.h>

using namespace std;

long long int sumdig(long long n)
{
    long long sum=0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

long long power(long long m, long long n)
{
    int s=1;
    for (long long i=1; i<=n; i++) s *= m;
    return s;
}

int main()
{
    freopen("equation.inp", "r", stdin);
    freopen("equation.out", "w", stdout);
    long long flag = 0;
    long long a, b, c;
    cin >> a >> b >> c;
    for (long long int cnt=1; cnt<=81; cnt++) {
        long long x = power(cnt, a) * b + c;
        if ((sumdig(x)==cnt) && (x - power(cnt,a)*b-c==0) && (x<1000000000)) {
            cout << x << endl;
            flag = 1;
        }
    }
    if (flag==0) cout << "No solution";
}
