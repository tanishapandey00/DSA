#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n = 8;
    int arr[n] = {1,0,2,3,0,4,5,0};
    //Duplicate zeros
    //Method 1
    // int sol[n];
    // int i = 0, j = 0;
    // while (i < n && j < n)
    // {
    //     if (arr[i] != 0)
    //     {
    //         sol[j] = arr[i];
    //         i++, j++;
    //     }
    //     else
    //     {
    //         sol[j] = 0;
    //         sol[j + 1] = 0;
    //         j += 2;
    //         i++;
    //         ;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    //     cout << sol[i] << " ";
    //Method 2;
    // int i = 0;
    // while (i < n)
    // {
    //     if (arr[i] != 0)
    //         i++;
    //     else
    //     {
    //         int j = n - 1;
    //         while (j > i + 1)
    //         {
    //             arr[j] = arr[j - 1];
    //             j--;
    //         }
    //         arr[j] = 0;
    //         i += 2;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    int a=10;
    
    cout<<a%10<<" "<<a/10;
    return 0;
}