//Singliy Linked List
#include <iostream>
using namespace std;
// Creating Simple Linked List
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// traversing the linked list
void printList1(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
    cout << endl;
}
void printList2(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// recursive Traversal of Singly Linked List
void Rprint(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    Rprint(head->next);
}
// Insert at Begin Function
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
// Insert at End
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x); // we created a temp node and assigned it the given value
    if (head == NULL)
        return temp;   // If head node is empty we retur temp
    Node *curr = head; // else we create a node current and point it to head
    // we move current until we reach to position where curr->next is NULL
    while (curr->next != NULL)
        curr = curr->next;
    // when we reach to a point where curr->next is NULL we add the temp node to curr->next and return head;
    curr->next = temp;
    return head;
}
// Delete first Node of the Singly linked list
Node *DeleteFirst(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}
// Delete Last Node of the Singly Linked list
Node *Deletelast(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;
    delete (curr->next);
    curr->next = NULL;
    return head;
}
// Insert an Element at given position in singly linked list
Node *insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
        curr = curr->next;
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
// Search in a Singly Linked list
// Itrative Approach
int SearchI(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}
// Recursive Approach
int SearchR(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    else
    {
        int res = SearchR(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
    }
}
int main()
{
    // Here we are creating 3 simple nodes linked to null
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    // Linking these nodes creating 3 node linked list
    head->next = temp1;
    temp1->next = temp2;
    // Both function will give the same result
    printList1(head);

    Rprint(head);
    cout << endl;
    head = insertBegin(head, 5);
    printList2(head);
    head = insertEnd(head, 78);
    printList2(head);
    head = DeleteFirst(head);
    printList2(head);
    return 0;
}