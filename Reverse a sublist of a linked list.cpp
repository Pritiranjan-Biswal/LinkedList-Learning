/* Structure of a Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        // code here
        
        if(head==NULL)
        return head;
        Node *dummy=new Node(0);
        dummy->next=head;
        
        
        Node *prev=dummy;
        //prev will point to the node before a
        
        for(int i=1; i<a; i++) {
            prev=prev->next;
        }
        //now i am at the previous of a
        
        Node *curr=prev->next;
        Node *front=NULL;
        Node *next=NULL;
        
        for(int i=0; i<b-a+1; i++) 
        {
            front=curr->next;
            curr->next=next;
            next=curr;
            curr=front;
        }
        
        //now connect the reverse part
        Node *first=prev->next;
        prev->next=next;
        first->next=curr;
        
        

      
        Node *ans= dummy->next;
        delete dummy;
        return ans;
        
        
        
        
    }
};