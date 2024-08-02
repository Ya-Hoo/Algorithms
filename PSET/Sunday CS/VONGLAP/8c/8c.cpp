#include <iostream>

using namespace std;

int main()
{
    long long n, s;
    cin >> n;
    s = 0;
    while (n != 0){
        if (n%2==0){
            s = s + (n%10);
        }
        n = n / 10;
    }
    cout << s;
    return 0;
}
