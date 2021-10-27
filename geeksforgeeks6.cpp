#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Prefix Sum Techqunique
vector<int> Prefix_Sum(vector<int> a)
{
    vector<int> res;
    res[0] = a[0];
    cout << "res = ";
    for (int i = 1; i < a.size(); i++)
    {
        res[i] = res[i - 1] + a[i];
        cout << res[i] << " ";
    }
    cout << endl;
    return res;
}
void sum(vector<int> a, int l, int r)
{
    vector<int> preffix = Prefix_Sum(a);
    int sum = 0;
    if (l != 0)
    {
        sum = preffix[r] - preffix[l - 1];
    }
    else
    {
        sum = preffix[r];
    }

    cout << sum << " ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sum(a, 0, 2);
    sum(a, 1, 3);
    sum(a, 2, 6);
    return 0;
}