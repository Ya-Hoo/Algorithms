#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    for (int i=0; i<txt.length(); i++) {
        if (txt[i] != ' ') cout << txt[i];
    }
    return 0;
}
