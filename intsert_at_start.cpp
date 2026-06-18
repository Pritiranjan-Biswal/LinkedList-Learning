#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    int arr[] = {2, 4, 6, 8, 10};

    Node* Head = NULL;

    for(int i = 0; i < 5; i++) {
        if(Head == NULL) {
            Head = new Node(arr[i]);
        }
        else {
            Node* temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }
        

    Node* temp = Head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}