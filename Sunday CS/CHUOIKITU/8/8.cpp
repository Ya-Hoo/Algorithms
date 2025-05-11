#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    for (int i=1; i<=txt.length(); i++) cout << txt[txt.length() - i];
    return 0;
}
