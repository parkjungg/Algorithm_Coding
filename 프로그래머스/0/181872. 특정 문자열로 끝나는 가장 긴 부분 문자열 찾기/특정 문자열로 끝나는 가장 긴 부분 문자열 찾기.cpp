#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    int idx = 0;
    int start = 0;
    while((start = myString.find(pat, start)) != string::npos)
    {
        idx = start;
        start++;
    }
    return myString.substr(0, idx + pat.size());
}