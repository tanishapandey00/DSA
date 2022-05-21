#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Combinations
/*
Given two integers n and k, return all possible combinations of k numbers out of the range [1, n].

You may return the answer in any order.
*/
void printarr(vector<int> arr)
{
    for (auto a : arr)
        cout << a << " ";
    cout << endl;
}
void combination(vector<vector<int>> ans, vector<int> temp, int n, int k, int currNum)
{
    if (temp.size() > k)
        return;
    else if (temp.size() == k)
    {
        ans.push_back(temp);
        printarr(temp);
        return;
    }
    else
    {
        for (int i = currNum; i <= n; i++)
        {
            temp.push_back(i);
            combination(ans, temp, n, k, i + 1);
            temp.pop_back();
        }
    }
}
vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    combination(ans, temp, n, k, 1);
    return ans;
}
int main()
{
    int n = 1;
    int k = 1;
    vector<vector<int>> ans = combine(n, k);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}