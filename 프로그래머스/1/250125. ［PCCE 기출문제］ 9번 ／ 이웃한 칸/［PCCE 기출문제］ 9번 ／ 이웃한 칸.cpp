#include <string>
#include <vector>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int cnt;
void dfs(int y, int x, int sizeN, string target, vector<vector<string>> board)
{
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= sizeN || nx >= sizeN) continue;
        if(board[ny][nx] == target)
            cnt++;            
    }
    return;
}
int solution(vector<vector<string>> board, int h, int w) {
    int n = board.size();
    
    string s = board[h][w];
    dfs(h, w, n, s, board);
    
    return cnt;
}