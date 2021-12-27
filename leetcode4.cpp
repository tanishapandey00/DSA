#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
    // int n = 8;
    // vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};

    // unordered_set<int> s;
    // for (auto x : v)
    // {
    //     s.insert(x);
    // }
    // int i = 1;
    // while (i <= n)
    // {
    //     if (s.find(i) == s.end())
    //         cout << i << " ";
    //     i++;
    // }
    // Assign cokkies;
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};
    // Approach 1;
    // int findContentChildren(vector<int>& g, vector<int>& s) {
    int n1 = g.size();
    int n2 = s.size();
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    if (n2 == 0)
        return 0;
    int i = 0, j = 0, c = 0;
    while (i < n1 && j < n2)
    {
        if (g[i] <= s[j])
        {
            c++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << c;

    // Approach 2;

    return 0;
}