#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string words[] = {"aya", "ye", "woo", "ma"};

    for(string s : babbling)
    {
        int i = 0;
        int prev = -1;
        bool ok = true;
        
        while(i < s.size())
        {
            bool matched = false;
            for(int j = 0; j < 4; j++)
            {
                string word = words[j];
                if(s.substr(i, word.size()) == word)
                {
                    if(prev == j)
                    {
                        ok = false;
                        matched = true;
                        break;
                    }
                    prev = j;
                    i += word.size();
                    matched = true;
                    break;
                }
            }
            if(!matched)
            {
                ok = false;
                break;
            }
            if(!ok) break;                
        }
        if(ok) answer++;
    }
    return answer;
}