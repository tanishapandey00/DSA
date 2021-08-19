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
    //Default constructor
    Array()
    {
        size = 10;
        array = new int[size];
        used_size = 5;
        for (int i = 0; i < used_size; i++)
        {
            array[i] = i + 1;
        }
    }
    //contructor with inputs
    Array(int size, int used_size)
    {
        this->size = size;
        array = new int[size];
        this->used_size = used_size;
    }
    //entering elemnts of array
    void get_elements(){
        for(int i=0;i<used_size;i++){
            cin>>array[i];
        }
    }
    //Printing array
    void printElement()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << array[i] << " , ";
        }
        cout << endl;
    }
    //simple Linear Search
    int linearSearch(int key)
    {
        for (int i = 0; i < used_size; i++)
        {
            if (array[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
    //sum of elements on array
    int Sum_of_elements()
    {
        int sum = 0;
        for (int i = 0; i < used_size; i++)
        {
            sum = sum + array[i];
        }
        return sum;
    }
    //sum of even index elements
    int sum_even_index_elements()
    {
        int sum = 0;
        for (int i = 0; i < used_size; i++)
        {
            if (i == 0)
            {
                sum = -1;
            }
            if (i % 2 == 0)
            {
                sum = sum + array[i];
            }
            else
            {
                continue;
            }
        }
        return sum;
    }
    //sum of odd idex elements
    int sum_odd_index_elements()
    {
        int sum = 0;
        for (int i = 0; i < used_size; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + array[i];
            }
            else
            {
                continue;
            }
        }
        return sum;
    }
    //Max and Min elemnts of an array
    void min_max_element()
    {
        int max = INT_MIN;
        int index_max,index_min;
        int min = INT_MAX;
        for (int i = 0; i < used_size; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
                index_max =i;
            }
            if (array[i] < min)
            {
                min = array[i];
                index_min =i;
            }
        }
        cout<<"Maximun element of array is "<<max<<" at index "<<index_max<<endl;
        cout<<"Minimum element of array is "<<min<<" at index "<<index_min<<endl;
    }
};
int main()
{
    Array *array1;
    array1 = new Array();
    //array1->printElement();
    Array *array2;
    int size , used_size;
    cin>>size>>used_size;
    array2 =new Array(size,used_size);
    cout<<"Enter elements of array";
    array2->get_elements();
    array2->printElement();
    int key;
    cin>>key;
    cout<<key<<"is at index "<<array2->linearSearch(key)<<endl;
    cout<<"Sum of elements on array are"<<array2->Sum_of_elements()<<endl;
    cout<<"Sum of elements on even index is = "<<array2->sum_even_index_elements()<<endl;
    cout<<"Sum of elements on even index is = "<<array2->sum_odd_index_elements()<<endl;
    int even_sum, odd_sum, diff;
    even_sum = array2->sum_even_index_elements();
    odd_sum = array2->sum_odd_index_elements();
    diff = even_sum - odd_sum;
    cout << "Difference of sum at even index elements and sum at odd index elements is = " << diff << endl;
    array2->min_max_element();

    return 0;
}