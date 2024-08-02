#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, max, t, a, b;
    cin >> n;
    max = 0;
    a = n % 10;
    n = n/10;
    while (n!=0){
        b = n % 10;
        n = n/10;
        t = abs(a-b);
        if (max < t) max = t;
        a = b;
    }
    cout << max;
    return 0;
}
