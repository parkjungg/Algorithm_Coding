#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

set<int> s;
bool visited[10];
bool check(int n)
{
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void dfs(string numbers, string cur)
{
    if(cur != "")
        s.insert(stoi(cur));
    
    for(int i = 0; i < numbers.size(); i++)
    {
        if(visited[i]) continue;
        
        visited[i] = true;
        dfs(numbers, cur + numbers[i]);
        visited[i] = false;
    }
}

int solution(string numbers) {
    int answer = 0;

    dfs(numbers, "");
    
    for(int n : s)
    {
        if(check(n)) answer++;
    }
    return answer;
}