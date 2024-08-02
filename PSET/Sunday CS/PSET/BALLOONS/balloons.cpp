#include <iostream>

using namespace std;

void balloons()
{
    int n, total, maxBalloon, turn;
    cin >> n;
    total = 0;
    turn = 0;
    while (total < n) {
        turn++;
        maxBalloon = (1 + turn) * turn / 2;
        total += maxBalloon;
    }
    cout << turn;
}

int main()
{
    freopen("balloons.inp", "r", stdin);
    freopen("balloons.out", "w", stdout);
    balloons();
    return 0;
}
