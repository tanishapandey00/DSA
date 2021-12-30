#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Maximum Product of Three Numbers
int main()
{
    vector<int> nums;
    int n = nums.size(), sum1 = 1, sum2 = 1;
    sort(nums.begin(), nums.end());
    for (int i = n - 3; i < n; i++)
    {
        sum1 = sum1 * nums[i];
    }
    for (int i = 0; i < 2; i++)
    {
        sum2 = sum2 * nums[i];
    }
    sum2 = sum2 * nums[n - 1];
    cout<<max(sum1, sum2);
    return 0;
}