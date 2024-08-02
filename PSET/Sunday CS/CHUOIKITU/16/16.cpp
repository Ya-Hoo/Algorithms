#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    int result = 1;
    for (int i=0; i<txt.length()/2; i++) {
        if (txt[i] != txt[txt.length()-i-1]) result = 0;
    }
    if (result) cout << "yes";
    else cout << "no";
    return 0;
}
