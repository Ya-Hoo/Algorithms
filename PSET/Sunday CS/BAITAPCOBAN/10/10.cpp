#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, a, d, s;
    cin >> n >> a >> d;
    s = n*a+d*n*(n-1)/2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
    return 0;
}
