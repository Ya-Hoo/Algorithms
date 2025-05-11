#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int pos = -1;
    for (int i=0; i<s1.length()-s2.length(); i++) {
        if (pos == -1) {
            string sample = "";
            for (int j=0; j<s2.length(); j++) sample = sample + s1[j+i];
            if (sample == s2) pos = i+1;
        }
    }
    cout << pos;
    return 0;
}
