#include <iostream>
#include <climits>
using namespace std;
class Array
{
private:
    int *array;
    int size;
    int used_size;

public:
    //Construtctor for Creating Array
    Array()
    {
        this->size = size;
        array = new int[size];
        this->used_size = used_size;
    }
    Array(int size, int used_size)
    {
        this->size = size;
        array = new int[size];
        this->used_size = used_size;
    }
    //Taking Input to array
    void getelement()
    {
        for (int i = 0; i < used_size; i++)
        {
            cin >> array[i];
        }
    }
    //Printing an Array
    void printArray()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << array[i] << " , ";
        }
        cout << endl;
    }
    //Reversing array
    void reverse()
    {
        int n = used_size - 1;
        int i = 0;
        while (n != i)
        {
            int temp = array[i];
            array[i] = array[n - i];
            array[n - i] = temp;
            i++;
        }
    }
    //Maximum and minimum number in an arrray
    void min_max()
    {
        int max = INT_MIN;
        int min = INT_MAX;
        int index_max_ele, index_min_ele;
        for (int i = 0; i < used_size; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
                index_max_ele = i;
            }
            if (array[i] < min)
            {
                min = array[i];
                index_min_ele = i;
            }
        }
        cout << "Maximum element of this Array is " << max << " at index " << index_max_ele << endl;
        cout << "Minimum elemnet of this Array is " << min << " at index " << index_min_ele << endl;
    }
    //kth Min max element method one sort the array and find it
    //Kth min max element method two
    void Kth_min_max(int N)
    {
        int max_check = INT_MIN;
        int min_check = INT_MAX;
        int max_ele, min_ele;
        if (N < used_size)
        {
            for (int i = 0; i < used_size,N!=0; i++)
            {
             if(array[i]>max_check){
                 N--;
                 max_ele = array[i]; 
             }
              cout<<"Max = "<<max_ele<<" ";
            }
           
        }
    }
};
int main()
{
    int size, used_size;
    cin >> size >> used_size;
    Array *array1;
    array1 = new Array(size, used_size);
    array1->getelement();
    array1->printArray();
    // array1->reverse();
    // array1->printArray();
    // array1->min_max();
    int N;
    cin >> N;
    array1->Kth_min_max(N);
    return 0;
}