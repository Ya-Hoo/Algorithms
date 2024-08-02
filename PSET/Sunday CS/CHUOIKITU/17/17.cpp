#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt, numbers;
    string numChar = "0123456789";
    int found = 0;
    getline(cin, txt);
    for (int i=0; i<txt.length(); i++) {
        int flag = 0;
        for (int j=0; j<10; j++) {
            if (txt[i] == numChar[j]) flag = 1;
        }
        if (flag) {
            numbers += txt[i];
            found = 1;
        }
    }
    if (found) cout << numbers;
    else cout << -1;
    return 0;
}
