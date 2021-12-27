#include <iostream>
#include <vector>
using namespace std;
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
int main()
{
    int n = 5;
    vector<vector<int>> pascal;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         if ((col == 0 || row == 0) || (col == row))
    //         {
    //             cout << "1"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << factorial(row) / (factorial(row - col) * factorial(col)) << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            if(col==0 || col == row){
                pascal[row][col] = 1;
            }
            else{
                pascal[row][col] = pascal[row-1][col-1]+pascal[row][col-1];
            }
        }
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<pascal[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}