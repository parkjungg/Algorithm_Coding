#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int n;
int arr[21][21];
bool visited[21];
int ret = 10000000;

void calc()
{
    int start = 0, link = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(visited[i] && visited[j])
            {
                start += (arr[i][j] + arr[j][i]);
            }
            else if(!visited[i] && !visited[j])
            {
                link += (arr[i][j] + arr[j][i]);
            }
        }
    }
    ret = min(ret, abs(start - link));
}
void dfs(int idx, int cnt)
{
    if(cnt == n / 2)
    {
        calc();
        return;
    }
    for(int i = idx; i < n; i++)
    {
        visited[i] = true;
        dfs(i + 1, cnt + 1);
        visited[i] = false;
    }
}
int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    dfs(0, 0);
    
    cout << ret;
}