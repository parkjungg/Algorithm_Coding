#include <string>
#include <vector>

using namespace std;
// 빵 - 야채 - 고기 - 빵 -> 1-2-3-1 스택?
int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v;
    
    for(int x : ingredient)
    {
        v.push_back(x);
        
        if(v.size() >= 4)
        {
            int n = v.size();
            if(v[n - 1] == 1 && v[n - 2] == 3 && v[n - 3] == 2 && v[n- 4] == 1)
            {
                for(int i = 0; i < 4; i++)
                    v.pop_back();
                
                answer++;
            }
        }
    }
    return answer;
}