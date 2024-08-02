#include <iostream>

using namespace std;

long long Solve(long long n)
{
    long long f = 1;
    if (n>1) {
        long long s = 1;
        int i = 2;
        while (i <= n){
            f = i * s;
            s = s + f;
            i = i + 1;
        }
    }
    return f;
}

int main()
{
    long long n, f;
    cin >> n;
    f = Solve(n);
    cout << f;
    return 0;
}
