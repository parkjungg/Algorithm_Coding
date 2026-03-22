#include <string>
#include <vector>

using namespace std;

int check(int num)
{
    int cnt = 0;
    for(int i = 1; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            if(i * i == num)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v;
    for(int i = 1; i <= number; i++)
    {
        v.push_back(check(i));
    }
    
    for(int i : v)
    {
        if(i > limit)
            answer += power;
        else
            answer += i;
    }
    return answer;
}