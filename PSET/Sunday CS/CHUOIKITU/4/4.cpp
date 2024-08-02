#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    for (int i=0; i<txt.length(); i++) putchar(tolower(txt[i]));
    return 0;
}
