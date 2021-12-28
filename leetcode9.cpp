#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    // Array Partition
    // vector<int> a = {1, 4, 3, 2};
    // // One thing we can do is we can sort the array and pair conscutyive elemnet and return result;
    // // method 2
    // int sum = 0;
    // sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i += 2)
    // {
    //     sum += min(a[i], a[i + 1]);
    // }
    // cout << sum << endl;
    // Reshape the Matrix
    int m = 4, n = 3;
    int mat[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int r = 3, c = 4;
    if (m * n != r * c)
        cout << "Error" << endl;

    int ans[r][c];
    int a = 0;
    int b = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a < r)
            {
                if (b < c)
                {
                    ans[a][b] = mat[i][j];
                    b++;
                }
                else
                {

                    b = 0;
                    a++;
                }
            }
        }
    }
    cout << "Origanal Matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << "reshaped matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}