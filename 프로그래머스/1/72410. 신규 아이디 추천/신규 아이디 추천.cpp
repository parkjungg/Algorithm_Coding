#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(char c : new_id) {
        answer += tolower(c);
    }   
    string temp = "";
    for(char c : answer) {
        if(isalnum(c) || c == '-' || c == '_' || c == '.') {
            temp += c;
        }
    }
    answer = temp;
    temp = "";
    for(char c : answer) {
        if(c == '.' && !temp.empty() && temp.back() == '.') continue;
        temp += c;
    }
    answer = temp;

    if(!answer.empty() && answer.front() == '.') answer.erase(answer.begin());
    if(!answer.empty() && answer.back() == '.') answer.pop_back();

    if(!answer.size()) answer = "a";
    
    if(answer.size() >= 16)
    {
        answer = answer.substr(0, 15);
        if(answer.back() == '.') answer.pop_back();
    }
    
    while(answer.size() < 3)
    {
        answer += answer.back();
    }
    return answer;
    
}