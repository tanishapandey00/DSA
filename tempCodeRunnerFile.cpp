#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Stock Byuy and sell problem

// Method 1// Time complexity 0(n^2);
int profit_max(vector<int> arr, int start, int end)
{
    if (end <= start)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[i] < arr[j])
            {
                int current_profit = arr[j] - arr[i] + profit_max(arr, start, i - 1) + profit_max(arr, j + 1, end);
                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}
// Method 2 // Time complexity 0(n)
int max_profit(vector<int> arr, int size)
{
    int profit = 0;
    int i = 1;
    while (i < size)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
            i++;
        }
        else{
            i++;
        }
        
    }
    return profit;
}
//method 3
int stock_profit(){

}
int main()
{
    int n;
    cin >> n;
    vector<int> arr = {1, 5, 3, 8, 12};
    cout<<profit_max(arr,0,n-1)<<endl;
    cout << max_profit(arr, n) << endl;
    return 0;
}