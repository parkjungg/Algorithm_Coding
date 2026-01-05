using System;

public class Solution {
    public int solution(int[] array) {
        Array.Sort(array);
        int mid = 0;
        
        if(array.Length % 2 == 0) mid = array.Length / 2;
        else mid = array.Length / 2 + 1;
        return array[mid - 1];
    }
}