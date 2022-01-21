#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-1, -2, 3, 4};
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
