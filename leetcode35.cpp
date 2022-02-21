#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
// Time Needed to Buy Tickets
/*There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person at position k (0-indexed) to finish buying tickets.



Example 1:

Input: tickets = [2,3,2], k = 2
Output: 6*/
int main()
{
    vector<int> tickets = {2, 3, 2};
    int k = 2;
    queue<int> q;
    for (int i = 0; i < tickets.size(); i++)
        q.push(i);
    int c = 0;
    while (1)
    {
        if (tickets[q.front()] == 0)
            q.pop();
        else
        {
            tickets[q.front()] -= 1;
            c++;
            if (q.front() == k && tickets[k] == 0)
            {
                break;
            }
            q.push(q.front());
            q.pop();
        }
    }
    cout << c << endl;
    return 0;
}