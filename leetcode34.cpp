#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
// Number of Students Unable to Eat Lunch
/*The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:

If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
Otherwise, they will leave it and go to the queue's end.
This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i​​​​​​th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j​​​​​​th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.*/
int main()
{
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwichs = {0, 1, 0, 1};
    queue<int> stu;
    stack<int> san;
    for (auto s : students)
        stu.push(s);
    for (int i = sandwichs.size() - 1; i >= 0; i--)
        san.push(sandwichs[i]);
    int c = 0;
    while (stu.empty() == false)
    {
        if (stu.front() == san.top())
        {
            stu.pop();
            san.pop();
            c = 0;
        }
        else
        {
            int u = stu.front();
            stu.pop();
            stu.push(u);
            c++;
            if (c == stu.size())
                break;
        }
    }
    cout << stu.size() << endl;
    return 0;
}