#include <iostream>
#include <algorithm>
using namespace std;
// Question :- Median of two sorted array
//  a[] = {10,20,30,40,50} ,b[] = {5,15,25,35,45}
// Answer:- 27.5 //{5,10,15,20,25,30,35,40,45,50}
// m=n-1 if m is odd then median is equal to m/2+m/2+1
//      if m is even then median is equal to m/2;
// Method 1
double naive_median(int a[], int b[], int s1, int s2)
{
    int temp[s1 + s2];
    for (int i = 0; i < s1 + s2; i++)
    {
        if (i < s1)
            temp[i] = a[i];
        if (i >= s1)
            temp[i] = b[i - s1];
    }
    int n = s1 + s2;
    sort(temp, temp + n);
    for (int i = 0; i < n; i++)
    {
        if ((n - 1) % 2 == 0)
        {
            return double(temp[(n - 1) / 2] / 2);
        }
        else
        {
            return double((temp[(n - 1) / 2] + temp[(n - 1) / 2 + 1]) / 2);
        }
    }
    return -1;
}
// Method 2 using binary search
// we will assume a1<=a2 time complexity O(log s1);
int main()
{
    int s1, s2;
    cin >> s1 >> s2;
    int a[s1], b[s2];
    for (int i = 0; i < s1; i++)
        cin >> a[i];
    for (int i = 0; i < s2; i++)
        cin >> b[i];
    cout << "Median is equal to " << naive_median(a, b, s1, s2) << endl;
    return 0;
}
