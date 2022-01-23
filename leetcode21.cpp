#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1,1,1,1};
    int product = 1;
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        product = max(product, ((nums[i] - 1) * (nums[j] - 1)));
        if (nums[i] >= nums[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << product << endl;
    return 0;
}