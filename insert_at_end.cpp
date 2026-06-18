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

int main() {
    int arr[]={2,4,6,8,10};
    Node *Head=NULL;
    Node *Tail=NULL;

    for(int i=0; i<=4; i++) {
        if(Head == NULL) {
            Head= new Node(arr[i]);
            Tail=Head;
        }
        else {
            Tail->next = new Node(arr[i]);
            Tail= Tail->next;
        }
    }
    Node *temp=Head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}