#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


string solution(vector<string> participant, vector<string> completion) {

    unordered_map<string, int> prtcpt_map;
    for (string name : participant)
    {
        prtcpt_map[name]++;
    }
    for (string name : completion)
    {
        prtcpt_map[name]--;
    }
    for (auto pair : prtcpt_map) {
        if (pair.second > 0)
        {
            return pair.first;
        }


    }
}