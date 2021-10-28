#include <iostream>
#include <algorithm>
using namespace std;
// Square root of a number
//  x=4 :- 2,x=14 :- 3
// Method 1 time complexity 0(sqrt(x));
int square_root_naive(int n)
{
    int i = 0;
    while (i * i <= n)
    {
        i++;
    }
    return (i - 1);
}
// Method 2 time complexity 0(log(x));
// We will use binary search approach in this question
int Square_Root(int x)
{
    int start = 1, end = x, ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    cout<<Square_Root(x);
    return 0;
}