#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int a = 0;
    int b = 0;
    
    while(a < A.size() && b < B.size())
    {
        if(B[b] > A[a])
        {
            answer++;
            a++;
            b++;
        }
        else
        {
            b++;
        }
    }
    return answer;
}