#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int row, col;
    cin>>row>>col;

    vector <vector<int>> v;
    v.resize(col,vector<int>(row));

    //v = {{1,2,3}, {4,5,6}, {7,8,9}}; 

    /** input from use **/
    for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
          cin>>v[i][j];
       }
    }

    for(int i=0;i<row; i++)
    {
       for(int j=0;j<col;j++)
       {
          cout<<v[i][j]<<" ";
       }
    }
    return 0;

}