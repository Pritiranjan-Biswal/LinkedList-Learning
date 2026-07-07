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
       

        //delete at start
    }
    if(head !=NULL)
    {
        //if only one node exist
        if(head->next==NULL) 
        {
            delete head;
            head=NULL;
        }
        //if more than one node exist
        else 
        {
            Node *temp=head;
            head=head->next;
            delete temp;

             if(head) 
              {
               head->prev=NULL;
          }
             }
    }
    //delete at end
    if(head != NULL)
    {
        //if only one node exist
        if(head->next ==NULL)
        {
            delete head;
            head=NULL;
        }


        //if more than 1 
        else 
        {
            Node *curr=head;
            //last node 
            while(curr->next)
            {
                curr=curr->next;
            }
            curr->prev->next=NULL;
            delete curr;

        }
    }

    

    Node *a=head;
    while(a) 
    {
        cout<<"prev ->"<<a->prev<<" "<< "data ->"<<a->data<< " "<<"next ->"<<a->next<<endl;
        a=a->next;
    }
}