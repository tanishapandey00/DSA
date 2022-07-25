#include <iostream>
#include <vector>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    cout << "grid[0][0] " << grid[0][0] << endl;
    if (grid[0][0] == 1)
        return 0;
    grid[0][0] = 1;
    cout << "grid[0][0] " << grid[0][0] << endl;
    for (int j = 1; j < n; j++)
    {
        // cout << "grid[0][j] " << j << " = " << grid[0][j] << endl;
        if (grid[0][j] != 1)
            grid[0][j] = grid[0][j - 1];
        else
            grid[0][j] = 0;
        cout << "grid[0][j] " << j << " = " << grid[0][j] << endl;
    }
    for (int i = 1; i < m; i++)
    {
        
        if (grid[i][0] != 1)
            grid[i][0] = grid[i - 1][0];
        else
            grid[i][0] = 0;
        cout << "grid[1][0] " << i << " = " << grid[i][0] << endl;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
           
            if (grid[i][j] != 1)
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            else
                grid[i][j] = 0;
            cout << "grid[i][j] " << i << j << " = " << grid[i][j] << endl;    
        }
    }
    return grid[m - 1][n - 1];
}
int main()
{
    vector<vector<int>> grid = {{
                                    0,
                                    0,
                                    0,
                                },
                                {0, 1, 0},
                                {0, 0, 0}};
    cout << endl;
    cout << uniquePathsWithObstacles(grid) << endl;
    cout << endl;
    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid[0].size(); j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
