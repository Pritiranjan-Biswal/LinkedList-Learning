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
   
    Node *temp=Head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}