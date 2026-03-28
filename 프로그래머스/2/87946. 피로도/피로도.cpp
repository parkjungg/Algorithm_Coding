#include <string>
#include <vector>

using namespace std;

int answer = 0;
bool visited[9];

void dfs(int cur, int cnt, vector<vector<int>> &dungeons)
{
    answer = max(answer, cnt);
    
    for(int i = 0; i < dungeons.size(); i++)
    {
        if(!visited[i] && cur >= dungeons[i][0])
        {
            visited[i] = true;
            dfs(cur - dungeons[i][1], cnt + 1, dungeons);
            visited[i] = false;
        }
    }
}
int solution(int k, vector<vector<int>> dungeons) {
    dfs(k, 0, dungeons);
    return answer;
}