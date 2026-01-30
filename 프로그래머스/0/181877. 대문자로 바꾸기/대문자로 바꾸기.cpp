#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(auto &c : myString)
    {
        c = toupper(c);
    }
    return myString;
}