/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
  
  
  //reverse the linkedlist
  
  Node* Reverse(Node *curr, Node *prev)
  {
      if(curr==NULL)
      return prev;
      
      
      Node *front= curr->next;
      curr->next=prev;
      return Reverse(front, curr);
      
  }
  
  Node* movingZeros(Node *head)
  {
      while(head->data == 0 && head!=NULL && head->next != NULL)
      {
          head= head->next;
      }
      return head;
  }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        head1 = movingZeros(head1);
        head2= movingZeros(head2);
        head1=Reverse(head1, NULL);
        head2=Reverse(head2, NULL);
        
        
        Node *curr1= head1;
        Node *curr2=head2;
        Node *head= new Node(0);
        
        Node *tail=head;
        
        int sum, carry=0;
        //addition
        
        while(curr1 && curr2)
        {
            sum=curr1->data+ curr2->data+carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            curr2=curr2->next;
            
            tail=tail->next;
            
            
            carry=sum/10;
        }
        
        while(curr1)
        {
            sum=curr1->data+carry;
            tail->next= new Node(sum%10);
            curr1= curr1->next;
            
            tail=tail->next;
            carry=sum/10;
        }
        
        //
        while(curr2)
        {
            sum=curr2->data+carry;
            tail->next= new Node(sum%10);
            curr2= curr2->next;
            
            tail=tail->next;
            carry=sum/10;
        }
        
        
        
        while(carry)
        {
            tail->next=new Node(carry%10);
            tail=tail->next;
            carry/=10;
        }
        
        
        //dummy node is also present 
        
        
        head= Reverse(head->next, NULL);
        
        
        return head;
        
        
        
        
        
    }
};