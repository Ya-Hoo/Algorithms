#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    char del;
    cin >> del;
    for (int i=0; i<txt.length(); i++) {
        if (txt[i] != del) cout << txt[i];
    }
    return 0;
}
