#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Remove Duplicates from Sorted Array II
int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int j = -1, i = 1, count = 1, sz = 1;
    while (i < n)
    {
        if (nums[i] < nums[i - 1])
            break;
        if (nums[i] == nums[i - 1])
        {
            if (count < 2)
            {
                count++;
                sz++;
                i++;
            }
            else
            {
                j = i;
                while (nums[i] == nums[i - 1])
                {
                    i++;
                    count++;
                }
            }
        }
        if (nums[i] != nums[i - 1])
        {
            if (j == -1)
            {
                sz++;
                count = 1;
                i++;
            }
            else
            {
                sz++;
                count = 1;
                swap(nums[j], nums[i]);
                j++;
                i++;
            }
        }
    }
    return sz;
}
int remove(vector<int> nums)
{
    int prev = nums[0], count = 1, pos = 1;
    for (int i = 1; i < nums.size(); i++)
        if (prev != nums[i])
            count = 1, prev = nums[i], nums[pos++] = nums[i];
        else if (count++ < 2)
            nums[pos++] = nums[i];
    return pos;
}
int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    int k = remove(arr);
    cout << "k = " << k << endl;
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    return 0;
}