#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    
    while(true)
    {
        vector<vector<bool>> erase(m, vector<bool>(n, false));
        
        for(int i = 0; i < m - 1; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                char c = board[i][j];
                
                if(c == '0')
                    continue;
                
                if(c == board[i + 1][j] && c == board[i][j + 1] &&
                  c == board[i + 1][j + 1])
                {
                    erase[i][j] = true;
                    erase[i + 1][j] = true;
                    erase[i][j + 1] = true;
                    erase[i + 1][j + 1] = true;
                }
            }
        }
        
        int cnt = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(erase[i][j])
                {
                    board[i][j] = '0';
                    cnt++;
                }
            }
        }
        
        if(cnt == 0)
            break;
        
        answer += cnt;
        
        for(int j = 0; j < n; j++)
        {
            string temp = "";
            
            for(int i = m - 1; i >= 0; i--)
            {
                if(board[i][j] != '0')
                    temp += board[i][j];
            }
            
            int idx = m - 1;
            
            for(char c : temp)
            {
                board[idx][j] = c;
                idx--;
            }
            
            while(idx >= 0)
            {
                board[idx][j] = '0';
                idx--;
            }
        }
    }
    return answer;
}