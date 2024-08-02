#include <iostream>

using namespace std;

void computer()
{
    int a1, a2, a3, b1, b2, b3, comp, aleft, bleft;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    comp = 0;
    if (a1 <= b1) {
        comp += a1;
        b1 -= a1;
        a1 = 0;
    }
    else {
        comp += b1;
        a1 -= b1;
        b1 = 0;
    }

    if (a2 <= b2) {
        comp += a2;
        b2 -= a2;
        a2 = 0;
    }
    else {
        comp += b2;
        a2 -= b2;
        b2 = 0;
    }

    aleft = a1 + a2;
    bleft = b1 + b2;
    if (aleft <= b3) {
        comp += aleft;
        b3 -= aleft;
        aleft = 0;
    }
    else {
        comp += b3;
        aleft -= b3;
        b3 = 0;
    }

    if (bleft <= a3) {
        comp += bleft;
        a3 -= bleft;
        bleft = 0;
    }
    else {
        comp += a3;
        bleft -= a3;
        a3 = 0;
    }

    if (a3 <= b3) comp += a3;
    else comp += b3;
    cout << comp;
}

int main()
{
    freopen("computer.inp", "r", stdin);
    freopen("computer.out", "w", stdout);
    computer();
    return 0;
}
