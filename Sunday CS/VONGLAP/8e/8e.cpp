#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, p, a;
    cin >> n;
    p = 1;
    while (n!=0) {
        a = n%10;
        if (a%2!=0) p = p * a;
        n = n / 10;
    }
    cout << p;
    return 0;
}
