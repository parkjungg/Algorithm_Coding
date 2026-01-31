#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    int i = 0;
    for(bool b : finished)
    {
        if(!b)
        {
            answer.push_back(todo_list[i]);
        }
        i++;
    }
    return answer;
}