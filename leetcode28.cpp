#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// Final Prices With a Special Discount in a Shop
/*Given the array prices where prices[i] is the price of the ith item in a shop. There is a special discount for items in the shop, if you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all.

Return an array where the ith element is the final price you will pay for the ith item of the shop considering the special discount.*/
int main()
{
    vector<int> prices = {10, 1, 1, 6};
    for (int i = 0; i < prices.size(); i++)
    {
        int j = i + 1;
        int m = prices[i];
        while (j < prices.size())
        {
            m = min(m, prices[j]);
            if (prices[j] <= m)
            {
                prices[i] = prices[i] - m;
                break;
            }

            j++;
        }
    }
    for (auto a : prices)
        cout << a << " ";
    cout << endl;
    return 0;
}