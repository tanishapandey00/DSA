#include <iostream>
#include <algorithm>
using namespace std;
// Question:- Given a sorted array and a sum find if their is triplet with given sum
bool solution1(int arr[], int left = 0, int n, int sum)
{
    int right = n - 1;
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
bool triplet(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        if (solution1(arr, i + 1, n - 1, sum - arr[i]))
            return true;
        return false;
    }
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
    return 0;
}