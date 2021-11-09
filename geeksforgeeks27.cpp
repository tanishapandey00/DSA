#include <iostream>
#include <algorithm>
using namespace std;
// Meeting Maximum Guests
// Input : arr[] = {900,940} dep[] = {1000,1030}  0=<arr[],dep[]=<2359
// Output: 2
/*Solution: Basic idea behind the solution is we consider all the time lines starting from first arival to last
departure and check no of guest*/
int max_guest(int arr[], int dep[], int n)
{
    // First we sort both the array
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1; // i while pointe in array arr and j will point to array dep
    while (i < n && j < n)
    {
        if (arr[i] <= dep[i])
        {
            curr++, i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n], dep[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> dep[i];
    return 0;
}