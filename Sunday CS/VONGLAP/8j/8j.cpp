#include <iostream>

using namespace std;

int main()
{
    long long n, m, n1;
    cin >> n;
    m = 0;
    n1 = n;
    while (n!=0){
        m = (m*10) + (n % 10);
        n = n / 10;
    }
    cout << m+n1;
    return 0;
}
