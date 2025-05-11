#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
}

void output()
{
    int min = 2000000000;
    int flag = 0;
    for (int i=1; i<=n; i++) {
        int num, new_num;
        num = a[i];
        new_num = 0;
        while (num != 0) {
            new_num *= 10;
            new_num += num % 10;
            num /= 10;
        }
        if ((new_num == a[i]) && (new_num < min)) {
            min = new_num;
            flag = 1;
        }
    }
    if (flag == 0) cout << -1;
    else cout << min;
}

int main()
{
    input();
    output();
    return 0;
}
