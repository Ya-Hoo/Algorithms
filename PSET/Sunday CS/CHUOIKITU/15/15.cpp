#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt, start;
    getline(cin, txt);
    getline(cin, start);

    int flag = 0;
    string result = "";
    for (int i=0; i<txt.length()-start.length()+1; i++) {
        if (flag == 0) {
            string sample = "";
            for (int j=0; j<start.length(); j++) sample += txt[i+j];
            if (sample == start) {
                flag = 1;
                for (int k=i; k<txt.length(); k++) result += txt[k];
            }
        }
    }
    if (flag == 0) cout << -1;
    else cout << result;
    return 0;
}
