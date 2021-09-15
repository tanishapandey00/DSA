#include <bits/stdc++.h>

using namespace std;
void min_max(long int arr[], int n)
{
     long int sum = 0;
     long int min = INT_MAX;
     long int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << sum-max << " " << sum-min;
}

int main()
{
   long int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    min_max(arr, 5);
    return 0;
}
