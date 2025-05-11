#include <iostream>

using namespace std;

int A, B;
bool prime[100001];

void sieve() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 100001; i++) {
        prime[i] = 1;
    }

    for (int i = 2; i * i < 100001; i++) {
        if (prime[i]) {
            for (int j = i * i; j < 100001; j += i) {
                prime[j] = 0;
            }
        }
    }
}

bool is_palindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

void solve()
{
    sieve();
    cin >> A >> B;
    int count = 0;
    for (int num = A; num <= B; num++) {
        if (prime[num] && is_palindrome(num)) {
            count++;
        }
    }
    cout << count;
}

int main()
{
    freopen("auction.inp", "r", stdin);
    freopen("auction.out", "w", stdout);
    solve();
    return 0;
}
