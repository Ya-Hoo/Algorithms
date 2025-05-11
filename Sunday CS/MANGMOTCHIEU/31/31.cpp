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
    int flag = 0;
    for (int i=1; i<=n; i++){
        int num1 = a[i];
        int fact_total1 = 0;
        for (int j=1; j<=num1; j++){
            if (num1 % j == 0) fact_total1 += j;
        }
        for (int j=i+1; j<=n; j++) {
            int num2 = a[j];
            if (num2 != num1) {
                int fact_total2 = 0;
                for (int k=1; k<=num2; k++) {
                    if (num2 % k == 0) fact_total2 += k;
                }
                if (fact_total1 == fact_total2) {
                    cout << num1 << " " << num2 << endl;
                    flag = 1;
                }
            }
        }
    }
    if (flag == 0) cout << -1;
}

int main()
{
    input();
    output();
    return 0;
}
