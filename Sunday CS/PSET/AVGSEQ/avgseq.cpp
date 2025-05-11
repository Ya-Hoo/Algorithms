#include <iostream>

using namespace std;

int n, b[101];

void input()
{
    cin >> n;
    for (int i=0; i<n; i++) cin >> b[i];
}

void avgseq()
{
    int prev = 0;
    for (int i=0; i<n; i++) {
        int num = b[i] * (i+1);
        cout << num - prev << " ";
        prev = num;
    }
}

int main()
{
    freopen("avgseq.inp", "r", stdin);
    freopen("avgseq.out", "w", stdout);
    input();
    avgseq();
    return 0;
}
