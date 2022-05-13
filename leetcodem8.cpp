#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// backtracking
void printArray(vector<int> arr)
{
    for (auto a : arr)
        cout << a << " ";
}
void Helper(vector<int> candidates, vector<int> temp, int target, int currSum, int currIndex)
{
    if (currSum > target)
        return;
    else if (currSum == target)
    {
        printArray(temp);
        cout << endl;
        return;
    }
    else
    {
        for (int i = currIndex; i < candidates.size(); i++)
        {
            temp.push_back(candidates[i]);
            currSum += candidates[i];
            Helper(candidates, temp, target, currSum, i);
            temp.pop_back();
            currSum -= candidates[i];
        }
    }
}
void combinationSum(vector<int> &candidates, int target)
{
    vector<int> temp;
    Helper(candidates, temp, target, 0, 0);
}
int main()
{
    vector<int> nums = {2,3,5};
    int target = 8;
    combinationSum(nums, target);
    return 0;
}