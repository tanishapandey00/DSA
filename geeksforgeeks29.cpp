#include <iostream>
#include <algorithm>
using namespace std;
// Heap Sort Algorithm //
/*

*/
// Step 1 Built a MaxHeap
void maxHeapify(int arr[], int n, int i)
{
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}
void BuitHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}
// Step 2 Sort
/* Repeatedly swap root with last node , reduce heapsize by one and heapify*/
void HeapSort(int arr[], int n)
{
    BuitHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}
int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    HeapSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}