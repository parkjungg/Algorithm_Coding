#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int board[102][102];

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
        
    int num = 1;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            board[i][j] = num++;
        }
    }
    
    for(auto q : queries)
    {
        int y1 = q[0] - 1;
        int x1 = q[1] - 1;
        int y2 = q[2] - 1;
        int x2 = q[3] - 1;
        
        int temp = board[y1][x1];
        int mn = temp;
        
        for(int i = y1; i < y2; i++)
        {
            board[i][x1] = board[i + 1][x1];
            mn = min(mn, board[i][x1]);
        }
        
        for(int i = x1; i < x2; i++)
        {
            board[y2][i] = board[y2][i + 1];
            mn = min(mn, board[y2][i]);
        }
        
        for(int i = y2; i > y1; i--)
        {
            board[i][x2] = board[i - 1][x2];
            mn = min(mn, board[i][x2]);
        }
        
        for(int i = x2; i > x1 + 1; i--)
        {
            board[y1][i] = board[y1][i - 1];
            mn = min(mn, board[y1][i]);
        }
        
        board[y1][x1 + 1] = temp;
        mn = min(mn, temp);
        
        answer.push_back(mn);
    }
    return answer;
}