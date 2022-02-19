#include <iostream>
#include <vector>
#include <stack>

using namespace std;
// Previous Greater Elemnent
int main()
{
    vector<int> arr = {15, 10, 18, 12, 4, 6, 2, 8};
    stack<int> s;
    s.push(arr[0]);
    cout << "-1"
         << " ";
    for (int i = 1; i < arr.size(); i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int span = s.empty() ? -1 : s.top();
        cout << span << " ";
        s.push(arr[i]);
    }
    return 0;
}