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
    if (m==n1) cout << "YES";
    else cout << "NO";
    return 0;
}
