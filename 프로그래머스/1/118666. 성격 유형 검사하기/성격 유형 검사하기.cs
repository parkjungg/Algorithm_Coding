using System;
using System.Collections.Generic;
using System.Text;

public class Solution {
    public string solution(string[] survey, int[] choices) {
        StringBuilder sb = new StringBuilder();
        var database = new Dictionary<char, int>()
        {
            {'R', 0}, {'T', 0},
            {'C', 0}, {'F', 0},
            {'J', 0}, {'M', 0},
            {'A', 0}, {'N', 0}
        };
        
        for(int i = 0; i < survey.Length; i++)
        {
            if(choices[i] <= 3)
            {
                database[survey[i][0]] += (4 - choices[i]);
            }
            else 
            {
                database[survey[i][1]] += (choices[i] - 4);
            }
        }
        if(database['R'] >= database['T'])
        {
            sb.Append('R');
        }
        else sb.Append('T');
        
        if(database['C'] >= database['F'])
        {
            sb.Append('C');
        }
        else sb.Append('F');
        
        if(database['J'] >= database['M'])
        {
            sb.Append('J');
        }
        else sb.Append('M');
        
        if(database['A'] >= database['N'])
        {
            sb.Append('A');
        }
        else sb.Append('N');
        
        return sb.ToString();
    }
}