#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    char uniqueChar[len];
    int occurence[len];
    int totalUnique = 0;
    for (int i=0; i<len; i++) {
        char letter = str[i];
        int flag = -1;
        for (int j=0; j<len; j++) {
            if (uniqueChar[j] == letter) flag = j;
        }

        if (flag != -1) occurence[flag] = occurence[flag] + 1;
        else {
            uniqueChar[totalUnique] = str[i];
            occurence[totalUnique] = 1;
            totalUnique++;
        }
    }

    for (int i=0; i<totalUnique; i++) {
        cout << uniqueChar[i] << " " << occurence[i] << endl;
    }
    return 0;
}
