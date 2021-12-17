#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n = 9;
    int arr[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // brute Force Appoch
    //  int result = 0;
    //  if (n == 1)
    //      cout << arr[0];
    //  else
    //  {
    //      for (int i = 0; i < n; i++)
    //      {
    //          int sum = arr[i];
    //          for (int j = i + 1; j < n; j++)
    //          {
    //              sum += arr[j];
    //              result = max(sum, result);
    //          }
    //      }
    //      cout << result;
    //  }
    // O(n)solution
    // int res = arr[0], max_sum = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     max_sum = max(max_sum + arr[i], arr[i]);
    //     res = max(max_sum, res);
    // }
    // cout << res << endl;
    
    // Divide and Conquer Technique;
    
    return 0;
}