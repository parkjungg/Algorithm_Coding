#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> cntX(10, 0), cntY(10, 0);
    
    for(char c : X) cntX[c - '0']++;
    for(char c : Y) cntY[c - '0']++;
    
    string answer = "";
    
    for(int i = 9; i >= 0; i--)
    {
        int cnt = min(cntX[i], cntY[i]);
        
        for(int j = 0; j < cnt; j++)
        {
            answer += (i + '0');
        }
    }
    if(answer == "") return "-1";
    if(answer[0] == '0') return "0";
    return answer;
}