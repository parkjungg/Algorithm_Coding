#include <string>
#include <vector>

using namespace std;

vector<int> answer = {0, 0};

void quard(int y, int x, int size, vector<vector<int>> &arr)
{
    int temp = arr[y][x];
    for(int i = y; i < y + size; i++)
    {
        for(int j = x; j < x + size; j++)
        {
            if(temp != arr[i][j])
            {
                quard(y, x, size / 2, arr);
                quard(y, x + size / 2, size / 2, arr);
                quard(y + size / 2, x, size / 2, arr);
                quard(y + size / 2, x + size / 2, size / 2, arr);
                return;
            }
        }
    }
    answer[temp]++;
}
vector<int> solution(vector<vector<int>> arr) {
    quard(0, 0, arr.size(), arr);
    return answer;
}