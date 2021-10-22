#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
                cin>>arr[i];
        }
         int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr+n);
        reverse(arr,arr+n);
        while(n>0){
                int k=arr[n-1];
                for(int i=n-1;i>=0;i--){
                        arr[i]-=k;
                }
                cout<<n<<endl;
                while(n>0&& !arr[n-1]) n--;
        }
        return 0;
}