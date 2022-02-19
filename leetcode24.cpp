#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
/* Build an Array With Stack Operations
You are given an array target and an integer n.

In each iteration, you will read a number from list = [1, 2, 3, ..., n].

Build the target array using the following operations:

"Push": Reads a new element from the beginning list, and pushes it in the array.
"Pop": Deletes the last element of the array.
If the target array is already built, stop reading more elements.
Return a list of the operations needed to build target. The test cases are generated so that the answer is unique.
*/
int main()
{
    vector<int> target = {1, 3};
    int n = 3;
    vector<string> list;
    int i = 1, j = 0;
    while (i <= n && j < target.size())
    {
        if (target[j] == i)
        {
            list.push_back("push");
            i++;
            j++;
        }
        else
        {
            list.push_back("push");
            list.push_back("pop");
            i++;
        }
    }
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << " ";
    cout << endl;
    return 0;
}