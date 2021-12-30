#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 4};
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
        m[nums[i]]++;
    int i = 1;
    while (i <= nums.size())
    {
        if (m.find(i) == m.end())
            cout << i << " ";
        if (m[i] == 2)
            cout << i << " ";
        i++;
    }
    return 0;
}