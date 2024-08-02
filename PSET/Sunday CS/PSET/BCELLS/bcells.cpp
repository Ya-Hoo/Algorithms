#include <iostream>

using namespace std;

void bcells()
{
    long long n, m, r, c, black;
    cin >> n >> m >> r >> c;
    if (m%2==0) black = (m/2) * n;
    else {
        int first_row;
        if ((r+c)%2==0) {
            first_row = m/2 + 1;
            if (n%2==0) black = (n/2) * (2 * first_row - 1);
            else black = first_row * (n/2 + 1) + (first_row-1) * (n/2);
        }
        else {
            first_row = m/2;
            if (n%2==0) black = (n/2) * (2 * first_row + 1);
            else black = first_row * (n/2 + 1) + (first_row+1) * (n/2);
        }
    }
    cout << black;
}

int main()
{
    freopen("bcells.inp", "r", stdin);
    freopen("bcells.out", "w", stdout);
    bcells();
    return 0;
}
