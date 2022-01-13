#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
bool checkValid(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    bool flag1 = true, flag2 = true;
    // unordered_set<int> s1;
    // unordered_set<int> s2;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> s1;
        for (int j = 0; j < n; j++)
            s1.insert(matrix[i][j]);
        if (s1.size() != n)
            flag1 = false;
    }
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> s2;
        for (int j = 0; j < n; j++)
            s2.insert(matrix[j][i]);
        if (s2.size() != n)
            flag2 = false;
    }
    if ((flag1 = true) && (flag2 = true))
        return true;
    else
        return false;
}
int main()
{
    {
    }
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 2, 3}, {1, 2, 3}};
    if (checkValid(matrix) == true)
        cout << "Valid Matrix" << endl;
    else
        cout << "Invalid matrix" << endl;
    return 0;
}