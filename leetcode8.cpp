#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;
// Relative Ranks
int main()
{
    vector<int> score = {5, 4, 3, 2, 1};
    priority_queue<int> q(score.begin(), score.end());
    unordered_map<int, string> m;
    int i = 1;
    while (!q.empty())
    {
        if (i == 1)
        {
            m[q.top()] = "Gold Medel";
        }
        else if (i == 2)
        {
            m[q.top()] == "Silver Medel";
        }
        else if (i == 3)
        {
            m[q.top()] = "Bronze Medel";
        }
        else
        {
            m[q.top()] = to_string(i);
        }
        i++;
        q.pop();
    }
    vector<string> sol;
    for (auto x : score)
    {
        sol.push_back(m[x]);
    }
    for (auto x : sol)
    {
        cout << x << " , ";
    }
    return 0;
}