#include <iostream>
#include <string>

using namespace std;

string Solve(long long n, long long m)
{
    long long ns, ms;
    int i, j;
    ns = 0;
    ms = 0;
    i = 1;
    j = 1;
    while (i<n){
        if (n%i==0) ns = ns + i;
        i = i + 1;
    }
    while (j<m){
        if (m%j==0) ms = ms + j;
        j = j + 1;
    }
    if (ns==m and ms==n) return "YES";
    else return "NO";
}

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << Solve(n, m);
    return 0;
}
