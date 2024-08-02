#include <stdlib.h>
#include <math.h>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

string convert[9] = {"a", "b", "cc", "bbc", "cbc", "abc", "bac", "aac", "cac"};
string digits[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

ifstream cin("decode.INP");
ofstream cout("decode.OUT");

void decode()
{
    string code, word, ans;
    cin >> code;

    int len = code.length();
    for (int i=1; i<=len; i++) {
        word = code[len-i] + word;
        for (int j=0; j<9; j++) {
            if (convert[j] == word) {
                word = "";
                ans = digits[j] + ans;
            }
        }
    }
    if (word == "") cout << ans;
    else cout << -1;
}

int main()
{
    decode();
    return 0;
}
