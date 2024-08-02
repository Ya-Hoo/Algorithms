#include <iostream>

using namespace std;

int Solve(long long n)
{
    int a, max;
    max = -1;
    while(n!=0){
        a = n % 10;
        if (a%2 == 0) {
            if (a>max) max = a;
        }
        n = n / 10;
    }
    return max;
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
