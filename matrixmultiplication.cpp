#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void get(int **arr, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void print(int **arr, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1][n2], B[n2][n3];
    get((int **)A, n1, n2);
    // print((int **)A, n1, n2);
    get((int **)B, n2, n3);
    // print((int **)B, n2, n3);
    int Ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                Ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // print((int **)Ans, n1, n3);
    for(int i=0;i<n1;i++){
        for(int j=0; j<n3;j++){
            cout<<Ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}