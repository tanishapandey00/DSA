#include <iostream>
#include <algorithm>
using namespace std;

// Cycle Sort Algorithm
// Input 20 40 50 10 30
/*
1.First we count the smaller elements to every elemt and position of element is number of
smaller elemnet - 1 we process elemnts in form of cycle
*/
// This one is only for disting elemnets
void cycle_sort(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
                pos++;
        }
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}
// Method 2 of implemneting this function
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    return 0;
}