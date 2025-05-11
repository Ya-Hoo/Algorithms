#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, strInsert;
    int pos;
    cin >> str >> strInsert;
    cin >> pos;
    str.insert(pos-1, strInsert);
    cout << str;
    return 0;
}
