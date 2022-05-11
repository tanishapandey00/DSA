#include <iostream>
using namespace std;
// Swap Node of linkedlist in pairs
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
Node *SwapPaira(Node *head)
{
    if (head == NULL)
        return NULL;
    else if (head->next == NULL)
        return head;
    Node *dummy = new Node(-1);
    dummy->next = head;
    Node *prev = dummy;
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev = curr;
        curr = curr->next;
    }
    return dummy->next;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    return 0;
}