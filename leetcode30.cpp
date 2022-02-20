#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
// Make The String Great
/*Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.*/
int main()
{
    string s = "leEeetcode";
    string ans;
    int i = 0;
    while (i < s.length())
    {
        if ((int(s[i]) == int(s[i + 1]) + 32) || (int(s[i]) + 32 == int(s[i + 1])))
        {
            i + 2;
        }
        else
        {
            ans.push_back(s[i]);
            i++;
        }
    }
    for (auto a : ans)
        cout << a;
    cout << endl;
    return 0;
}