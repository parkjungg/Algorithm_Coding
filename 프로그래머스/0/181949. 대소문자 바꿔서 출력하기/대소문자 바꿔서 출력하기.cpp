#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        char& c = str[i];
        if(isupper(c)) c = tolower(c);
        else c = toupper(c);
    }
    cout << str;
    return 0;
}