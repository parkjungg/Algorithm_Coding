#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char c;
    
    int cnt1 = 0, cnt2 = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(cnt1 == 0)
        {
            c = s[i];
        }
        
        if(c == s[i]) cnt1++;
        else cnt2++;
        
        if(cnt1 == cnt2)
        {
            answer++;
            cnt1 = cnt2 = 0;
        }
    }
    if(cnt1 != 0) answer++;
    return answer;
}