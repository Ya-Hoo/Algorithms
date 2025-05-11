#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullname, name;
    getline(cin, name);
    getline(cin, fullname);

    int found = 0;
    for (int i=0; i<fullname.length()-name.length()+1; i++) {
        if (found == 0) {
            string sample = "";
            for (int j=0; j<name.length(); j++) sample = sample + fullname[i+j];
            if (sample == name) found = 1;
        }
    }
    if (found == 1) cout << "yes";
    else cout << "no";
    return 0;
}
