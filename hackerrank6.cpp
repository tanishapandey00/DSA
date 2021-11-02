#include <bits/stdc++.h>

using namespace std;
//Equalize the Array Problem
int equalizeArray(int arr[], int size)
{
    int count[101]={0};
    for (int i = 0; i < size; i++)
    {
        count[arr[i]] += 1;
    }
    int max = 0;
    for (int i = 0; i < 101; i++)
    {
        if (max < count[i])
            max = count[i];
    }
    return (size-max);
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
    cout << equalizeArray(arr, n) << endl;
    return 0;
}