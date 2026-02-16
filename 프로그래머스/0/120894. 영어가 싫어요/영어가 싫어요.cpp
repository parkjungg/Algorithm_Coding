#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> words = {"zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < 10; i++)
    {
        while(numbers.find(words[i]) != string::npos)
        {
            numbers.replace(numbers.find(words[i]), words[i].size(), to_string(i));
        }
    }
    
    return stoll(numbers);
}