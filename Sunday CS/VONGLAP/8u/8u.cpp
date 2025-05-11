#include <iostream>
#include <string>

using namespace std;

string Solve(long long n)
{
    long long i, s;
    i = 1;
    s = 0;
    while (n!=0){
        int a = n % 10;
        if (i>3) s = s - a;
        else s = s + a;
        i = i + 1;
        n = n/10;
    }
    if (s == 0) return "YES";
    else return "NO";
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
