#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for(int i = 0; i < schedules.size(); i++)
    {
        int h = schedules[i] / 100;
        int m = schedules[i] % 100;
        
        m += 10;
        
        if(m >= 60)
        {
            h++;
            m -= 60;
        }
        
        int limit = h * 100 + m;
        bool isOK = true;
        
        for(int day = 0; day < 7; day++)
        {
            int today = (startday + day - 1) % 7 + 1;
            
            if(today == 6 || today == 7) continue;
            
            if(timelogs[i][day] > limit)
            {
                isOK = false;
                break;
            }
        }
        if(isOK) answer++;
    }
    return answer;
}