#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// Marge Overplapping Intervals;
// Input : {{1,3},{2,4},{5,7},{6,8}}
// Output : {{1,4},{5,8}}
/*To check wheather two pairs are overlaping or not we have two options
1) we can take larger value of first and check whter it line int other interval or not
2) take smaller value of second one and check wheateher it lie on other interval or not */
bool overlap(pair<int, int> p1, pair<int, int> p2)
{
    bool overlap = false;
    int larger = max(p1.first, p2.first);
    if ((larger >= p2.first && larger < p2.second) || (larger >= p1.first && larger < p1.second))
        overlap = true;
    return overlap;
}

// Approach that we can take
/*1.We sort the array
  2.we check the adjecent elements wheather they overlap or not
  if they overlap we overlap them and check next if not we move on*/
void marge_pair(pair<int, int> arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].second >= arr[i].first)
        {
            arr[res].second = max(arr[res].second, arr[i].second);
            arr[res].first = min(arr[res].first, arr[i].first);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    pair<int, int> arr[n]; // Array of Pairs
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    
    return 0;
}