#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    string first, last;
    int flag = 0;
    for (int i=0; i<txt.length(); i++) {
        if (flag == 0) {
            if (txt[i] == ' ') flag = 1;
            else first = first + txt[i];
        }
        else {
            last = last + txt[i];
            if (txt[i] == ' ') last = "";
        }
    }
    cout << last;
    for (int i=first.length(); i<txt.length() - last.length(); i++) cout << txt[i];
    cout << first;
    return 0;
}
