#include <iostream>
#include <algorithm>
using namespace std;
// Treapung rain water
int trapping(int arr[], int size)
{
    int trapped = 0;
    int lmax[size], rmax[size];
    lmax[0] = arr[0], rmax[size - 1] = arr[size - 1];
    for (int i = 1; i < size; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    for (int i = size - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < size - 1; i++)
    {
        trapped += min(lmax[i], rmax[i]) - arr[i];
    }
    return trapped;
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
    cout << trapping(arr, n) << endl;
    return 0;
}