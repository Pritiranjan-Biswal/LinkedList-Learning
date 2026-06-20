#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[], int index, int size)
{
    // base case
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    Node *Head = NULL;
    Head = CreateLinkedList(arr, 0, 5);

    // delete node at end in a linkedlist

    if(Head != NULL) 
    {
        //only one node is present 
        if(Head->next ==NULL) 
        {
            delete Head;
            Head=NULL;
        }
        //more than one node is present
        else
        {
            Node *curr=Head;
            Node *prev=NULL;

            while(curr->next != NULL) 
            {
                prev=curr;
                curr=curr->next;

            }
            prev->next=curr->next;
            delete curr;
        }
    }


    Node *temp = Head;

    while (temp)
    {
        cout << "Current node: " << temp
             << "  Data: " << temp->data
             << "  Next: " << temp->next << endl;

        temp = temp->next;
    }
}