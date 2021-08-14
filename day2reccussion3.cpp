#include<iostream>
using namespace std;
//Combination by Reccusion method
int combination(int n, int r){
    if(r==0 || n== r){
        return 1;
    }
    else{
        return combination(n-1 , r-1) + combination(n-1 , r);
    }
}
//Combination through memorization method
//Tower of hanot
void tower(int n, char a,char b,char c){
if(n>0){
    tower(n-1,a,c,b);
    cout<<"Move from "<<a<<" to "<<c<<endl;
    tower(n-1,b,a,c);
}
}
int main(){
    int n,r;
    cin>>n;
    //cout<<combination(n,r);
    //tower(n,'A','B','C');
    return 0;
}