#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    x = 0;
    while (x <= n){
        y = n - 2*x;
        if (y >= 0) cout << x << " " << y << endl;
        x = x + 1;
    }
    return 0;
}
