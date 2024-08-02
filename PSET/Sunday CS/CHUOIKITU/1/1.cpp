#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    int NumSpace = 0;
    for (int i=0; i < txt.length(); i++) {
        if (txt[i]== ' ') NumSpace++;
    }
    cout << NumSpace;
    return 0;
}
