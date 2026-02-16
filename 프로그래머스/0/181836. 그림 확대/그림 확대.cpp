#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i = 0; i < picture.size(); i++)
    {
        string arr = "";
        for(int j = 0; j < picture[0].size(); j++)
        {
            for(int r = 0; r < k; r++)
            {
                arr += picture[i][j];
            }
        }
        for(int r = 0; r < k; r++)
        {
            answer.push_back(arr);
        }
    }
    return answer;
}