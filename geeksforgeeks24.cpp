#include <iostream>
#include <algorithm>
using namespace std;
// Quick Sort Algorithm
/*Partion Algorithm works in a way that elements before the pivote are smaller than pivote and
elements after the pivote are greater than pivoit*/
// Parting Algo Method 1 Naive appriach
void partion(int arr[], int low, int high, int pivot)
{
    // we create an temprerory array of size (high-low+1)
    int temp[high - low + 1], index = 0;
    // Then we traverse the array from low to high main array
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i + low];
    }
}
// Lomuto Partion Algorithm
/*In this algorithm we consider pivot as the elemnts at index high
and we start traversing for for and point a index j before low if
we found any elmenet during traversing whis is less then pivote we increment the j and swap that elemnet
with at arr[j]and after traving the whole arr we at last swap arr[j+1] with arr[high] and return index j+1 */
int LPartition(int arr[], int l, int h)
{
    int pivot = arr[h], j = l - 1; // In this algorithm we always consider high/last elemnts as and pivot and point and pointer before low
    for (int i = l; i <= h; i++)
    {
        if (arr[i] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j + 1], arr[h]);
    return j + 1;
}
// Hoare's Partion Algorithm
/*In this Algorithm we consider element at low as pivote and pointer to pointers i 1 index before low and
j 1 index before high and increment them atleast 1 time (that is why we use do while loop)
increment i if arr[i]<pivote and increment decrement j if arr[j] is greater that j
if (i=>j) them we simpley return index j; otherwise we swap arr[i]and arr[j]  */
int HPartion(int arr[], int l, int h)
{
    int pivote = arr[l], i = l - 1, j = h - 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivote);
        do
        {
            j--;
        } while (arr[j] > pivote);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
// Main Quick Sort Algorithm after Partion using Lomuto Partition
void LQSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = LPartition(arr, l, h);
        LQSort(arr, l, p - 1);
        LQSort(arr, p + 1, h);
    }
}
void HQSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = HPartion(arr, l, h);
        HQSort(arr, l, p);
        HQSort(arr, p + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // partion(arr, 0, n -1 , 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}