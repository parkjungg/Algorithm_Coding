#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r; i++)
    {
        string s = to_string(i);
        bool isValid = true;
        
        for(char c : s)
        {
            if(c != '0' && c != '5')
            {
                isValid = false;
                break;
            }
        }
        
        if(isValid)
            answer.push_back(i);
            
    }
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}