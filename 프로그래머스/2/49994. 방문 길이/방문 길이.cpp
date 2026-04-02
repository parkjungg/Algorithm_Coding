#include <string>
#include <bits/stdc++.h>
using namespace std;


int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int solution(string dirs) {
    int answer = 0;
    int y = 0, x = 0;
    
    set<string> visited;
    
    for(int i = 0; i < dirs.size(); i++)
    {
        char c = dirs[i];
        int dir = 0;
        
        if(c == 'D') dir = 0;
        else if(c == 'R') dir = 1;
        else if(c == 'U') dir = 2;
        else dir = 3;
        
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        
        if(ny < -5 || ny > 5 || nx < -5 || nx > 5) continue;
        
        string path1 = to_string(y) + "," + to_string(x) + "," + to_string(ny) + "," + to_string(nx);
        string path2 = to_string(ny) + "," + to_string(nx) + "," + to_string(y) + "," + to_string(x);
        
        if(visited.find(path1) == visited.end())
        {
            visited.insert(path1);
            visited.insert(path2);
            answer++;
        }
        y = ny;
        x = nx;
    }
    return answer;
}