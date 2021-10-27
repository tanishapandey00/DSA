#include <iostream>
#include <algorithm>
using namespace std;
// Window sliding technique
int k_con(int arr[], int n, int k)
{
    int res = 0, sum = 0, initial = arr[0];
    // Firstly finding sum of ifrst k elements
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    // storing max in result
    res = max(res, sum);
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - initial;
        res = max(res, sum);
        initial = arr[i -(k-1)];
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << k_con(arr, n, k) << endl;

    return 0;
}