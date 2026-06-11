#include <string>
#include <vector>

using namespace std;

long long solution(vector<int> sequence) {
    int n = sequence.size();
    
    vector<long long> a(n);
    vector<long long> b(n);
    
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            a[i] = sequence[i];
            b[i] = -sequence[i];
        }
        else
        {
            a[i] = -sequence[i];
            b[i] = sequence[i];
        }
    }
    
    long long cur1 = a[0];
    long long cur2 = b[0];
    
    long long ans1 = a[0];
    long long ans2 = b[0];
    
    for(int i = 1; i < n; i++)
    {
        cur1 = max(a[i], cur1 + a[i]);
        ans1 = max(ans1, cur1);
        
        cur2 = max(b[i], cur2 + b[i]);
        ans2 = max(ans2, cur2);
    }

    return max(ans1, ans2);
}