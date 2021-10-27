#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Question :- Given an array of integer, find if it has an equilibrium point.
// I/P : arr[] ={3,4,8,-9,20,6}
//  O/P : Yes
// Equlibrium point is a point such that sum of element before it is equal to sum of element after it;
void solution(int arr[],int n,int k){
vector<int> res;
    res[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        res[i] = res[i - 1] + arr[i];
    }
   if(res[k-1]==res[n-1]-res[k]){
       cout<<"yes";
   }
   else{
       cout<<"No";
   }
}
int main()
{
    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}
