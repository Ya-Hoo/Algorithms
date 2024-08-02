#include <iostream>
#include <math.h>

using namespace std;

long long Solve(long long n)
{
    long long c, pow_five;
    c = 0;
    pow_five = 5;
    while (pow_five <= n){
        c = c + n/pow_five;
        pow_five = pow_five * pow_five;
    }
    return c;
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
