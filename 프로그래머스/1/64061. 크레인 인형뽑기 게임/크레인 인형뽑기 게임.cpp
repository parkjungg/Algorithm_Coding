#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> stk;
    
    for(int i = 0; i < moves.size(); i++)
    {
        int cur = moves[i] - 1;
        
        for(int j = 0; j < board.size(); j++)
        {
            if(board[j][cur] == 0)
                continue;
            
            int doll = board[j][cur];
            board[j][cur] = 0;
            
            if(stk.size() && stk.top() == doll)
            {
                stk.pop();
                answer += 2;
            }
            else
            {
                stk.push(doll);
            }
            break;
        }
    }
    return answer;
}