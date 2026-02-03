#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int p = i; p <= j; p++)
    {
        string s = to_string(p);
        int len = s.size();
        for(int r = 0; r < len; r++)
        {
            if(s[r] == k + '0') answer++;
        }
    }
    return answer;
}