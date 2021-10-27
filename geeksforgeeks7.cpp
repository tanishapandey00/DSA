#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Question :- Given an array of integer, find if it has an equilibrium point.
// I/P : arr[] ={3,4,8,-9,20,6}
//  O/P : Yes
// Equlibrium point is a point such that sum of element before it is equal to sum of element after it;

// Method 1
bool solution(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum == sum - arr[i])
        {
            return true;
        }
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
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
    // solution(arr, n);
    if (solution(arr, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
