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
int main()
{
    // Here we are creating 3 simple nodes linked to null
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    // Linking these nodes creating 3 node linked list
    head->next = temp1;
    temp1->next = temp2;
    return 0;
}