#include <iostream>
#include <algorithm>
using namespace std;
// question :- Count Occurence in a sorted array
int count_occurances(int arr[], int n, int k)
{
    int start = 0, end = n - 1, l_b, u_b;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
        else
        {
            if (arr[mid - 1] == k)
            {
                l_b = mid - 1;
                end = mid - 1;
            }
            else
            {
                l_b = mid;
            }
            if (arr[mid + 1] == k)
            {
                u_b = mid + 1;
                start = mid + 1;
            }
            else
            {
                u_b = mid;
            }
        }
    }
        return (u_b - l_b) + 1;
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout << count_occurances(arr, n, k);
    return 0;
}