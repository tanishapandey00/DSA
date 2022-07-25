#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sol(int E, vector<int> arr, int N)
{
    int ex = 0, j = N - 1, count = 0;
    sort(arr.begin(), arr.end());
    while (E > 0)
    {
        if (j < 0 && E > 0)
            return -1;
        else
        {
            if ((arr[j] <= E))
            {
                if (count != 2)
                {
                    ex++;
                    E -= arr[j];
                    count++;
                }
                else
                {
                    j--;
                    count = 0;
                }
            }
            else
            {
                j--;
            }
        }
    }
    return ex;
}
int main()
{
    int E = 2, N = 3;
    // cin >> E;
    // cin >> N;
    vector<int> arr = {1, 5, 2};
    // for (int i = 0; i < N; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << sol(E, arr, N);
    return 0;
}