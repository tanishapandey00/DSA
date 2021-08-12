#include <iostream>
using namespace std;
void Greater(int a,int b){
if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (a ==b)
    {
        cout<< a<< " and "<<b<<" are Equal"<<endl;
    }
    
    else
    {
        cout << b << " is greater than " << a << endl;
    } 
}
void check(int a){
    if(a>=10 && a<=90){
        cout<<"This number is between 10 and 90"<<endl;
    }
    else{
        cout<<"This numver does not lie between 10 amd 90"<<endl;
    }
}
int greatest(int a, int b,int c ){
    if(a==b|| b==c || c==a){
        cout<<"Two number are equal"<<endl;
    }
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}


int main()
{
    int a, b,num,n1,n2,n3,num1,num2;
    //cin >> a >> b;
    //Greater(a,b);
    //cin>>num;
    //check(num);
    //cin>>n1>>n2>>n3;
    //cout<<"greatest number is"<<greatest(n1,n2,n3)<<endl;
    
    return 0;
}