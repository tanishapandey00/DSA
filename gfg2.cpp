#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
void getFloorAndCeil(int arr[], int n, int x)
{
    int ceil_of_x = 1e9;
    int floor_of_x = -1e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceil_of_x = min(ceil_of_x, arr[i]);
        }
        if (arr[i] <= x)
        {
            floor_of_x = max(floor_of_x, arr[i]);
        }
    }
    if (ceil_of_x == 1e9)
    {
        ceil_of_x = -1;
    }
    if (floor_of_x == -1e9)
    {
        floor_of_x = -1;
    }
    cout << ceil_of_x << " " << floor_of_x;
}
int main()
{
    int arr[] = {85, 24, 40, 10, 66, 16, 6, 54, 93, 42, 6, 98, 49, 100, 98, 23, 59, 48, 17, 56, 64, 94, 77};
    int n = 23;
    int x = 42;
    getFloorAndCeil(arr, n, x);
    return 0;
}
