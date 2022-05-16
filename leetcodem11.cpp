#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
// Group Anagram
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(strs[i].begin(), strs.end());
        mp[strs[i]].push_back(s);
    }
    for (auto a : mp)
    {
        ans.push_back(a.second);
    }
    return ans;
}

int main()
{
    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    for (auto a : s)
        cout << a << " ";
    return 0;
}