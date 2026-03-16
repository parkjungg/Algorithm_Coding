#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(char &c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + n) % 26 + 'a';
        }
        else if(c >= 'A' && c <= 'Z')
            c = (c - 'A' + n) % 26 + 'A';
    }
        
    return s;
}