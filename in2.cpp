#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solution(vector<int> arr, int n)
{
    int count = 0;
    if (n % 2 == 0)
    {
        int m2 = n / 2;
        int m1 = m2 - 1;
        arr[m1] = arr[m2];
        for (int i = m1 - 1; i >= 0; i--)
        {
            if (arr[i] != arr[i + 1] - 1)
            {
                count++;
                arr[i] = arr[i + 1] - 1;
            }
        }
        int j = m1 - 1;
        for (int i = m2 + 1; i < n; i++)
        {
            if (arr[i] != arr[j])
                count++;
            j--;
        }
        return count;
    }
    else{
        int m = n/2;
        for(int i=m-1;i>=)
    }
}
int main()
{
    int n = 6;
    vector<int> arr = {3, 3, 4, 4, 5, 5};
    // int i = 0, j = n - 1;
    // int count = 0;
    // while (i < n / 2 && j > n / 2)
    // {
    //     if (i == 0 && j == n - 1)
    //     {
    //         if (arr[i] >= arr[i + 1])
    //         {
    //             arr[i] = arr[i + 1] - 1;
    //             count++;
    //         }
    //         if (arr[i] != arr[j])
    //         {
    //             arr[j] = arr[i];
    //             count++;
    //         }
    //         i++;
    //         j--;
    //         // cout << i << " " << arr[i] << " " << j << " " << arr[j] << " " << count << endl;
    //     }
    //     else
    //     {
    //         if (arr[i] >= arr[i + 1])
    //         {
    //             arr[i] = arr[i + 1] - 1;
    //             count++;
    //             i++;
    //             // cout << i << " " << arr[i] << endl;
    //         }
    //         if (arr[j] >= arr[j - 1])
    //         {
    //             arr[j] = arr[j - 1] - 1;
    //             count++;
    //             j--;
    //             // cout << j << " " << arr[j] << endl;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    // cout << count;
    return 0;
}
