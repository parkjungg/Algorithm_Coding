using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string[] want, int[] number, string[] discount) {
        int answer = 0;
        int len = discount.Length;
        int total = len - 10 + 1;
        
        var baseDB = new Dictionary<string, int>();
        for(int i = 0; i < want.Length; i++)
        {
            baseDB[want[i]] = number[i];
        }
        
        for(int i = 0; i < total; i++)
        {
            var countDB = new Dictionary<string, int>();
            for(int j = 0; j < 10; j++)
            {
                if(!countDB.ContainsKey(discount[i + j]))
                {
                    countDB[discount[i + j]] = 1;
                }
                else
                {
                    countDB[discount[i + j]]++;
                }
            }
            
            bool isOK = true;
            
            foreach(var kv in baseDB)
            {
                if(!countDB.ContainsKey(kv.Key) || countDB[kv.Key] != kv.Value)
                {
                    isOK = false;
                    break;
                }
            }
            if(isOK) answer++;
        }
        return answer;
    }
}