using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(string[] genres, int[] plays) {
        
        var totalGenre = new Dictionary<string, int>();
        var songsGenre = new Dictionary<string, List<KeyValuePair<int, int>>>();
        
        int len = genres.Length;
        
        for(int i = 0; i < len; i++)
        {
            string g = genres[i];
            int p = plays[i];
            
            if(!totalGenre.ContainsKey(g)) totalGenre[g] = 0;
            totalGenre[g] += p;
            
            if(!songsGenre.ContainsKey(g)) songsGenre[g] = new List<KeyValuePair<int, int>>();
            songsGenre[g].Add(new KeyValuePair<int, int>(i, p));
        }
        
        var orderedGenres = totalGenre.OrderByDescending(kv => kv.Value).Select(kv => kv.Key);
        var result = new List<int>();
        
        foreach(var g in orderedGenres)
        {
            var topSongs = songsGenre[g].OrderByDescending(x => x.Value)
                .ThenBy(x => x.Key)
                .Take(2);
            foreach(var s in topSongs)
            {
                result.Add(s.Key);
            }
        }      
        
        return result.ToArray();
    }
}

// 2500 800 600 500 150
//  4   3   1   0   2