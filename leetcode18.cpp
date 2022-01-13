#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
string shortestCompletingWord(string licensePlate, vector<string> &words)
{
    unordered_map<char, int> m;
    for (int i = 0; i < licensePlate.length(); i++)
    {
        if (int(licensePlate[i]) < 65)
            continue;
        else if (int(licensePlate[i]) >= 65 && int(licensePlate[i]) <= 90)
        {
            m[char(tolower(licensePlate[i]))]++;
        }
        else
            m[licensePlate[i]]++;
    }
    string res = "";
    for (auto s : words)
    {
        bool flag = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (m.find(s[j]) != m.end())
            {
                if (m[s[j]] > 0)
                    m[s[j]]--;
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            if (!res.size() || res.size() > s.size())
                res = s;
        }
    }
    return res;
}
int main()
{
    string licensePlate = "1s3 PSt";
    vector<string> words = {"step", "steps", "stripe", "stepple"};
    cout << shortestCompletingWord(licensePlate, words);

    return 0;
}