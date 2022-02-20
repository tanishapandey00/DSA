#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> prices = {5,4,10,2,6,1,1,1,9,1};
    stack<int> st;
    int m = prices[prices.size() - 1];
    st.push(prices[prices.size() - 1]);
    for (int i = prices.size() - 2; i >= 0; i--)
    {
        if (prices[i] >= m)
        {
            if (prices[i] >= st.top())
            {
                int temp = st.top();
                st.push(prices[i]);
                m = min(m, prices[i]);
                prices[i] = prices[i] - temp;
            }
            else
            {
                st.push(prices[i]);
                prices[i] = prices[i] - m;
            }
        }
        else
        {
            st.push(prices[i]);
            m = min(m, prices[i]);
        }
    }
    for (auto a : prices)
        cout << a << ",";
    cout << endl;
    return 0;
}