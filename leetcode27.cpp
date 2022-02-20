#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// Remove All Adjacent Duplicates In String
/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.*/
int main()
{
    string s = "ahggtd";
    stack<char> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (st.empty() == true)
            st.push(s[i]);
        else
        {
            if (st.top() != s[i])
                st.push(s[i]);
            else
                st.pop();
        }
    }
    string ans = "";
    while (st.empty() == false)
    {
        ans.push_back(st.top());
        st.pop();
    }
    for (auto a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}