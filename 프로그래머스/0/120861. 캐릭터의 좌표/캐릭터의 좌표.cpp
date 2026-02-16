#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    
    int maxX = board[0] / 2;
    int maxY = board[1] / 2;
    for(string cmd : keyinput)
    {
        if(cmd == "left")
        {
            if(answer[0] != -maxX)
                answer[0]--;
        }
        else if(cmd == "right")
        {
            if(answer[0] != maxX)
                answer[0]++;
        }
        else if(cmd == "up")
        {
            if(answer[1] != maxY)
                answer[1]++;
        }
        else
        {
            if(answer[1] != -maxY)
                answer[1]--;
        }
    }
    return answer;
}