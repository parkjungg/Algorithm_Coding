#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    
    for(int i = 0; i <= t.size() - len; i++)
    {
        if(stoll(t.substr(i, len)) <= stoll(p))
            answer++;
    }
    
    return answer;
}