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

Node *createLinkedlist(int arr[], int index, int size) {
    if(index == size){
        return NULL;
    }
    Node *temp=NULL;
    temp= new Node(arr[index]);
    temp->next= createLinkedlist(arr, index+1, size);
    return temp;
}






int main() {
    int arr[]= {1,2,3,4};
    Node *head=NULL;
    head=createLinkedlist(arr, 0, 4);
    if(head != NULL) 
    {
        Node *temp=head;
        head=head->next;
        delete temp;

    }
    Node *temp2= head;
    while(temp2 != NULL) {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
   
   
}