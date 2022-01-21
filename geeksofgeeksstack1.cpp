#include<iostream>
#include<climits>
using namespace std;
//Creating Stack using Linked List
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next = NULL;
    }
};
class Stack{
    Node *head;
    int size;
    public:
    Stack(){
        head =NULL;
        size=0;
    }
    //Pushing data to our Stack
    void push(int x){
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    //Pop data to out stack
    int pop(){
        if(head == NULL) return INT_MAX;
        int res = head->data;
        Node *temp = head;
        head=head->next;
        delete(temp);
        size--;
        return res;
    }
    //Finding size of the stack
    int Size(){
        return size;
    }
    //Checking if the stack is empty or not
    bool isEmpty(){
        return (head==NULL);
    }
    //Checking peek elemnet on stack;
    int peek(){
        if(head == NULL) return INT_MAX;
        return head->data;
    }
};
int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<"Currecnt size "<<s1.Size()<<endl;
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    return 0;
}