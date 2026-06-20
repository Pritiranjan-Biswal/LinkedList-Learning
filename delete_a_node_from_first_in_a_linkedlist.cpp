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

    // delete node at start
    if (Head != NULL)
    {
        Node *temp=Head;
        Head=Head->next;
        delete temp;
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