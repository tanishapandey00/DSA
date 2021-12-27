#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n = 7;
    vector<int> nums = {0,2,3,4,6,8,9};
    //Method 1
    int i = -1, j = 0;
    do
    {
        if ((nums[j] - 1 != nums[j - 1]) && (nums[j] + 1 != nums[j + 1]))
        {
            cout << nums[j] << " , " << endl;
            j++;
            i = j;
        }
        if (nums[j] + 1 == nums[j + 1])
            j++;
        else
        {
            if (i == -1)
                cout << nums[i + 1] << " -> "
                     << nums[j] << " , " << endl;
            else
                cout <<nums[i] << " -> "
                     << nums[j] << " , " << endl;
            j++;
            i = j;
        }
    } while (j < n);
    //Method 2
    return 0;
}