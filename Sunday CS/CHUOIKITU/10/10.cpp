#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    int count = 0;
    char letter;
    cin >> letter;
    for (int i=0; i<txt.length(); i++) {
        if (txt[i]==letter) count++;
    }
    cout << count;
    return 0;
}
