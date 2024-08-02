#include <iostream>

using namespace std;

int a[1001], n;

void input()
{
    cin >> n;
    for (int i=1; i<= n; i++) cin >> a[i];
}

void output()
{
    int count = 0;
    for (int i=1; i<=n; i++) {
        int num = a[i];
        int sum = 0;
        int digits = 0;
        while (num!=0) {
            if (digits >= 3) sum -= num % 10;
            else sum += num % 10;
            digits+=1;
            num /= 10;
        }
        if ((digits==6) && (sum == 0)) count += 1;
    }
    cout << count;
}

int main()
{
    input();
    output();
    return 0;
}
