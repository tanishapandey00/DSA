#include <iostream>
#include <vector>
using namespace std;
// Island Parimeter Problem
int main()
{
    int row = 4, col = 4;
    int grid[row][col] = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> grid[i][j];
    //     }
    // }
    int res = 0, rep = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 1)
            {
                res++;
                if ((i != 0 && grid[i - 1][j] == 1) || (i != 0 && grid[i + 1][j] == 1))
                    rep++;
                if ((j != 0 && grid[i][j - 1] == 1) || (j != 0 && grid[i][j + 1] == 1))
                    rep++;
            }
        }
    }
    cout << "res = " << res << endl;
    cout << "rep = " << rep << endl;
    cout << "parimeter = " << (4 * res) - (2 * rep) << endl;
    return 0;
}