#include <iostream>
#include <climits>
using namespace std;

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
int partitioning_position(int arr[], int n, int l, int h)
{
    int pivote = arr[l];
    int i = l, j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivote);
        do
        {
            j--;
        } while (arr[j] > pivote);
        if (i < j)
        {
            //Swap element at i and j respectively
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}
void quick_sort(int arr[], int n, int l, int h)
{
    if (l < h)
    {
        int j = partitioning_position(arr, n, l, h);
        quick_sort(arr, n, l, j);
        quick_sort(arr, n, j + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    get_input(arr, n);
    int low = 0, high = n;
    quick_sort(arr,n,low,high);
    cout<<"After Sorting"<<endl;
    print_array(arr, n);
    return 0;
}