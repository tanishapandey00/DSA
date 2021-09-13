#include<iostream>
#include<climits>
using namespace std;
//Method 1 by Sorting the array time complexity 0(NlogN)
//Method 1 using min/max Heap max heap time complexity O(N + klogN) 
//                            min heap time complexity O(N + (N-k+1)log(N-k+1))
//using Quickselect Algorithm 


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    return 0;
}