#include <iostream>
using namespace std;
//Moving All the negative term to left
//initialy we are comapring with 0 index elemnent
void move_negative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
//rotating array right
void rotate_right(int arr[], int n)
{  
        int temp = arr[n-1];
        for (int i = n - 1; i >= 0; i--)
        {   
            arr[i] = arr[i-1];
        }
        arr[0]= temp;
    
}
//find Largest sum contiguous Subarray

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
    //Moving All the negative term to left
    /*move_negative(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " , ";
    }

    cout << endl;*/
    //Rotating array by one element
    rotate_right(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " , ";
    }

    cout << endl;
    return 0;
}