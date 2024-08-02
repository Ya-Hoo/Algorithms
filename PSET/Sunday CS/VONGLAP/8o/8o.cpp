#include <iostream>
#include <math.h>

using namespace std;

int Solve(long long n)
{
    int fact, num;
    num = 1;
    fact = 0;
    while (num<=n){
        if (n%num == 0) fact = fact + num;
        num = num + 1;
    }
    return fact;
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
