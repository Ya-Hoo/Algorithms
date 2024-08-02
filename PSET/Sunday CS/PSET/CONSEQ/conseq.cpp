#include <stdlib.h>
#include <math.h>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

ifstream cin("conseq.INP");
ofstream cout("conseq.OUT");

long long p;

long chuso(long long n)
{
    long cnt = 0;
    p = 1;
    while (n > 0) {
        cnt++;
        n /= 10;
        p *= 10;
    }

    return cnt;
}

long long maxlen(long long w, long long m, long long k)
{
    long long len, d;
    long n;
    w = w/k;
    len = 0;
    n = chuso(m);
    while (true) {
        d = n * (p - m);
        if (w < d) break;
        len += (p-m);
        w -= d;
        m=p;
        p *= 10;
        n++;
    }
    return (len + w / n);
}

void solve()
{
    long long w, m, k;
    cin >> w >> m >> k;
    cout << maxlen(w, m, k);
}

int main()
{
    solve();
    return 0;
}
