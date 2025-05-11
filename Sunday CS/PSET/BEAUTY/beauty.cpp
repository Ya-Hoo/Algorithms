#include <iostream>

using namespace std;

void beauty()
{
    long long n, ans, count, len, num, total, num_dup;
    cin >> n;

    count = 0;
    num = 0;
    while (count != n) {
        num++;
        total = 0;
        len = 0;
        num_dup = num;
        while (num_dup != 0) {
            total += num_dup % 10;
            num_dup = num_dup/10;
            len++;
        }
        if (total % len == 0) {
            count++;
            ans = num;
        }
    }
    cout << num;
}

int main()
{
    freopen("beauty.inp", "r", stdin);
    freopen("beauty.out", "w", stdout);
    beauty();
    return 0;
}
