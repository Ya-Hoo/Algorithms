#include <iostream>
#include <string>

using namespace std;

void rotateString(string &s) {
    char temp = s[0];
    for (int i = 0; i < s.size() - 1; ++i) {
        s[i] = s[i + 1];
    }
    s[s.size() - 1] = temp;
}

int compareStrings(const string &a, const string &b) {
    int count = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            ++count;
        }
    }
    return count;
}

int main() {
    freopen("GEN.inp", "r", stdin);
    freopen("GEN.out", "w", stdout);

    int n;
    cin >> n;

    string A, B;
    cin >> A >> B;

    int maxSimilarity = 0;

    string currentA = A;
    for (int i = 0; i < n; ++i) {
        string currentB = B;
        for (int j = 0; j < n; ++j) {
            int similarity = compareStrings(currentA, currentB);
            if (similarity > maxSimilarity) {
                maxSimilarity = similarity;
            }
            rotateString(currentB);
        }
        rotateString(currentA);
    }

    cout << maxSimilarity << endl;

    return 0;
}
