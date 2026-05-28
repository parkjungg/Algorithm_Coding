#include <string>
#include <vector>

using namespace std;

int toSec(string time)
{
    int m = stoi(time.substr(0, 2));
    int s = stoi(time.substr(3, 2));
    
    return m * 60 + s;
}
string toString(int time)
{
    int m = time / 60;
    int s = time % 60;
    
    string mm = (m < 10 ? "0" : "") + to_string(m);
    string ss = (s < 10 ? "0" : "") + to_string(s);
    
    return mm + ":" + ss;
}
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    int video = toSec(video_len);
    int cur = toSec(pos);
    
    int opS = toSec(op_start);
    int opE = toSec(op_end);
    
    for(string cmd : commands)
    {
        if(opS <= cur && cur <= opE)
            cur = opE;
        
        if(cmd == "next")
        {
            cur += 10;
            if(cur > video)
                cur = video;
        }
        else
        {
            cur -= 10;
            if(cur < 0)
                cur = 0;
        }
        
        if(opS <= cur && opE >= cur)
            cur = opE;
    }
    return toString(cur);
}