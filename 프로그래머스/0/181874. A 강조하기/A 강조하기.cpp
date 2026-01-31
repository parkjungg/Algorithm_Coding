#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(char &c : myString)
    {
        if(c == 'a') c = toupper(c);
        else if(c == 'A') continue;
        else c = tolower(c);
    }
    return myString;
}