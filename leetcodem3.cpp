#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void generateparathesis(vector<string> &ans, string s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(s);
        return;
    }
    if (open > 0)
    {
        s += '(';
        generateparathesis(ans, s, open - 1, close);
        s.pop_back();
    }
    if (close > 0 && close < open)
    {
        s += ')';
        generateparathesis(ans, s, open, close - 1);
        s.pop_back();
    }
}
int main()
{
    int n;
    vector<string> ans;
    string s = "";
    generateparathesis(ans, s, n, n);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}