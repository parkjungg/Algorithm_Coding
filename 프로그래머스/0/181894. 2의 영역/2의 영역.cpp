#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> idx;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            idx.push_back(i);
        }
    }
    if(idx.size() != 0)
    {
        for(int i = idx[0]; i <= idx[idx.size() - 1]; i++)
        {
            answer.push_back(arr[i]);
        }
    }
    
    else if(idx.size() == 0) answer.push_back(-1);
    return answer;
}