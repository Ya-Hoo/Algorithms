#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    int flag = 1;

    for (int i=0; i<txt.length(); i++) {
        if (flag == 1) putchar(toupper(txt[i]));
        else putchar(tolower(txt[i]));

        if (txt[i] == ' ') flag = 1;
        else flag = 0;
    }
    return 0;
}
