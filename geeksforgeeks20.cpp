#include <iostream>
#include <algorithm>
using namespace std;
// Bubble Sort Algorithm
void bubble_Sort1(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void bubble_Sort2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swaped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array before Sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    bubble_Sort2(arr, n);
    cout << "Array after Sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
