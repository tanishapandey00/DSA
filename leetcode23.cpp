#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 2, 7, 4};
    int w = INT_MIN, x = INT_MIN, y = INT_MAX, z = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        w = max(w, arr[i]);
        y = min(y, arr[i]);
        if (arr[i] < w)
            x = max(x, arr[i]);
        if (arr[i] > y)
            z = min(z, arr[i]);
    }
    cout << w << " " << x << endl;
    cout << y << " " << z << endl;
    cout << (w * x) - (y * z);
    return 0;
}