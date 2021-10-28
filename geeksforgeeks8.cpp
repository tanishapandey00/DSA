#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Question:-  Given n ranges, find the maximum appearing eleent in the range;
//  I/P :- l[1,2,5,15],R[5,8,7,18]
// O/P :- 5

int max_occureance(int a[], int b[], int m)
{
    int res[1000];
    for (int i = 0; i < m; i++)
    {
        res[a[i]] += 1;
        res[b[i] + 1]--;
    }
    int max = res[0], ans = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (max < res[i])
        {
            max = res[i];
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int m;
    cin >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    return 0;
}