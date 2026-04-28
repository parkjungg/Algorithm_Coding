#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    int left = 0;
    int sum = 0;
    int minVal = 1e9;
    
    for(int right = 0; right < sequence.size(); right++)
    {
        sum += sequence[right];
        
        while(sum > k)
        {
            sum -= sequence[left];
            left++;
        }
        
        if(sum == k)
        {
            int len = right - left;
            
            if(len < minVal)
            {
                minVal = len;
                answer = {left, right};
            }
        }
    }
    
    
    return answer;
}