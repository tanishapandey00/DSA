#include <iostream>
#include <algorithm>
using namespace std;
// count number of 1's int and sorthed binary array
int count_ones(int arr[], int n)
{
    int start = 0, end = n - 1;
    int index;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if (arr[mid] == 0)
            start = mid + 1;
        else
        {
            if (arr[mid - 1] != 1 || mid == 0)
                return (n - mid);
            else
                end = mid - 1;
        }
    }
    return 0;
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
    cout << count_ones(arr, n);
    return 0;
}