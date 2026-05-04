#include <string>
#include <vector>

using namespace std;

int dy[] = {1, 0, -1};
int dx[] = {0, 1, -1};

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> board(n, vector<int>(n, 0));
    
    int y = 0, x = 0;
    int dir = 0;
    int num = 1;
    
    int total = n * (n + 1) / 2;
    
    for(int i = 0; i < total; i++)
    {
        board[y][x] = num++;
        
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        
        if(ny < 0 || nx < 0 || ny >= n || nx >= n || board[ny][nx] != 0)
        {
            dir = (dir + 1) % 3;
            ny = y + dy[dir];
            nx = x + dx[dir];
        }
        y = ny;
        x = nx;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            answer.push_back(board[i][j]);
        }
    }
    return answer;
}