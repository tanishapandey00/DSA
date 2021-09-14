#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout<< array[i][j];
        }
        cout<<endl;
    }
    return 0;
}