#include <iostream>

using namespace std;

int Solve(long long n)
{
    int Max = 0;
    int dem = 0;
    while (n>0){
        int a = n % 10;
        if (a!=0) dem = dem + 1;
        else dem = 0;
        if (dem > Max) Max = dem;
        n = n /10;
    }
    return Max;
}

int main()
{
    long long n;
    cin >> n;
    cout << Solve(n);
    return 0;
}
