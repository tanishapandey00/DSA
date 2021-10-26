#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int nonDivisibleSubset(int k, vector<int> s) {
vector<int>sub;
vector<int>size;
for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
                if((s[i]+s[j])%k!=0)
                {       
                auto result1 = find(sub.begin(),sub.end(),s[i]);
                auto result2 = find(sub.begin(),sub.end(),s[j]);
                if(result1==end(sub)) sub.push_back(s[i]);
                if(result2==end(sub)) sub.push_back(s[j]);
                }
                else
                {
                        continue;
                }
        }
        size.push_back(sub.size());
        sub.clear();  
}
int max=0;
for(int i=0;i<size.size();i++){
        if(max>size[i]){
                max=size[i];
        }
}
return max;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>s;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<nonDivisibleSubset( k, s);
   return 0;
}
