#include <iostream>
#include <string>

using namespace std;

string revWord(string word) {
    string rev;
    for (int i=1; i<=word.length(); i++) {
        rev = rev + word[word.length() - i];
    }
    return rev;
}

int main()
{
    string txt, rev_txt, result;
    getline(cin, txt);
    int length = txt.length();

    for (int i=1; i<=length; i++) {
        rev_txt = rev_txt + txt[length - i];
    }

    int flag = 0;
    string word = "";
    for (int i=0; i<length; i++) {
        if (rev_txt[i] == ' ') flag = 1;
        else flag = 0;

        if (flag == 0) word = word + rev_txt[i];
        if (flag or i == length-1) {
            result = result + revWord(word) + ' ';
            word = "";
        }
    }
    cout << result;
    return 0;
}
