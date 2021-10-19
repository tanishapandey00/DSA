#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
   
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        //Transposing mattrix

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    break;
                }
                else
                {
                    swap(arr[i][j], arr[j][i]);
                }
            }
        }
        //After Swaping
        cout << "matrix after transposing" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        //matrix multiplication
        
    }
    else
    {
        cout << "martix are always square" << endl;
    }
    return 0;
}