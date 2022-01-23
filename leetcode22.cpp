#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    int n = arr.size();
    int a = (5 * n / 100);
    double sum = 0;
    for (int i = a; i < n - a; i++)
    {
        sum += arr[i];
    }
    cout << n << " " << a << " " << sum / (n - 2 * a);
    return 0;
}