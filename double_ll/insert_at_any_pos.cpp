#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value) 
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
};



int main() {
    Node *head=NULL;
    Node *tail=NULL;

    int arr[]={1,2,3,4,5};

    for(int i=0; i<5; i++) {
        //linkedlist doesn't exist
        if(head==NULL) 
        {
            head=new Node(arr[i]);
            tail=head;
        }

        //ll exist
        else 
        {
            Node *temp=new Node(arr[i]);
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
       


    }

    int pos=5;

    //insert at start
    if(pos==0) 
    {
        //linkedlist exist na kare
        if(head==NULL) 
        {
            head=new Node(6);
        }
        else 
        {
            Node *temp= new Node(6);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }

        //exist kare
    }

    else 
    {
        //insert 
        Node *curr= head;
        //go to the pos where u want to insert
        while(--pos)
        {
            curr=curr->next;

        }

        //insert at end
        if(curr->next ==NULL)
        {
            Node *temp=new Node(6);
            temp->prev=curr;
            curr->next=temp;
        }

        //insert at end
        else 
        {
            Node *temp=new Node(6);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
            temp->next->prev=temp;
        }
    }


























    Node *a=head;
    while(a) 
    {
        cout<<"prev ->"<<a->prev<<" "<< "data ->"<<a->data<< " "<<"next ->"<<a->next<<endl;
        a=a->next;
    }
}