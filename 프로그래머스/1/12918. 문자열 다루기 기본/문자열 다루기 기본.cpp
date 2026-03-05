#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(char c : s)
    {
        if(!isdigit(c))
            answer = false;
    }
    if(s.size() != 6 && s.size() != 4)
        answer = false;
    
    return answer;
}