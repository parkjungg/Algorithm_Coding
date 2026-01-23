#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(char &c : my_string)
    {
        if(islower(c)) c = toupper(c);
        else c = tolower(c);
    }
    return my_string;
}