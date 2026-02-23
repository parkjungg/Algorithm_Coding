#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(board[i][j] == 1)
            {
                for(int k = 0; k < 8; k++)
                {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    
                    if(nx >= 0 && ny >= 0 && nx < n && ny < n)
                    {
                        if(board[nx][ny] == 0)
                            board[nx][ny] = 2;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[0].size(); j++)
        {
            if(board[i][j] == 0)
                answer++;
        }
    }
    return answer;
}