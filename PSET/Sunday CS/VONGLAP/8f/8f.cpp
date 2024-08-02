#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, min, a;
    cin >> n;
    min = 9;
    while (n!=0){
        a = n % 10;
        if (a < min and a>0) min = a;
        n = n/10;
    }
    cout << min;
    return 0;
}
