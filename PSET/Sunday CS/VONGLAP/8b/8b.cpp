#include <iostream>

using namespace std;

int main()
{
    long long n, d;
    cin >> n;
    d = 0;
    while (n != 0){
        if (n%10!=0){
            d = d + 1;
        }
        n = n / 10;
    }
    cout << d;
    return 0;
}
