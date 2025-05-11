#include <iostream>

using namespace std;

void alarm()
{
    int n;
    cin >> n;
    int segments[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int h, m, hh, mm, flag;
    flag = 0;
    for (int i=0; i<24*60; i++) {
        if (flag == 0) {
            int totalSegment = 0;
            hh = i % 60; h = hh;
            mm = i / 60; m = mm;
            for (int j=0; j<2; j++) {
                totalSegment = totalSegment + segments[m%10];
                m = m / 10;
            }
            for (int j=0; j<2; j++) {
                totalSegment = totalSegment + segments[h%10];
                h = h / 10;
            }
            if (totalSegment == n) {
                flag = 1;
                if (hh < 10) cout << "0" << hh;
                else cout << hh;

                cout << ":";

                if (mm<10) cout << "0" << mm;
                else cout << mm;
            }
        }
    }
    if (flag == 0) cout << "Impossible";
}

int main()
{
    freopen("alarm.inp", "r", stdin);
    freopen("alarm.out", "w", stdout);
    alarm();
    return 0;
}
