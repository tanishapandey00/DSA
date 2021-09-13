#include <iostream>
#include <string>
using namespace std;

int main()
{
    //string str1; //Declearing String
    //string str2 = "Hello";
    //string str3 = {'H', 'E', 'L', 'L', 'O', '\0'};
    //string str4 = new string("Hello"); //check whether Right or wrong
    //string str6("HEllo");
    //string str7(str2);//Through copy constructor//
    //cout << str3;
    string str = "Hello";
    //str  NULL , str.clear(); , str.erase();  to clear the string
    // str.empty() to check wheather string if filled or empty;
    //Append
    str.append("world");
    str.insert(str.length() - 1, "Tanisha");
    //comparing string
    cout << str << endl;
    // Checkinmg whether a perticular word exist on string or not
    //we can use find function
    string str1 = "String function testing";
    string str3 = "test";
    int index = str1.find("test");
    for (int i = index; i < index + str3.length(); i++)
    {
        cout << str1[i];
    }
    cout<<endl;
    index = str1.find("test", index + 1);
    cout << index;
    cout<<endl;
    string str4 = "Hello World I am string";
    str4.erase(6,str4.length()-6);
    cout<<str4;
    return 0;
}
//Notes
//1// size_t  it is data type whics stores size of object
//2// sizeof() returns the value of size_t type
//3// string::npos //it is maximum value of size_t
//4// its value depend upon compiler to compiler that whta would be its int converted value