#include <iostream>
#include <climits>
#include <array>
#include<queue>
#include <algorithm>
using namespace std;
//Kth smallest and largest element in array
int kth_smallest_algo1(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
//Min heap apprach
void get_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    get_input(arr, n);
    print_array(arr, n);
    cout << k << "th smallest elemnet of array is : " << kth_smallest_algo1(arr, n, k) << endl;
    print_array(arr, n);
   
    return 0;
}