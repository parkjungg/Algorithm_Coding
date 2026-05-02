#include <string>
#include <vector>

using namespace std;

pair<int, int> pos[10] = {
    {3, 1},
    {0, 0}, {0, 1}, {0, 2},
    {1, 0}, {1, 1}, {1, 2},
    {2, 0}, {2, 1}, {2, 2}    
};

int calc(pair<int, int> a, pair<int, int> b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    pair<int, int> left = {3, 0};
    pair<int, int> right = {3, 2};
    
    for(int n : numbers)
    {
        if(n == 1 || n == 4 || n == 7)
        {
            answer += 'L';
            left = pos[n];
        }
        else if(n == 3 || n == 6 || n == 9)
        {
            answer += 'R';
            right = pos[n];
        }
        else
        {
            int l = calc(left, pos[n]);
            int r = calc(right, pos[n]);
            
            if(l < r)
            {
                answer += 'L';
                left = pos[n];
            }
            else if(r < l)
            {
                answer += 'R';
                right = pos[n];
            }
            else
            {
                if(hand == "left")
                {
                    answer += 'L';
                    left = pos[n];
                }
                else
                {
                    answer += 'R';
                    right = pos[n];
                }
            }
        }
    }
    return answer;
}