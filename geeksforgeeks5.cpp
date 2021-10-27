#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Question - Print m N-bonachii number Time completity O(m);
vector<int> N_bonacci(int n, int m)
{
    vector<int> a(m);
    int sum = 1;
    for (int i = 0; i < n-1; i++)
    {
        a.push_back(0);
    }
    a[n-1] =1;
    int start = 0;
    for (int j = n; j < m; j++)
    {
        a[j] = (sum);
        sum = sum + a[j] - a[start];
        start++;
        cout << endl;
    }
    return a;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> b;
    b = N_bonacci(n, m);
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}