#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long n, a[81], b[81];
int counter;
bool c[81];

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
    long long i, inp;
    cin >> n;
    counter = 0;
    for (i=0; i<n; i++) {
        cin >> inp;
        int sumD = sumDigit(inp);
        if (c[sumD] == 0) {
            a[counter] = inp;
            b[counter] = sumD;
            c[sumD] = 1;
            counter++;
            if (counter==81) break;
        }
    }
}

void output()
{
    long long firstNum, secondNum;
    int minDiff, diff;
    minDiff = 81;

    for (int i=0; i<counter; i++) {
        for (int j=i+1; j<counter; j++) {
            diff = abs(b[i] - b[j]);
            if (diff<minDiff) {
                minDiff = diff;
                firstNum = a[i];
                secondNum = a[j];
            }
        }
        if (minDiff==1) break;
    }
    cout << firstNum << secondNum;

}


int main()
{
    freopen("password.inp", "r", stdin);
    freopen("password.out", "w", stdout);
    input();
    output();
    return 0;
}
