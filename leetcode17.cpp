#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarysearch(vector<int> arr, int x)
{
    int l = 0, h = arr.size() - 1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] >= x)
        {
            if (m == 0 || (m > 0 && arr[m - 1] < x))
                return (arr.size() - m);
            else
                h = m - 1;
        }
        else
        {
            if (m < arr.size() && arr[m + 1] >= x)
                return (arr.size() - (m + 1));
            else
                l = m + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {0, 0};
    sort(arr.begin(), arr.end());
    int x = 0;
    while (x <= 4)
    {
        int y = binarysearch(arr, x);
        // cout << x << " " << y << endl;
        if (y == x)
        {
            cout << x << endl;
            break;
        }
        else
        {
            x++;
        }
    }
    if (x > 4)
        cout << "No such number exists" << endl;
    return 0;
}