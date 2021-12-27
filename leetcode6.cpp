#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    // // temmmo Attackinh
    // vector<int> v = {1,2};
    // int duration = 2;
    // int res = 0;
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     res += min(duration, v[i + 1] - v[i]);
    // }
    // res += duration;
    // cout << res;
    // Next Geater Elemenet I;
    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};
    vector<int> res;
    //we inster all elemnt with their indexin this unordered map of num2
    unordered_map<int, int> m;
    for (int i = 0; i < num2.size(); i++)
        m[num2[i]] = i;

    for (int i = 0; i < num1.size(); i++)
    {
        //we take index of that nums of num1 in num2 to start
        int start = m[num1[i]];
        int temp = -1;
        while (start < num2.size())
        {
            if (num2[start] > num1[i])
            {
                temp = num2[start];
                break;
            }
            start++;
        }
        res.push_back(temp);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ",";
    }
    return 0;
}