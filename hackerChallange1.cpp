#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int hourglass(vector<vector<int>> arr)
{
    int sum = 0;
    int result = INT_MIN;
    int flag = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            sum = arr[i][j] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] +
                  arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            if (flag == 1)
            {
                result = sum;
                flag = 0;
            }
            if (result < sum)
            {
                result = sum;
            }
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> array(6);
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            cin >> array[row][col];
        }
    }
    int answer = hourglass(array);
    cout << answer;
    return 0;
}