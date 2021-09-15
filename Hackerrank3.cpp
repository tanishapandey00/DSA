#include <bits/stdc++.h>

using namespace std;

//PlusMinus

void plusMinus(int arr[], int n)
{
    int pe = 0, ne = 0, zo = 0;
    vector<double> ratio;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ne++;
        }
        if (arr[i] > 0)
        {
            pe++;
        }
        if (arr[i] == 0)
        {
            zo++;
        }
    }
    cout << fixed;
    cout << setprecision(1);
    double size_arr = n;
    double pr, nr, zr;
    pr = pe / size_arr;
    nr = ne / size_arr;
    zr = zo / size_arr;
    ratio.push_back(pr);
    ratio.push_back(nr);
    ratio.push_back(zr);
    for (int i = 0; i < ratio.size(); i++)
    {
        cout << fixed;
        cout << setprecision(6);
        cout << ratio[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    plusMinus(array, n);
    return 0;
}