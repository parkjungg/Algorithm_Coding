#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int minRow = 1e9, minCol = 1e9;
    int maxRow = 0, maxCol = 0;
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[0].size(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                minRow = min(minRow, i);
                minCol = min(minCol, j);
                maxRow = max(maxRow, i);
                maxCol = max(maxCol, j);
            }
        }
    }
    return {minRow, minCol, maxRow + 1, maxCol + 1};
}