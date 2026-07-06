#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
        next, prev=NULL;
    }
};


int main() {
    Node *head=NULL;

    //linkedlist doesn't exist
    if(head == NULL)
    {
        head= new Node(5);
    }
    //linkedlidt doesn't exist
    else 
    {
        Node *temp=new Node(5);
        temp->next=head;
        head->prev=temp;
    }
}