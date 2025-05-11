#include <iostream>
#include <string>

using namespace std;

int convertCharToDigit(char c) {
    if (c == '0') return 0;
    if (c == '1') return 1;
    if (c == '2') return 2;
    if (c == '3') return 3;
    if (c == '4') return 4;
    if (c == '5') return 5;
    if (c == '6') return 6;
    if (c == '7') return 7;
    if (c == '8') return 8;
    if (c == '9') return 9;
    return -1;
}

int modString(string num, int mod) {
    int result = 0;
    for (int i = 0; i < num.length(); ++i) {
        result = (result * 10 + convertCharToDigit(num[i])) % mod;
    }
    return result;
}

int main() {
    freopen("TRANSTR.INP", "r", stdin);
    freopen("TRANSTR.OUT", "w", stdout);

    string N_str, S;
    cin >> N_str >> S;

    int len = S.length();
    int N = modString(N_str, len);

    string result = S;
    for (int i = 0; i < len; ++i) {
        result[i] = S[(i + N) % len];
    }

    cout << result;

    return 0;
}
