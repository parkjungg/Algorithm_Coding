#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

bool visited[55][55];
vector<pair<int, int>> removeList;

void forklift(int y, int x, vector<string> &board, char target)
{
    visited[y][x] = true;
    
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) continue;
        if(visited[ny][nx]) continue;
        if(board[ny][nx] == '.')
            forklift(ny, nx, board, target);
        else if(board[ny][nx] == target)
        {
            visited[ny][nx] = true;
            removeList.push_back({ny, nx});
        }       
    }
}

void crane(vector<string> &board, char target)
{
    int h = board.size();
    int w = board[0].size();
    
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(board[i][j] == target)
                board[i][j] = '.';
        }
    }
}
int solution(vector<string> storage, vector<string> requests) {
    int n = storage.size();
    int m = storage[0].size();
    
    vector<string> board(n + 2, string(m + 2, '.'));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            board[i + 1][j + 1] = storage[i][j];
        }
    }
    
    for(string req : requests)
    {
        char target = req[0];
        
        if(req.size() == 1)
        {
            memset(visited, false, sizeof(visited));
            removeList.clear();
            
            forklift(0, 0, board, target);
            
            for(auto p : removeList)
            {
                board[p.first][p.second] = '.';
            }
        }
        else
        {
            crane(board, target);
        }
    }
    
    int answer = 0;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(board[i][j] != '.')
                answer++;
        }
    }
    return answer;
}