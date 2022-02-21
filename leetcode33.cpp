#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
// First Unique Character in a String
/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
Example 1:
Input: s = "leetcode"
Output: 0*/
int main()
{
    string s = "loveleetcode";
    unordered_map<char, int> m;
    for (auto a : s)
        m[a]++;
    int index = -1;
    for(int i=0;i<s.length();i++){
        if(m[s[i]]==1) return i;
    }
    return 0;
}