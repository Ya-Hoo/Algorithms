#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string Solve(long long n)
{
    int i;
    long long rootn;
    rootn = sqrt(n);
    i = 2;
    while (i <= rootn) {
        if (n % i == 0) {
            return "NO";
        }
        i = i + 1;
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
