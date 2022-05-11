#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void generateparathesis(vector<string> &ans, string s, int open, int close, int n)
{
    if (s.length() == 2 * n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
    {
        generateparathesis(ans, s + '(', open + 1, close, n);
    }
    if (close < open)
    {
        generateparathesis(ans, s + ')', open, close + 1, n);
    }
}
int main()
{
    int n;
    vector<string> ans;
    string s = "";
    generateparathesis(ans, s, 0, 0, n);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}