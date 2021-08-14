#include <iostream>
#include<limits>
using namespace std;
//Pascal's Triangle
void pascal(int n)
{
    int pascal = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                pascal = 1;
            }
            else
            {
                pascal = pascal * (i - j + 1) / j;
            }
            cout << pascal << " ";
        }
        cout << endl;
    }
}
int fubnacciRecc(int n)
{
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fubnacciRecc(n) + fubnacciRecc(n - 1);
    }
    
}
int memory[1000];
int FubMem(int n){
if(n<=1){
    memory[n]=n;
    return n;
}
else{
    if(memory[n-1]==-1){
        memory[n-1]=FubMem(n-1);
    }
    if(memory[n-2]==-1){
        memory[n-2]=FubMem(n-2);
    }
    memory[n]=memory[n-1] +memory[n-2];
    return memory[n];
}
}
int main()
{
    int n;
    cin >> n;
    //pascal(n);
    //cout << fubnacciRecc(n) ;
    for(int i=0;i<1000;i++){
        memory[n]=-1;
    }
    for(int i=0;i<=n;i++){
        cout<<FubMem(i)<<" ";
    }
    return 0;
}