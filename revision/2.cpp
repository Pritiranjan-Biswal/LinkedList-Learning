#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;
    Node(int value) {
        data=value;
        next=NULL;
    }
};


int main() {
    int arr[]= {1,2,3,4,5};

    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0; i<5; i++) {
        if(head == NULL) {
            head= new Node(arr[i]);
            tail=head;
        }
        else {
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
    Node *temp=head;
    while(temp!= NULL) {
        cout<<temp->data<<" ";
        temp=  temp->next;
    }
}