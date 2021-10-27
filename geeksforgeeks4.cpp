#include <iostream>
#include <algorithm>
using namespace std;
// no negative array
bool sum_arr(int arr[], int n, int sum)
{
    int res = arr[0], index = 0;
    for (int i = 1; i < n; i++)
    {
        if (res < sum)
        {
            res += arr[i];
        }
        while (res > sum)
        {
            res -= arr[index];
            index++;
        }
    }
    return (res == sum);
}
int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (sum_arr(arr, n, sum) == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}