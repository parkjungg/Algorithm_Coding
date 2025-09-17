using System;
using System.Linq;

public class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
       
        int same = 0;
        for(int i = 0; i < 6; i++)
        {
            if(lottos.Contains(win_nums[i]))
            {
                same++;
            }
        }
        int zeroCnt = 0;
        foreach(var i in lottos)
        {
            if(i == 0) zeroCnt++;
        }
        int max = 0;
        int min = 0;
        
        if(same + zeroCnt == 6) max = 1;
        else if(same + zeroCnt == 5) max = 2;
        else if(same + zeroCnt == 4) max = 3;
        else if(same + zeroCnt == 3) max = 4;
        else if(same + zeroCnt == 2) max = 5;
        else max = 6;
        
        if(same == 6) min = 1;
        else if(same == 5) min = 2;
        else if(same == 4) min = 3;
        else if(same == 3) min = 4;
        else if(same == 2) min = 5;
        else min = 6;
        return new int[] {max, min};
    }
}
// 원래 일치하는거 + 0개수 -> 최고 순위
// 원래 일치하는거 -> 최저 순위