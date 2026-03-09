#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int h, w;
string line;
int main()
{
    cin >> h >> w;
    char arr[h][w];
    int ret[h][w];
    
    for(int i = 0; i < h; i++)
    {
        cin >> line;
        for(int j = 0; j < w; j++)
        {
            arr[i][j] = line[j];
        }
    }
    
    memset(ret, -1, sizeof(ret));
    
    for(int i = 0; i < h; i++)
    {
        int idx = 0;
        bool isfind = false;
        for(int j = 0; j < w; j++)
        {
            if(arr[i][j] == 'c')
            {
                if(!isfind)
                {
                    isfind = true;
                    ret[i][j] = idx;
                    idx++;
                }
                else 
                {
                    idx = 0;
                    ret[i][j] = idx;
                    idx++;
                }
            }
            else if(isfind && arr[i][j] == '.')
            {
                ret[i][j] = idx;
                idx++;
            }
        }
    }
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cout << ret[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}