#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool binearySearch(int *arr, int n, int k)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] == k)
        {
            // arr[m] = -1;
            return true;
        }

        else if (arr[m] < k)
            l = m + 1;
        else
            h = m - 1;
    }
    return false;
}
int check(int *a, int *b, int n)
{
    sort(a, a + n);
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (binearySearch(a, n, b[i]) == false)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}

void Rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}
    int findClosest(int arr[], int n, int target)
    {
 
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
 
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        if (target < arr[mid]) {
 
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);

            j = mid;
        }

        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            i = mid + 1;
        }
    }
 
    return arr[mid];
}

int main()
{
    int a[] = {7, 6, 5, 3, 9, 1, 5, 2, 7, 2};
    int b[] = {7, 6, 2, 3, 9, 1, 7, 5, 5, 2};
    int arr[] = {1, 2, 3, 5, 6, 8, 9};
    int m = 7;
    int target = 4;
    cout<<findClosest(arr,m,target);
    // Rearrange(arr, m);
    // for (int i = 0; i < m; i++)
    //     cout << arr[i] << " ";
    // int n = 10;
    // if (check(a, b, n) == 1)
    //     cout << "Array are same" << endl;
    // else
    //     cout << "Array are not same" << endl;
    return 0;
}