#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, a, i, b, j;
    cin >> n;
    a = 0;
    i = 0;
    j = 0;
    while (n!=0){
        b = n % 10;
        if (b>a) {
            a = b;
            j = i;
        }
        i = i + 1;
        n = n/10;
    }
    cout << j;
    return 0;
}
