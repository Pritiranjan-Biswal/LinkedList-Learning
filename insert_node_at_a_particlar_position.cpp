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
Node *createLinkelist(int arr[], int index, int size) {
    if (index  == size) {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkelist(arr, index+1, size);
    return temp;

    
}



int main() {
    int arr[]={2,4,6,8,10};
    Node *Head=NULL;
 
    Head=createLinkelist(arr, 0,5);

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