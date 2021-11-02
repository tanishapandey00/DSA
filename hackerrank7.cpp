#include <bits/stdc++.h>

using namespace std;
//Jumping on clouds unsolved
int jumpingOnClouds(int c[],int size) {
int jumps=0;
int i=0;
while(i<size){
   if(c[i]==0||c[i+1]==1){
           i=i+2;
   }
   else{
           jumps++;
           i=i+1;
   }    
}
return jumps;
}

int main(){
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++) cin>>c[i];
    cout<<jumpingOnClouds(c,n)<<endl;
    return 0;
}
