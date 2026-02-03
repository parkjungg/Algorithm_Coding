#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int len = num_list.size() / n;
    vector<vector<int>> answer(len, vector<int>(n));
    int idx = 0;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < n; j++)
        {
            answer[i][j] = num_list[idx];
            idx++;
        }
    }
    return answer;
}