#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string A, string B) {
    if(A == B) return 0;
    
    for(int i = 1; i <= A.size(); i++)
    {
        rotate(A.rbegin(), A.rbegin() + 1, A.rend());
        if(A == B)
        {
            return i;
        }
    }
    return -1;
}