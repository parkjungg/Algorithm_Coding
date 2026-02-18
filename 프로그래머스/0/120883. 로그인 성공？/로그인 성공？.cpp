#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for(int i = 0; i < db.size(); i++)
    {
        string id = db[i][0];
        string password = db[i][1];
        
        if(id_pw[0] == id && id_pw[1] == password) return "login";
        else if(id_pw[0] == id && id_pw[1] != password) return "wrong pw";
    }
    return "fail";
}