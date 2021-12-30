#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    // Method 1
    //  double average = INT_MIN;
    //  double sum = 0;
    //  for (int i = 0; i <= nums.size() - k; i++)
    //  {
    //      sum = 0;
    //      for (int j = 0; j < k; j++)
    //      {
    //          sum += nums[i+j];
    //      }
    //      // cout << i << " " << sum / k << endl;
    //      average = max(average, sum / k);
    //  }
    //  cout << average << " ";
    // Method 2
    double sum = 0;
    for (int i = 0; i < k; i++)
        sum += nums[i];
    double average = sum / k;
    for (int i = 1; i <= nums.size() - k; i++)
    {
        sum = sum - nums[i - 1];
        sum = sum + nums[i + (k - 1)];
        average = max(average, sum / k);
    }
    cout << average << endl;
    return 0;
}