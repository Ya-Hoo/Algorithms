#include <iostream>

using namespace std;

int main()
{
    long long n, d;
    cin >> n;
    d = 0;
    if (n==0) d = 1;
    else {
        while (n != 0){
            n = n / 10;
            d = d + 1;
        }
    }
    cout << d;
    return 0;
}
