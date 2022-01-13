#include <iostream>
#include <string>
#include <vector>
using namespace std;
int countnegative(vector<int> arr, int size)
{
    int low = 0, high = size - 1;
    if (arr[0] < 0)
        return size;
    if (arr[size - 1] > 0)
        return 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < 0)
        {
            if (mid == 0 || arr[mid - 1] >= 0)
                return size - mid;
            else
                high = mid - 1;
        }
        else
        {
            if (mid == size - 1 || arr[mid + 1] >= 0)
                return size - mid;
            else
                low = mid + 1;
        }
    }
    return 0;
}
int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    int i=0;
    while(i<grid.size()){
        count += countnegative(grid[i], grid[i].size());
        i++;
    }
    // for (int i = 0; i < grid.size(); i++)
    // {

    //     count += countnegative(grid[i], grid[i].size());
    // }
    count-=countnegative(grid[grid.size()-1],grid[grid.size()-1].size());
    return count;
}
int main()
{
    vector<vector<int>> grid = {{-1,-2},{1,-1}};
    cout << countNegatives(grid);
    return 0;
}