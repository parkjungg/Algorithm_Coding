#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> average;
    for(int i = 0; i < score.size(); i++)
    {
        int avg = (score[i][0] + score[i][1]);
        average.push_back(avg);
    }
    
    for(int i = 0; i < average.size(); i++)
    {
        int rank = 1;
        for(int j = 0; j < average.size(); j++)
        {
            if(average[j] > average[i])
                rank++;
        }
        answer.push_back(rank);
    }
    return answer;
}