#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int num : array)
    {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '7') answer++;
        }
    }
    return answer;
}