#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(string tree : skill_trees)
    {
        int idx = 0;
        bool valid = true;
        
        for(char c : tree)
        {
            if(skill.find(c) == string::npos) continue;
            
            if(c == skill[idx])
            {
                idx++;
            }
            else
            {
                valid = false;
                break;
            }
        }
        if(valid) answer++;
    }
    return answer;
}