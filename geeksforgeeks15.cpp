#include <iostream>
using namespace std;
/// Question :- Find a peak element in an array
// Example arr[] = {5, 10, 20, 15 ,7} answer 20
int peek(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] > arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<peek(arr,n);
    return 0;
}