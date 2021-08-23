#include <iostream>
#include <vector>
using namespace std;
// algorithum for For N/3
vector<int> majority1(vector<int> v)
{
    int element1 = v[0];
    int count1 = 1;
    int element2 = 0;
    int count2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (element1 == v[i])
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            element1 = v[i];
            count1 = 1;
        }
        else if (count2 == 0)
        {
            element2 = v[i];
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = count2 = 0;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element1)
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
        
        if (count1 > v.size() / 3)
        {
            ans.push_back(element1);
        }
        if (count2 > v.size() / 3)
        {
            ans.push_back(element2);
        }
    }
   return ans;
}
//Algorithm for N/2
vector <int> majority2(vector <int> v){
    int element=0;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(count == 0){
            element = v[i];
        }
        else if(v[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    count=0;
    vector<int> ans;
    for(int i=0;i<v.size();i++){
        if(v[i]==element){
            count++;
        }
        if(count>v.size()/2){
            ans.push_back(element);
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter length of Array"<<endl;
    cin >> n;
    vector<int> v;
    int x;
    cout<<"Enter Elemnets of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
   vector<int> ans1;
    ans1 = majority1(v);
    if (ans1.size() == 0)
    {
        cout << "No majority element" << endl;
    }
    else
    {
        for (int i = 0; i < ans1.size(); i++)
        {
            cout << ans1[i]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans2;
    ans2 = majority2(v);
    if (ans2.size() == 0)
    {
        cout << "No majority element" << endl;
    }
    else
    {
        for (int i = 0; i < ans2.size(); i++)
        {
            cout << ans2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}