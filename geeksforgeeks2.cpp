#include<iostream>
using namespace std;
//Maximum Consecutive 1's
int max_consecutive(int arr[],int n){
    int maximum=-1,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            maximum=max(maximum,count);
            count=0;
        }
    }
    maximum=max(maximum,count);
    return maximum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_consecutive(arr,n)<<endl;
    return 0;
}