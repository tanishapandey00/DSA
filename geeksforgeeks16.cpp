#include <iostream>
#include <algorithm>
using namespace std;
// Two Pointer Approach
// Question:- Given an unsorted array and a number x, we need to find if there is a pair in the array with sum
// equal to x;
// arr[] = {3,5,9,2,8,10,11} x=17//answer : yes their is a pair(9,8)
// Method 1
void solution1(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (sum == arr[i] + arr[j])
            {
                cout << "Yes" << endl;
                cout << "There is a pair (" << arr[i] << "," << arr[j] << ")" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
//Method 2 two pointer appraoch 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    solution1(arr, n, sum);
    return 0;
}