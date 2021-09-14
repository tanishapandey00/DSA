#include <iostream>
using namespace std;

void left_rotation_one(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}
void left_rotation(int arr[], int no_of_rotations, int size)
{
    for (int i = 0; i < no_of_rotations; i++)
    {
        left_rotation_one(arr, size);
    }
}
void right_rotaion_by_one(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void rigth_rotation(int arr[], int no_of_rotations, int size){
    for(int i=0;i<no_of_rotations;i++){
      right_rotaion_by_one(arr,size);  
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int no_of_rotation;
    cin >> no_of_rotation;
    //right_rotaion_by_one(arr,size);
    //left_rotation_one(arr,size);
    //left_rotation(arr, no_of_rotation, size);
    rigth_rotation(arr, no_of_rotation, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
