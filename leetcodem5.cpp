#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(vector<int> &arr, int start)
{
    int i = start, j = arr.size() - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void nextpermutation(vector<int> &arr)
{
    int i = arr.size() - 1;
    while (i >= 0 && arr[i] >= arr[i - 1])
        i--;
    if (i >= 0)
    {
        int j = arr.size() - 1;
        while (arr[j] <= arr[i])
            j--;
        swap(arr[j], arr[i]);
    }
    reverse(arr, i + 1);
}
int main()
{
    vector<int> arr = {7, 5, 1, 6, 3, 4};
    cout << "Next Permutation of given array is :-" << endl;
    for (auto a : arr)
        cout << a << " , ";
    return 0;
}