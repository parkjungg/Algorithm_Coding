#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
bool check(int y, int x, int size, vector<vector<string>> &park)
{
    for(int i = y; i < y + size; i++)
    {
        for(int j = x; j < x + size; j++)
        {
            if(park[i][j] != "-1")
                return false;
        }
    }
    return true;
}
int solution(vector<int> mats, vector<vector<string>> park) {
    
    int h = park.size();
    int w = park[0].size();
    
    sort(mats.begin(), mats.end(), greater<int>());
    
    for(int size : mats)
    {
        for(int y = 0; y <= h - size; y++)
        {
            for(int x = 0; x <= w - size; x++)
            {
                if(check(y, x, size, park))
                    return size;
            }
        }
    }
    return -1;
}