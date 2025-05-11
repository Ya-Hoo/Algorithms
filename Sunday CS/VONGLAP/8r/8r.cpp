#include <iostream>
#include <math.h>

using namespace std;

void Solve(long long n)
{
    long long rootn = sqrt(n);
    int i = 2;
    while (i<=rootn+1){
        while (n%i==0){
            cout << i << " ";
            n = n / i;
        }
        i = i + 1;
    }
}

int main()
{
    long long n;
    cin >> n;
    Solve(n);
    return 0;
}
