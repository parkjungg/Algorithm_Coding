#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++)
    {
        int start = queries[i][0];
        int end = queries[i][1];
        int obj = queries[i][2];
        
        int minVal = 1000000;
        for(int j = start; j <= end; j++)
        {
            if(arr[j] > obj && arr[j] < minVal)
            {
                minVal = arr[j];
            }
        }
        if(minVal == 1000000)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(minVal);
        }
    }
    return answer;
}