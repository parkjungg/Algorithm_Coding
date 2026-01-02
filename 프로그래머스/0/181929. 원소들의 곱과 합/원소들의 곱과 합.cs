using System;

public class Solution {
    public int solution(int[] num_list) {        
        int mul = 1;
        int sum = 0;
        
        foreach(var i in num_list)
        {
            mul *= i;
        }
        
        foreach(var i in num_list)
        {
            sum += i;
        }
        sum = sum * sum;
        if(sum < mul) return 0;
        else return 1;
    }
}