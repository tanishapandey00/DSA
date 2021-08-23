#include <iostream>
using namespace std;
class Array
{
private:
    int *array;
    int size;
    int used_size;

public:
    //Default construstor;
    Array()
    {
        size = 10;
        used_size = 5;
        array = new int[size];
    }
    //Constructor with values
    Array(int size, int used_size)
    {
        this->size = size;
        array = new int[size];
        this->used_size = used_size;
    }
    //Getting elements on array
    void get_element()
    {
        for (int i = 0; i < used_size; i++)
        {
            cin >> array[i];
        }
    }
    //Printing the array
    void print_array()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << array[i] << " , ";
        }
        cout << endl;
    }
    //linear Search with transposition
    int linear_transposition_search(int key)
    {
        for (int i = 0; i < used_size; i++)
        {
            if (array[i] == key)
            {
                if (i > 0)
                {
                    int temp = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = temp;
                    return i;
                }
                else
                {
                    return i;
                }
            }
        }
        return -1;
    }
    //Appending or Adding element on an array
    void Add_at_end(int element)
    {
        if (used_size < size)
        {
            array[used_size] = element;
            used_size++;
        }
        else
        {
            cout << "Array if already filled" << endl;
        }
    }
    //Adding element at a given index algorithm 1 (By shiftind element in index that we want to add)
    void Add_at_index_m1(int element, int index)
    {
        if (used_size < size)
        {
            for (int i = used_size; i >= index; i--)
            {
                array[i] = array[i - 1];
            }
            array[index] = element;
            used_size++;
        }

        else
        {
            cout << "Array if already filled" << endl;
        }
    }
    //Adding element at a given index algorithm 2(by swap elment at index with last index)
    void Add_at_index_m2(int element, int index)
    {
        if (used_size < size)
        {
            array[used_size] = array[index];
            array[index] = element;
            used_size++;
        }
        else
        {
            cout << "Array if already filled" << endl;
        }
    }
    //Adding element in sorted array when index is not given
    void Add_at_sorted_array(int element)
    {
        int start = 0;
        int end = used_size - 1;
        if (used_size < size)
        {
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (array[mid] >= element)
                {
                    for (int i = used_size; i >= mid; i--)
                    {
                        array[i] = array[i - 1];
                    }
                    array[mid] = element;
                    used_size++;
                }
                else if (array[mid] > element)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        else
        {
            cout << "Array is already filled" << endl;
        }
    }
    //Reverse elements of an Array Algorithm 1
    void reverse()
    {
        int n;
        n = used_size - 1;
        int i = 0;
        while (n != i)
        {
            int temp = array[i];
            array[i] = array[n - i];
            array[n - i] = temp;
            i++;
        }
    }
    //Deleting last element
    void Del_last()
    {
        int last_index = used_size - 1;
        array[last_index] = NULL;
        used_size--;
    }
    //Deleting element from array if Exist
    void Del_element(int element)
    {
        int index;
        for (int i = 0; i < used_size; i++)
        {
            if (array[i] == element)
            {
                array[i] = NULL;
                index = i;
                break;
            }
            else
            {
                cout << "Element does not exist in Array" << endl;
            }
        }
        for (int i = index; i < used_size; i++)
        {
            array[i] = array[i + 1];
        }
        used_size--;
    }
    //Deleting element form index
    void Del_ele_in_index(int index)
    {
        if (index < used_size)
        {
            for (int i = index; i < used_size; i++)
            {
                array[i] = array[i + 1];
            }
        }
        else{
            cout<<"Wrong Input"<<endl;
        }
        used_size--;
    }
};
int main()
{
    int size, used_size;
    cout << "Enter size and used_size of your array" << endl;
    cin >> size >> used_size;
    Array *array1;
    array1 = new Array(size, used_size);
    cout << "Enter elements of your array" << endl;
    array1->get_element();
    array1->print_array();
    //int key;
    //cout << "Enter you key ";
    //cin >> key;
    //cout<<array1->linear_transposition_search(key)<<endl;
    //array1->print_array();
    int element, index;
    //cout << "Enter element you want to delete" << endl;
    //cin >> element;
    cout << "Enter the index you want to Delete" << endl;
    cin >> index;
    //cout << "Enter Element and index you want to add";
    //cin >> element >> index;
    //array1->Add_at_end(element);
    //array1->print_array();
    //array1->Add_at_index_m1(element,index);
    //array1->Add_at_index_m2(element, index);
    //array1->Add_at_sorted_array(element);
    //array1->reverse();
    //array1->Del_last();
    //array1->Del_element(element);
    array1->Del_ele_in_index(index);
    array1->print_array();
    return 0;
}