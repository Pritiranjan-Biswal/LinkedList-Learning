#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int value) {
        data=value;
        next=NULL;
    }
};
Node* CreateLinkedList(int arr[], int index, int size, Node *prev) {
    if(index ==  size)
    return prev;

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;

    return CreateLinkedList(arr, index+1, size, temp);
}



int main() {
    int arr[]={2,4,6,8,10};
    Node *Head=NULL;
 
    Head=CreateLinkedList(arr, 0,5, NULL);

    int x= 3; //insert position
    int value=30;
    Node *temp=Head;
    x--;
    while(x--) {
        temp=temp->next;


    };

    Node *temp2= new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

   
    temp=Head;
    while(temp ) {  
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}