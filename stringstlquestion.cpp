#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
bool stringCompare(string s1,string s2){
    if(s1.length()>s2.length()){
        return s1.length()>s2.length();
    }
    else{
        return s1<s2;
    }
}
int main()
{
    //give array of strings
    string str[] = {"vishal","vinayak","tiya","varun","kashish","somya","umang","ashwarya","Manisha"};
    sort(str,str+7,stringCompare);
    for(auto ele:str){
        cout<<ele<<" , ";
    }
    return 0;
}