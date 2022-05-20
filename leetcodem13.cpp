#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Sort Colrs
/*
GivenGiven an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function. an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/
int partition(vector<int>& nums, int l, int r)
{
    int pivot = nums[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[r]);
    return i + 1;
}
void qSort(vector<int>& nums, int l, int r)
{
    if (l < r)
    {
        int p = partition(nums, l, r);
        qSort(nums, l, p - 1);
        qSort(nums, p + 1, r);
    }
}
// void sort(vector<int>nums)
// {
//     qsort(nums,0, nums.size()- 1);
// }
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    // qsort(nums,0,nums.size()-1);
    return 0;
}