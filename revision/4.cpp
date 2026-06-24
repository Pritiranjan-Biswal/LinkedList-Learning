#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
    int data;
    Node *next;
    Node (int value)
    {
        data=value;
        next= NULL;
    }
};

Node *createLinkedlist(int arr[], int index, int size) {
    if(index==size) 
    return NULL;

    Node *temp;
    temp= new Node(arr[index]);
    temp->next=createLinkedlist(arr, index+1, size);
    return temp;
}







int main() {

    int arr[]={2,4,6,8,10};
    Node *head=createLinkedlist(arr, 0, 5);
    int x=3;
    int value=30;
    Node *temp = head;
    x--;
    while(x--) {
        temp=temp->next;
    }
    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;


    Node *temp3 = head;
    while(temp3 != NULL) 
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
}