#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;
// Permutations
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
void print(vector<int> nums)
{
    for (auto a : nums)
        cout << a << " ";
    cout << endl;
}
void helper(vector<vector<int>> ans, vector<int> nums, int s, int e)
{
    if (s == e)
    {
        ans.push_back(nums);
        print(nums);
        return;
    }
    else
    {
        for (int i = s; i <= e; i++)
        {
            swap(nums[s], nums[i]);
            helper(ans, nums, s + 1, e);
            swap(nums[s], nums[i]);
        }
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size() - 1;
    helper(ans, nums, 0, n);
    return ans;
}

// permutation with duplicates
class Solution
{
private:
    vector<vector<int>> permutations;

    void permute(vector<int> &nums, int start)
    {
        if (start == nums.size() - 1)
        {
            permutations.push_back(nums);
        }

        unordered_set<int> seen;
        for (int i = start; i < nums.size(); ++i)
        {
            if (seen.find(nums[i]) == seen.end())
            {
                swap(nums[start], nums[i]);
                permute(nums, start + 1);
                swap(nums[start], nums[i]); // backtrack
                seen.insert(nums[i]);
            }
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        if (nums.size() < 2)
        {
            return {nums};
        }
        permute(nums, 0);
        return permutations;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};

    return 0;
}