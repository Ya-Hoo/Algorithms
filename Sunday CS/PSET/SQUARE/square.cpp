#include <iostream>

using namespace std;

int m, n;
bool a[1001][1001];

void input()
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
}

// expand diagonally, stops when hits a 0
int expandDiag(int y, int x)
{
    int originX = x;
    int originY = y;
    int length;
    while (a[y][x]) {
        x++;
        y++;
        length = x-originX;
        // check if all 1
        for (int dy=originY; dy<y; dy++)
            for (int dx=originX; dx<x; dx++)
                if (!a[dy][dx]) return length-1;
    }
    return length;
}

void output()
{
    int length, area, maxArea;
    area = 0;
    maxArea = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]) {
                length = expandDiag(i, j);
                area = length * length;
                if (area>maxArea) maxArea = area;
            }
        }
    }
    cout << maxArea;
}

int main()
{
    freopen("square.inp", "r", stdin);
    freopen("square.out", "w", stdout);

    input();
    output();
    return 0;
}
