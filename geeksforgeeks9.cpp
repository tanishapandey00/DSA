#include <iostream>
#include <algorithm>
using namespace std;
// Question :- Index of First occurance in sorted array
// I/P :- arr[] = {1, 10,10,10,20,20,40} , x=20
// O/P :-  4
// Method 1 Reccursive approche
int first_occureance_recursion(int arr[], int start, int end, int x)
{
    for (int i = 0; i < end + 1; i++)
    {
        int mid = start - (start - end) / 2;
        if (start > end)
            return -1;
        if (arr[mid] < x)
        {
            return first_occureance_recursion(arr, mid + 1, end, x);
        }
        else if (arr[mid] > x)
        {
            return first_occureance_recursion(arr, start, mid - 1, x);
        }
        else
        {
            if (arr[mid - 1] != x || mid == 0)
                return mid;
            else
                return first_occureance_recursion(arr, start, mid - 1, x);
        }
    }
    return -1;
}
// Method2 to Iterative approach
int first_occurence_iterative(int arr[], int x, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;
        if (arr[mid] > x)
            end = mid - 1;
        else if (arr[mid] < x)
            start = mid + 1;
        else
        {
            if (arr[mid - 1] != x || mid == 0)
                return mid;
            else
                end = mid - 1;
        }
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
    int x;
    cin >> x;
    cout<<first_occureance_recursion(arr,0,n-1,x)<<endl;
    cout<<first_occurence_iterative(arr,x,n);
    return 0;
}