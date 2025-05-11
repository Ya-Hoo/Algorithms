#include <iostream>

using namespace std;

long long n;
bool A[10000001];

void input()
{
    cin >> n;
}

void taosangnt()
{
    int i, j;
    for (i=1; i<=10000000; i++) A[i] = true;
    A[1] = false;
    for (i=2; i<=10000000; i++) {
        if (A[i] == true) {
            for (j=i; j<=10000000/i; j++) A[i*j] = false;
        }
    }
}

void output()
{
    long long dem=0, i=3, j=i, p_prev, p_i, p_next, sum;
    p_prev = 2;
    p_i = 3;
    while (dem < n) {
        for (j=i+1; j<=10000000; j++) {
            if (A[j] == true) {
                p_next = j;
                i = j;
                break;
            }
        }

        sum = p_prev + p_next;
        if ((sum % p_i == 0) && (sum/2 == p_i)) dem++;
        p_prev = p_i;
        p_i = p_next;
    }
    cout << p_prev;
}

int main()
{
    freopen("prime3.inp", "r", stdin);
    freopen("prime3.out", "w", stdout);
    input();
    taosangnt();
    output();
    return 0;
}
