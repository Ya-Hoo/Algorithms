#include <iostream>

using namespace std;

int main()
{
    long long n, s, a, b;
    cin >> n;
    s = 0;
    a = n % 10;
    n = n / 10;
    while (n != 0){
        b = n % 10;
        n = n / 10;
        s = s + abs(a-b);
        a = b;
    }
    cout << s;
    return 0;
}
