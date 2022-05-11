#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    if (nums.size() < 3)
        return {};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1])
                    l++;
                while (l < r && nums[r] == nums[r - 1])
                    r--;
                l++;
                r--;
            }
            if (sum > 0)
                r--;
            if (sum < 0)
                l++;
        }
    }
    return ans;
}

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int l, r, diff, sum, ans;
    double min = pow(2, 31);
    for (int i = 0; i < nums.size(); i++)
    {
        l = i + 1, r = nums.size() - 1;
        sum = nums[i] + nums[l] + nums[r];
        diff = abs(sum - target);
        while (l < r)
        {
            if (sum > target)
            {
                if (diff < min)
                {
                    ans = sum;
                    min = diff;
                }
                r--;
            }
            else if (sum < target)
            {
                if (diff < min)
                {
                    ans = sum;
                    min = diff;
                }
                l++;
            }
            else
            {
                return sum;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    // vector<vector<int>> ans = threeSum(nums);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    // }
    cout << threeSumClosest(nums, target);
    return 0;
}
