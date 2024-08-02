#include <iostream>
#include <string>

using namespace std;

string Solve(long long n)
{
    long long a, b;
    a = n % 10;
    n = n / 10;
    while (n!=0){
        b = n % 10;
        if (b>a) return "NO";
        a = b;
        n = n/10;
    }
    return "YES";
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
