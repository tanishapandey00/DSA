// Doubly linked list
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
// Insert at Begning in a Doubly Linked List
Node *insertB(Node *head, int data)
{
    Node *curr = new Node(data);
    curr->next = head;
    if (head != NULL)
        head->prev = curr;
    return curr;
}
// Insert at End in a Doubbly Linked List
Node *insertE(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}
// Reverse doubly Linked list
Node *Reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}
// Delete fisrt Node of Doubly Linked List
Node *deleteF(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        head = head->next;
        head->prev = NULL;
        delete curr;
        return head;
    }
}
// Delete Last node of Doubly Linked list
Node *deleteL(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->prev->next = NULL;
        delete curr;
        return head;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = Reverse(head);
    return 0;
}