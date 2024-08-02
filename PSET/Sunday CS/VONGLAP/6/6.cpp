#include <iostream>

using namespace std;

long long Fn(long long n)
{
    long long a, b, f;
    a = 1;
    b = 2;
    if (n == 1) f = 1;
    else if (n == 2) f = 2;
    else {
        int i = 3;
        while (i<=n){
            f = 3*b - 2*a;
            a = b;
            b = f;
            i = i + 1;
        }
    }
    return f;
}

int main()
{
    long long n, f;
    cin >> n;
    f = Fn(n);
    cout << f;
    return 0;
}
