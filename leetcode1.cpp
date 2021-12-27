#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {1, 2, 3, 1};
    int k = 3;
    // Approach 1
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && j - i <= k)
            {
                cout << "True" << endl;
                break;
            }
        }
    }
    // Approach 2
    unordered_map<int, int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s[arr[i]] -= i;
        if (k >= -(arr[i]))
            cout << "True" << endl;
    }
    return 0;
}
