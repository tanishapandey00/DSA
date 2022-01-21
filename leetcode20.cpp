#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sum_arr(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];
    return sum;
}
int main()
{
    vector<int> arr = {3,-1,0,2};
    int k = 3;
    int sum = sum_arr(arr);
    sort(arr.begin(), arr.end());
    if (arr[0] > 0)
    {
        if (k % 2 == 0)
            cout << "1. " << sum << " ";
        else
            cout << "2. " << sum - arr[0] << " ";
    }
    else
    {
        while (k > 0)
        {
            arr[0] = -arr[0];
            sort(arr.begin(), arr.end());
            k--;
        }
        sum = sum_arr(arr);
        cout << "3. " << sum << " ";
    }
    return 0;
}