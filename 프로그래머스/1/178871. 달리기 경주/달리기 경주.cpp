#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;
    
    for(int i = 0; i < players.size(); i++)
    {
        rank[players[i]] = i;
    }
    
    for(string call : callings)
    {
        int idx = rank[call];
        string front = players[idx - 1];
        
        swap(players[idx], players[idx - 1]);
        
        rank[call]--;
        rank[front]++;
    }
    return players;
}