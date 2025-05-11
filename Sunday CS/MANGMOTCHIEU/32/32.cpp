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
    int count = 0;
    for (int i=1; i<=n; i++) {
        int num = a[i];
        int new_num = 0;
        while (num != 0) {
            new_num *= 10;
            new_num = new_num + num % 10;
            num = num / 10;
        }
        if (new_num == a[i]) count += 1;
    }
    cout << count;
}

int main()
{
    input();
    output();
    return 0;
}
