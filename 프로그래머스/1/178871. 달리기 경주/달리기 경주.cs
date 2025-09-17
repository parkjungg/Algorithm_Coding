using System;
using System.Collections.Generic;

public class Solution {
    public string[] solution(string[] players, string[] callings) {
        var pos = new Dictionary<string, int>(players.Length);
        for(int i = 0; i < players.Length; i++)
        {
            pos[players[i]] = i;
        }
        
        foreach(var name in callings)
        {
            int i = pos[name];
            
            string ahead = players[i - 1];
            players[i - 1] = name;
            players[i] = ahead;
            
            pos[name] = i - 1;
            pos[ahead] = i;
        }
        return players;
    }
}