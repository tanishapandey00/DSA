#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
// Longest Harmonious Subsequence
// We can use sorting and hashmap approch
int main()
{
    // vector<int> nums = {1,1,1,1};
    // // we will be using Hash Map technique
    // unordered_map<int, int> m;
    // for (int i = 0; i < nums.size(); i++)
    //     m[nums[i]]++;
    // int res = 0;
    // for (int x : nums)
    // {
    //     if (m.find(x + 1) != m.end())
    //         res = max(res, m[x + 1] + m[x]);
    // }
    // cout << res << endl;
    // Range Addition II
    int ops[2][2] = {{2, 2}, {3, 3}};
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << ops[i][0] << " , " << ops[i][1] << endl;
    // }
    int m = 3, n = 3;
    int M[m][n] = {0};
    for (int i = 0; i < 2; i++)
    {
        int j = 0;
        while (j < ops[i][0])
        {
            int k = 0;
            if (k < ops[i][1])
            {
                M[j][k] += 1;
                k++;
            }
            j++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}