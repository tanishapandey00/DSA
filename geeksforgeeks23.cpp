#include <iostream>
#include <algorithm>
using namespace std;
// Merge Sort Algorithm
// Time complexity theta(n)
int merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[n1 + j];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++, k++;
        }
        else
        {
            arr[k] = right[j];
            j++, k++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
    }
    while (j < n2)
    {
        arr[k] = right[j];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return 0;
}