#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <climits>
using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {2, 2, 3, 1};
    // Missing numbers
    /*long int total = (n * n + n) / 2;
    for (int i = 0; i < n; i++)
    {
        total -= nums[i];
    }
    cout << total;*/
    // Move Zeros
    // int i = 0, j = 0;
    // while (j < n)
    // {
    //     if (arr[j] == 0)
    //         j++;
    //     else
    //     {
    //         if (arr[i] == 0)
    //         {
    //             swap(arr[i], arr[j]);
    //             i++, j++;
    //         }
    //         else
    //         {
    //             i++, j++;
    //         }
    //     }
    // }
    // Third Maximum Number
    // For this Question we will use min heap this solution will only work when all elemnets are distint elemnets
    // priority_queue<int, vector<int>, greater<int>> s;
    // for (int i = 0; i < n; i++)
    // {
    //     s.push(arr[i]);
    //     if (s.size() > 3)
    //     {
    //         s.pop();
    //         continue;
    //     }
    // }
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    if (n == 1)
    {
        cout << arr[0];
    }
    else if (n == 2)
    {
        cout << max(arr[0], arr[1]);
    }
    long int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN;
    else
    {
        for (int i : arr)
        {
            if (i == m1 || i == m2 || i == m3)
                continue;
            if (i > m1)
            {
                m3 = m2;
                m2 = m1;
                m1 = i;
            }
            else if (i > m2)
            {
                m3 = m2;
                m2 = i;
            }
            else if (i > m3)
            {
                m3 = i;
            }
        }
    }
    if (m3 == INT_MIN)
    {
        cout << m1;
    }
    else
    {
        cout << m3;
    }
    return 0;
}