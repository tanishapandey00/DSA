#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Longest palindrom substring
// Using expand around center approsch
int expandcenter(string s, int l, int r)
{
    while (l >= 0 && r < s.length() && s[l] == s[r])
    {
        l--;
        r++;
    }
    return r - l - 1;
}
string longestpalindrom(string s)
{
    if (s.length() < 1)
        return "";
    int st = 0, en = 0,mx_len=1;
    for (int i = 0; i < s.length(); i++)
    {
        int len1 = expandcenter(s, i, i);
        int len2 = expandcenter(s, i, i + 1);
        int len = max(len1, len2);
        if (len > en - st)
        {
            st = i - (len - 1) / 2;
            en = i + len / 2;
            mx_len = len;
        }
    }
    cout << "st = " << st << " "
         << "en = " << en << endl;
    return s.substr(st,mx_len);
}

int main()
{
    string s = "ababd";
    cout << longestpalindrom(s) << endl;
    // cout << s.substr(7,3) << endl;
    return 0;
}