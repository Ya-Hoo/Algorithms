#include <iostream>

using namespace std;

int main()
{
    long long n, r;
    cin >> n;
    r = 0;
    while (n!=0){
        r = (r*10) + (n % 10);
        n = n / 10;
    }
    cout << r;
    return 0;
}
