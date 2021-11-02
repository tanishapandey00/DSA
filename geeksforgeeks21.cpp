#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
// selction sort algorithm
void Select_sort1(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_ind = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
            temp[i] = arr[min_ind];
            arr[min_ind] = INT_MAX;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
void Select_sort2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
            swap(arr[min_ind], arr[i]);
        }
    }
}
int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Select_sort2(arr, n);
    return 0;
}