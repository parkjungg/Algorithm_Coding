#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    for(string word : dic)
    {
        if(word.size() != spell.size())
            continue;
        
        bool isValid = true;
        
        for(string s : spell)
        {
            if(word.find(s) == string::npos)
            {
                isValid = false;
            }
        }
        if(isValid)
            return 1;
    }
    return 2;
}