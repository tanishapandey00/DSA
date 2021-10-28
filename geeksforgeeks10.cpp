#include <iostream>
#include <algorithm>
using namespace std;
// Question:- Index of last occurance of an element in an array
// method 1 Recursive approach
int last_occuracne_recurssion(int arr[], int start, int end, int k)
{
    int mid = start - (start - end) / 2;
    if (start > end)
        return -1;
    if (arr[mid] > k)
        return last_occuracne_recurssion(arr, start, mid - 1, k);
    else if (arr[mid] < k)
        return last_occuracne_recurssion(arr, mid + 1, end, k);
    else
    {
        if (arr[mid + 1] != k || mid == end)
            return mid;
        else
            return last_occuracne_recurssion(arr, mid + 1, end, k);
    }
}
// method 2 Itrative solution
int last_occurance_iterative(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
        else
        {
            if (arr[mid + 1] != k || mid == end)
                return mid;
            else
                start = mid + 1;
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
    cout << last_occuracne_recurssion(arr, 0, n - 1, k) << endl;
    cout << last_occurance_iterative(arr, n, k) << endl;
    return 0;
}