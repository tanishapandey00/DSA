#include <iostream>
using namespace std;
double tylor(int x,int n){
    static double num=1, den=1, term;
    if(n==0){
        return 1;
    }
    else{
        term = tylor(x,n-1);   
        num*=x;
        den*=n;
        return (term + num/den);
    }
}
double tylorloop(int x,int n){
    double term=1, num=1,den=1;
    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        term+=(num/den);
    }
    return term;
}
double homen(double x,double n){
    static double term=1;
    if(n==0){
        return term;
    }
    else{
      term=1+(x/n*term);
      return homen(x,n-1);
    }
    
}
int main()
{
    double x, y;
    cin >> x>>y;
    cout<<tylor(x,y)<<endl;
    cout<<tylorloop(x,y)<<endl;
    cout<<homen(x,y)<<endl;
    return 0;
}