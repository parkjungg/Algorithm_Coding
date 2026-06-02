#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long k) {
    vector<int> answer;
    vector<int> nums;
    
    long long fact = 1;
    
    for(int i = 1; i <= n; i++)
    {
        nums.push_back(i);
        if(i < n)
        {
            fact *= i;
        }
    }
    
    k--;
    
    while(n > 0)
    {
        int idx = k / fact;
        
        answer.push_back(nums[idx]);
        nums.erase(nums.begin() + idx);
        
        k %= fact;
        
        n--;
        
        if(n > 0)
            fact /= n;
    }
    return answer;
}