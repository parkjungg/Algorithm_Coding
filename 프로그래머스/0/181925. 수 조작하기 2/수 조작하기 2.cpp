#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int temp = numLog[0];
    for(int i = 1; i < numLog.size(); i++)
    {
        if(temp + 1 == numLog[i]) answer.push_back('w');
        else if(temp - 1 == numLog[i]) answer.push_back('s');
        else if(temp + 10 == numLog[i]) answer.push_back('d');
        else answer.push_back('a');
        temp = numLog[i];
    }
    return answer;
}