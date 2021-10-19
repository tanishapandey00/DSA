#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string ToStr( char c ) {
   return string( 1, c );
}
int main(){
        string s,t;
        int k;
        getline(cin,s);
        getline(cin,t);
        cin>>k;
        while(s.empty()||s==t){
                s.pop_back();
                k--;
        }
        int i=0,j=0;
        while(k>0){
                if(s[i]==t[j]){
                        i++;j++;
                }
                else{
                        char a=t[j];
                        s.insert(i,ToStr(a));
                        i++,j++,k--;
                }
        }
        if(s==t){
                cout<<"Yes"<<endl;
        }
        else{
                cout<<"No"<<endl;
        }
        return 0;
}
