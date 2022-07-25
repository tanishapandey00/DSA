#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N = 5, M = 1, H = 4;
    vector<int> arr = {1, 2, 3, 1, 3};
    int tH = M * H;
    int i;
    for (i = N - 1; i > 0; i--)
    {
        if (tH > 0)
        {
            tH -= arr[i];
            // cout << i << " " << tH << endl;
        }
        else
            break;
    }
    cout << i;
    return 0;
}