#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, toErase;
    cin >> word >> toErase;
    int pos = word.find(toErase);
    word.erase(pos, toErase.length());
    cout << word;
    return 0;
}
