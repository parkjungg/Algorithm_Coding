#include <vector>
#include <iostream>
using namespace std;

int answer;
bool check(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    
    for(int i = 3; i * i <= n; i+=2)
    {
        if(n % i == 0) return 0; 
    }
    return 1;
}

void combi(int start, vector<int> v, vector<int> nums)
{
    if(v.size() == 3)
    {
        int sum = 0;
        for(int i : v)
        {
            sum += i;
        }
        if(check(sum)) answer++;
        return;
    }
    
    for(int i = start + 1; i < nums.size(); i++)
    {
        v.push_back(nums[i]);
        combi(i, v, nums);
        v.pop_back();        
    }
}
int solution(vector<int> nums) {
    vector<int> v;
    combi(-1, v, nums);
    return answer;
}