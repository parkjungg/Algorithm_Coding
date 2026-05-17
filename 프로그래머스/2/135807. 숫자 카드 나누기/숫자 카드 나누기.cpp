#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int go(vector<int> &array)
{
    int g = array[0];
    for(int i = 1; i < array.size(); i++)
    {
        g = gcd(g, array[i]);
    }
    return g;
}

bool check(int g, vector<int> &array)
{
    for(int num : array)
    {
        if(num % g == 0)
            return false;
    }
    return true;
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
    
    int gcdA = go(arrayA);
    int gcdB = go(arrayB);
    
    if(check(gcdA, arrayB))
        answer = max(answer, gcdA);
    if(check(gcdB, arrayA))
        answer = max(answer, gcdB);

    return answer;
}