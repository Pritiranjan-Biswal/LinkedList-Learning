#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    // Create Doubly Linked List
    for(int i = 0; i < 5; i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    // Position to delete
    int pos = 3;

    if(head == NULL)
    {
        cout << "Linked List is empty";
        return 0;
    }

    // Delete first node
    if(pos == 1)
    {
        Node *temp = head;

        if(head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }
    else
    {
        Node *curr = head;

        // Move to the required position
        for(int i = 1; i < pos; i++)
        {
            if(curr == NULL)
            {
                cout << "Invalid Position";
                return 0;
            }
            curr = curr->next;
        }

        if(curr == NULL)
        {
            cout << "Invalid Position";
            return 0;
        }

        // Delete last node
        if(curr == tail)
        {
            tail = curr->prev;
            tail->next = NULL;
        }
        // Delete middle node
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }

        delete curr;
    }

    // Print Linked List
    cout << "Linked List after deletion:\n";

    Node *temp = head;
    while(temp)
    {
        cout << "prev -> " << temp->prev
             << "  data -> " << temp->data
             << "  next -> " << temp->next << endl;

        temp = temp->next;
    }

    return 0;
}