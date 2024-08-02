#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    int swapcase = 1;
    for (int i=0; i<txt.length(); i++) {
        char letter = txt[i];
        if (letter == ' ') swapcase = 1;
        else if (swapcase == 1) {
            letter = toupper(letter);
            swapcase = 0;
        }
        cout << letter;
    }
    return 0;
}
