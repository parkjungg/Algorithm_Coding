#include <string>
#include <vector>

using namespace std;

int sy, sx;

vector<int> solution(vector<string> park, vector<string> routes) {
    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[0].size(); j++)
        {
            if(park[i][j] == 'S')
            {
                sy = i;
                sx = j;
            }
        }
    }
    
    for(string route : routes)
    {
        string dir = route.substr(0, 1);
        int cnt = stoi(route.substr(2));
        
        int ny = sy;
        int nx = sx;
        
        bool check = true;
        
        for(int i = 0; i < cnt; i++)
        {
            if(dir == "N") ny--;
            else if(dir == "S") ny++;
            else if(dir == "W") nx--;
            else nx++;
            
            if(ny < 0 || nx < 0 || ny >= park.size() || nx >= park[0].size())
            {
                check = false;
                break;
            }
            if(park[ny][nx] == 'X')
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            sy = ny;
            sx = nx;
        }   
    }
    return {sy, sx};
}