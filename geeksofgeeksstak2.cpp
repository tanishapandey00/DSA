#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// Stack Stock Span Problem
//  We will simply use stack and we will store the index of lasy greatest element ont the stack
// then we will simply do index of current elemnt  - index of closest greater elemnet on left.
int main()
{
    stack<int> s;
    vector<int> arr = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
    s.push(0);
    cout << "1"
         << " ";
    for (int i = 1; i < arr.size(); i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " ";
        s.push(i);
    }
    cout << endl;
    return 0;
}