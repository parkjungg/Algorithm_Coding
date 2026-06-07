#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.size();

    for(int t = 1; t <= s.size() / 2; t++)
    {
        string temp = s.substr(0, t);
        
        int cnt = 1;
        int len = 0;
        
        for(int i = t; i < s.size(); i += t)
        {
            string cur = s.substr(i, t);
            
            if(temp == cur)
                cnt++;
            else
            {
                if(cnt > 1)
                    len += to_string(cnt).size();
                
                len += temp.size();
                
                temp = cur;
                cnt = 1;
            }
        }
        if(cnt > 1)
            len += to_string(cnt).size();
        
        len += temp.size();
        answer = min(answer, len);
        
    }
    return answer;
}