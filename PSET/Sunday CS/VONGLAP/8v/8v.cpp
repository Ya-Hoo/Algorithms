#include <iostream>

using namespace std;

int Solve(long long n)
{
    long long a, b;
    while (n%10==0){
        n = n/10;
    }
    int count = 1;
    a = n % 10;
    n = n / 10;
    while (n!=0){
        b = n % 10;
        if ((a!=0) && (b == 0)) count = count + 1;
        a = b;
        n = n / 10;
    }
    return count;
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
