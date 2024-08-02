#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<setprecision(2)<<fixed;
    cout << sqrt(a) + sqrt(b) << endl;
    cout << sqrt(a) - sqrt(b) << endl;
    return 0;
}
