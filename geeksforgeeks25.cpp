#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
// Minimum Difference in array
// we can sort the array and the find the minimum difference
int MDiff(int arr[], int n)
{
    int diff = INT_MAX;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < diff)
            diff = arr[i] - arr[i - 1];
    }
    return diff;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << MDiff(arr, n);
    return 0;
}