#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);

    char letter;
    cin >> letter;

    int wordIndex = 1;
    int flag = -1;
    int spaceFlag = 0;

    for (int i=0; i<txt.length(); i++) {
        if (flag == -1) {
            if (txt[i] == ' ') {
                if (spaceFlag == 0) wordIndex++;
                spaceFlag = 1;
            }
            else {
                spaceFlag = 0;
                if (letter == txt[i]) flag = wordIndex;
            }
        }
    }
    cout << flag;
    return 0;
}
