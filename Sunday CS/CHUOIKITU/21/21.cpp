#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int pos, len;
    cin >> pos >> len;
    word.erase(pos-1, len);
    cout << word;
    return 0;
}
