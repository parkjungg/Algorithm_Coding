#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row = arr.size();
    int col = arr[0].size();
    
    if(row == col) return arr;
    
    if(row > col)
    {
        int diff = row - col;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < diff; j++)
            {
                arr[i].push_back(0);
            }
        }
    }
    else
    {
        int diff = col - row;
        for(int i = 0; i < diff; i++)
        {
            vector<int> newRow(col, 0);
            arr.push_back(newRow);
        }
    }
    return arr;
}