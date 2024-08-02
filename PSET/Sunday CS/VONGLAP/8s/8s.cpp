#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string Solve(long long n)
{
    long long s = 0;
    int i = 1;
    while (i<n){
        if (n%i==0) s = s + i;
        i = i + 1;
    }
    if (s == n) return "YES";
    else return "NO";
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
