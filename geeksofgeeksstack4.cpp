#include <iostream>
#include <stack>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
class Stack
{
    stack<int> s;
    int min;

public:
    Stack()
    {
        min = INT_MAX;
    }
    void push(int x)
    {
        if (s.empty())
        {
            min = x;
            s.push(x);
        }
        else if (x <= min)
        {
            s.push(2 * x - min);
            min = x;
        }
        else
        {
            s.push(x);
        }
    }
    int pop()
    {
        int t = s.top();
        s.pop();
        if (t <= min)
        {
            int res = min;
            min = 2 * min - t;
            return res;
        }
        else
            return t;
    }
    int peek()
    {
        int t = s.top();
        if (t <= min)
            return min;
        else
            return t;
    }
    int getmin()
    {
        return min;
    }
};
// Min Stack with get,min Function
int main()
{

    return 0;
}