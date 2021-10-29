#include <iostream>
#include <algorithm>
using namespace std;
// Search an element in sorted rotated array
// I/P : arr[] = {10 20 30 40 50 8 9} x=30;
// O/P : 2
int find(int arr[], int size, int k)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if (arr[mid] == k)
            return mid;
        if (arr[start] < arr[mid])
        {
            if (k >= arr[start] && k < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (k <= arr[end] && k > arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
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
    cout << find(arr, n, k);
    return 0;
}