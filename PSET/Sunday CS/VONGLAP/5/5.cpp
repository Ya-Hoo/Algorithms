#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, x;
    double s;
    cin >> n;
    x = 0;
    s = 0;
    while (s<n){
        x = x + 1;
        s = s + sqrt(x);
    }
    cout << x;
    return 0;
}
