#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxW = 0;
    int maxH = 0;
    for(auto s : sizes)
    {
        int w = max(s[0], s[1]);
        int h = min(s[0], s[1]);
        
        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    return maxW * maxH;
}

