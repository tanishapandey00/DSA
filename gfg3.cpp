// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
bool abd(long long a)
{
    long long b = a / 10;
    if(abs(a-b)==1) return true;
    return false;
}
void getDigitDiff1AndLessK(vector<long long> arr, int n, long long k)
{
    vector<long long> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k && arr[i] > 9)
        {
           long long a = arr[i]/10;
            
        
        }
    }
}
int main()
{
    vector<long long> a = {7, 98, 56, 43, 45, 23, 12, 8};
    int n = 8, k = 54;
    getDigitDiff1AndLessK(a, n, k);
    return 0;
}
