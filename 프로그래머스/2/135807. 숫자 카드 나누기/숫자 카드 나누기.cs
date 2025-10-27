using System;

public class Solution {
    public int solution(int[] arrayA, int[] arrayB) {
        int gA = arrayA[0];
        int gB = arrayB[0];
        
        for(int i = 1; i < arrayA.Length; i++)
        {
            gA = GCD(gA, arrayA[i]);
        }
        
        for(int i = 1; i < arrayB.Length; i++)
        {
            gB = GCD(gB, arrayB[i]);
        }
        
        int candA = DividesNone(gA, arrayB) ? gA : 0;
        int candB = DividesNone(gB, arrayA) ? gB : 0;
        
        return Math.Max(candA, candB);
    }
    
    private int GCD(int a, int b)
    {
        while(b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    private bool DividesNone(int d, int[] arr)
    {
        foreach(var x in arr)
        {
            if(x % d == 0) return false;
        }
        return true;
    }
}

