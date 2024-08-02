#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt, lname_rev, name, lname;
    getline(cin, txt);
    int flag = 1;
    for (int i=1; i<=txt.length(); i++) {
        if (flag == 1) {
            if (txt[txt.length() - i] == ' ') flag = 0;
            else name = name + txt[txt.length() - i];
        }
        else {
            lname_rev = lname_rev + txt[txt.length() - i];
        }
    }

    for (int i=1; i<=lname_rev.length(); i++) {
        lname = lname + lname_rev[lname_rev.length() - i];
    }
    cout << lname << endl << name;
    return 0;
}
