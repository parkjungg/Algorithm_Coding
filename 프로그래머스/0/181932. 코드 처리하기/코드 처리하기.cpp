#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(int i = 0; i < code.size(); i++)
    {
        if(code[i] != '1' && mode == 0)
        {
            if(i % 2 == 0)
                answer.push_back(code[i]);
        }   
        else if(code[i] == '1')
        {
            if(mode == 0) mode = 1;
            else mode = 0;
        }
        else if(code[i] != '1' && i % 2 == 1 && mode == 1)
        {
            answer.push_back(code[i]);
        }
    }
    
    if(answer.size() == 0)
        answer += ("EMPTY");
    return answer;
}