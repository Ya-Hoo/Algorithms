#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    char common;
    int max = 0;

    for (int i=0; i<word.length(); i++) {
        char findChar = word[i];
        int count = 0;
        for (int j=0; j<word.length(); j++) {
            if (word[i] == findChar) count++;
        }
        if (count > max) {
            max = count;
            common = findChar;
        }
    }
    cout << common;
    return 0;
}
