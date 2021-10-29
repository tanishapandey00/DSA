#include <iostream>
#include <algorithm>
using namespace std;
// Question: Given a sorted array and a sum, find if this is a pair with given sum
// two pointer apprach
bool solution1(int arr[], int n, int sum)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (arr[left] + arr[right] == sum)
        {
            return true;
        }
        else if (arr[left] + arr[right] > sum)
            right--;
        else
            left++;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    if (solution1(arr, n, sum))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}