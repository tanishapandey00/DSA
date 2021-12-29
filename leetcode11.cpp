#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    // vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    // vector<string> list2 = {"Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"};
    // unordered_map<string, int> m;
    // for (int i = 0; i < list1.size(); i++)
    // {
    //     m[list1[i]] = i;
    // }
    // int index = INT_MAX;
    // vector<string> ans;
    // for (int i = 0; i < list2.size(); i++)
    // {
    //     if (m.find(list2[i]) != m.end())
    //     {
    //         int sum = m[list2[i]] + i;
    //         if (sum < index)
    //         {
    //             index = sum;
    //             ans.clear();
    //             ans.push_back(list2[i]);
    //         }
    //         else if (sum == index)
    //             ans.push_back(list2[i]);
    //         else
    //             continue;
    //     }
    // }
    // Can Place Flowers
    vector<int> flowerbed = {0, 0, 1, 0, 1};
    int n = 1;
    int count = 0;
    int i = 0;
    while (i < flowerbed.size())
    {
        if (flowerbed[i] == 0)
        {
            if (i == 0 && flowerbed[i + 1] == 0)
            {
                count++;
                flowerbed[i]=1;
                i + 2;
            }
            if (i != 0 && (flowerbed[i + 1] == 0 && flowerbed[i-1]==0))
            {
                count++;
                flowerbed[i]=1;
                i + 2;
            }
            if (i == flowerbed.size() - 1 && flowerbed[i - 1] == 0)
                count++;
                flowerbed[i]=1;
        }
        else
        {
            i + 2;
        }
    }
    if (count >= n)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}