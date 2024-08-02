#include <iostream>

using namespace std;

long long n, a[1000000], b[1000000];

long long sumDigit(long long x)
{
    long long sum=0;
    while (x>0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void input()
{
    long long i;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
        b[i] = sumDigit(a[i]);
    }
}

int lengthDigit(long long x)
{
    int length=0;
    while (x>0) {
        length++;
        x /= 10;
    }
    return length;
}

void output()
{
    long long i, j, minDiff, first, second, diff, password=1;
    minDiff = 1000000000;
    for (i=0; i<n-1; i++) {
        first = a[i];
        for (j=i+1; j<n; j++) {
            second = a[j];
            diff = abs(b[i]-b[j]);
            if ((diff != 0) && (diff < minDiff)) {
                password = first;
                for (int k=0; k<lengthDigit(second); k++) password *= 10;
                password += second;
                minDiff = diff;
            }
        }
    }
    cout << password;
}

int main()
{
    freopen("password.inp", "r", stdin);
    freopen("password.out", "w", stdout);
    input();
    output();
    return 0;
}
