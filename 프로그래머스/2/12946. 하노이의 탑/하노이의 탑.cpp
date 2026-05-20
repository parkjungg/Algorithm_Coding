#include <string>
#include <vector>

using namespace std;

vector<vector<int>> answer;

void go(int n, int from, int via, int to)
{
    if(n == 1)
    {
        answer.push_back({from, to});
        return;
    }
    
    go(n - 1, from, to, via);
    
    answer.push_back({from, to});
    
    go(n - 1, via, from, to);
}

vector<vector<int>> solution(int n) {
    
    go(n, 1, 2, 3);
    return answer;
}